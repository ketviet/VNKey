# VNKey

### [Tải bản mới nhất](https://github.com/ketviet/VNKey/releases/latest)
[![GitHub release](https://img.shields.io/github/v/release/ketviet/VNKey.svg)](https://github.com/ketviet/VNKey/releases/latest)

**Bộ gõ tiếng Việt** — phát triển bởi [KétViệt](https://ketviet.vn). Dựa trên [OpenKey](https://github.com/tuyenvm/OpenKey) (GPL v3).

| Nền tảng | Tải & cài đặt |
|----------|----------------|
| **macOS** | [`VNKey-macOS.zip`](https://github.com/ketviet/VNKey/releases/latest) — giải nén → kéo `VNKey.app` vào Applications → bật quyền Accessibility |
| **Windows** | [`VNKey-Windows-x64.zip`](https://github.com/ketviet/VNKey/releases/latest) — giải nén → chạy `VNKey.exe` (quyền Admin nếu Windows hỏi) |
| **Linux** | [`VNKey-Linux-x64.tar.gz`](https://github.com/ketviet/VNKey/releases/latest) — **preview CLI** engine Telex (`./vnkey-cli`); chưa phải bộ gõ hệ thống IBus/Fcitx |

Tự build từ mã nguồn: [macOS](macOS_Build.md) · [Windows](Windows_Build.md) · [Linux](Linux_Build.md)

---

## Cài đặt nhanh

### macOS
1. Tải `VNKey-macOS.zip` từ [Releases](https://github.com/ketviet/VNKey/releases/latest)
2. Kéo **VNKey.app** → **Applications**
3. System Settings → Privacy & Security → **Accessibility** → bật VNKey
4. Tắt bộ gõ khác (OpenKey, Unikey, EVKey…)

### Windows
1. Tải `VNKey-Windows-x64.zip`
2. Giải nén → chạy **VNKey.exe**
3. Biểu tượng **V** trên system tray → double-click mở bảng điều khiển

### Linux (preview)
1. Tải `VNKey-Linux-x64.tar.gz`, giải nén
2. `chmod +x vnkey-cli && ./vnkey-cli`
3. Nhập Telex (vd: `vieejt nam`) để kiểm tra engine

> Bộ gõ desktop Linux (IBus/Fcitx) đang phát triển. CLI hiện tại chỉ để xác minh engine trên Linux.

---

## Dựa trên OpenKey

**VNKey fork từ [OpenKey](https://github.com/tuyenvm/OpenKey)** — Mai Vũ Tuyên.

| | OpenKey (gốc) | VNKey (KétViệt) |
|---|---|---|
| macOS | Có | **Có** — release chính thức |
| Windows | Có | **Có** — `VNKey.exe` (engine OpenKey) |
| Linux | Đang phát triển | **Preview CLI** + engine build |
| Giấy phép | GPL v3 | GPL v3 |

---

## Tính năng (macOS / Windows)

- Telex, VNI, Simple Telex · Unicode, TCVN3, VNI, Unicode tổ hợp, CP1258
- Kiểm tra chính tả, macro, chuyển mã, Smart Switch
- macOS: sửa event tap bị hệ thống tắt

---

## Thông tin

| | |
|---|---|
| Phát triển | [KétViệt](https://ketviet.vn) |
| Liên hệ | contact@ketviet.vn |
| Bundle ID (macOS) | `vn.ketviet.vnkey` |

---

## Credit & License

**GPL v3** — [LICENSE](LICENSE)

- [OpenKey](https://github.com/tuyenvm/OpenKey) — Mai Vũ Tuyên
- [KétViệt](https://ketviet.vn) — VNKey
