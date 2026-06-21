# VNKey

**Bộ gõ tiếng Việt cho macOS** — phát triển bởi [KétViệt](https://ketviet.vn).

---

## Dựa trên OpenKey

**VNKey là fork và phát triển tiếp từ [OpenKey](https://github.com/tuyenvm/OpenKey)** — bộ gõ tiếng Việt mã nguồn mở của Mai Vũ Tuyên.

| | OpenKey (gốc) | VNKey (KétViệt) |
|---|---|---|
| Tác giả gốc | [Mai Vũ Tuyên](https://github.com/tuyenvm/OpenKey) | [KétViệt](https://ketviet.vn) |
| Mục tiêu | Bộ gõ macOS/Windows đa nền tảng | Bộ gõ macOS, ổn định hơn, thương hiệu KétViệt |
| Engine | C++ (`Sources/OpenKey/engine/`) | Kế thừa engine OpenKey |
| Giấy phép | GPL v3 | GPL v3 (bắt buộc kế thừa từ OpenKey) |

VNKey **giữ nguyên engine gõ** (Telex, VNI, kiểm tra chính tả, macro, chuyển mã, Smart Switch…) và thay đổi phần shell macOS: tên app, bundle ID, giao diện, branding KétViệt.

Theo **GPL v3**, khi phân phối VNKey bạn phải:
- Công khai mã nguồn
- Ghi rõ VNKey dựa trên OpenKey
- Giữ license GPL v3

Mã nguồn OpenKey gốc: https://github.com/tuyenvm/OpenKey

---

## Tính năng

- Kiểu gõ: **Telex**, **VNI**, **Simple Telex**
- Bảng mã: Unicode, TCVN3, VNI Windows, Unicode tổ hợp, CP1258
- Kiểm tra chính tả & ngữ pháp, Quick Telex, macro, chuyển mã
- Smart Switch (tự đổi Việt/Anh theo app), nhớ bảng mã theo ứng dụng
- Và các tính năng khác kế thừa từ OpenKey

---

## Yêu cầu hệ thống

- macOS 10.14 trở lên
- Quyền **Accessibility** (System Settings → Privacy & Security)
- Xcode 10+ (chỉ cần khi tự build)

> **Lưu ý:** Tắt bộ gõ khác (OpenKey, Unikey, EVKey…) khi dùng VNKey để tránh xung đột.

---

## Build từ mã nguồn

```bash
git clone git@github.com:ketviet/VNKey.git
cd VNKey
open Sources/OpenKey/macOS/VNKey.xcodeproj
```

Trong Xcode: chọn scheme **VNKey** → Product → Run (Debug) hoặc Archive (Release).

Hướng dẫn chi tiết: [macOS_Build.md](macOS_Build.md)

Sau khi build, kéo **VNKey.app** vào Applications và bật quyền Accessibility cho VNKey.

---

## Thông tin sản phẩm

| | |
|---|---|
| **App** | VNKey |
| **Phát triển** | [KétViệt](https://ketviet.vn) |
| **Website** | https://ketviet.vn |
| **Liên hệ** | contact@ketviet.vn |
| **Bundle ID** | `vn.ketviet.vnkey` |
| **Repo** | https://github.com/ketviet/VNKey |

---

## Cấu trúc mã nguồn

```
VNKey/
├── Sources/OpenKey/engine/     # Engine C++ (từ OpenKey)
├── Sources/OpenKey/macOS/      # App macOS — VNKey.xcodeproj
├── Sources/OpenKey/win32/      # OpenKey Windows (chưa rebrand)
└── macOS_Build.md
```

Branding tập trung tại `Sources/OpenKey/macOS/ModernKey/VNKeyBranding.h`.

---

## Giấy phép & Credit

**GPL v3** — xem [LICENSE](LICENSE).

**Credit:**
- **[OpenKey](https://github.com/tuyenvm/OpenKey)** — Mai Vũ Tuyên. Engine và thuật toán gõ tiếng Việt.
- **[KétViệt](https://ketviet.vn)** — Phát triển, bảo trì và phát hành VNKey.
