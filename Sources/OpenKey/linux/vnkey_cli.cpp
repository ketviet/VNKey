/*
 * VNKey Linux CLI — kiểm tra engine Telex (preview).
 * Chưa phải bộ gõ hệ thống; dùng để xác minh build Linux.
 */
#include "../engine/Engine.h"

#include <iostream>
#include <string>

static vKeyHookState* pData;

static void appendOutput(std::string& out, const std::string& word) {
    for (char c : word) {
        vKeyHandleEvent(Keyboard, KeyDown, (Uint16)c, 0, false);
        if (pData->code == vWillProcess || pData->code == vRestore || pData->code == vRestoreAndStartNewSession) {
            for (int i = 0; i < pData->backspaceCount; i++) {
                if (!out.empty()) out.pop_back();
            }
            for (int i = 0; i < pData->newCharCount; i++) {
                Uint32 ch = getCharacterCode(pData->charData[i]);
                if (ch <= 0xFFFF) {
                    out.push_back((char)(ch & 0xFF));
                    if (ch > 0xFF) {
                        out.pop_back();
                        // UTF-8 encode BMP char
                        if (ch < 0x800) {
                            out.push_back((char)(0xC0 | (ch >> 6)));
                            out.push_back((char)(0x80 | (ch & 0x3F)));
                        } else {
                            out.push_back((char)(0xE0 | (ch >> 12)));
                            out.push_back((char)(0x80 | ((ch >> 6) & 0x3F)));
                            out.push_back((char)(0x80 | (ch & 0x3F)));
                        }
                    }
                }
            }
            if (pData->code == vRestore || pData->code == vRestoreAndStartNewSession) {
                out.push_back(c);
            }
            if (pData->code == vRestoreAndStartNewSession) {
                startNewSession();
            }
        } else if (pData->code == vDoNothing && pData->extCode == 3) {
            out.push_back(c);
        }
    }
    vKeyHandleEvent(Keyboard, KeyDown, KEY_SPACE, 0, false);
    out.push_back(' ');
    startNewSession();
}

int main() {
    pData = (vKeyHookState*)vKeyInit();
    vLanguage = 1;
    vInputType = vTelex;
    vCheckSpelling = 0;

    std::cout << "VNKey Linux engine preview (Telex)\n";
    std::cout << "Nhập chuỗi Telex (vd: vieejt nam), Enter để thoát.\n\n";

    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty()) break;
        std::string out;
        appendOutput(out, line);
        std::cout << "→ " << out << "\n";
        startNewSession();
    }
    return 0;
}
