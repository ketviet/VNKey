# VNKey

### [Tải bản mới nhất cho macOS](https://github.com/ketviet/VNKey/releases/latest)
[![GitHub release](https://img.shields.io/github/v/release/ketviet/VNKey.svg)](https://github.com/ketviet/VNKey/releases/latest)

**Bộ gõ tiếng Việt cho macOS** — phát triển bởi [KétViệt](https://ketviet.vn).

| Nền tảng | Cài đặt |
|----------|---------|
| **macOS** | [Tải `.zip` từ Releases](https://github.com/ketviet/VNKey/releases/latest) — giải nén, kéo `VNKey.app` vào Applications |
| **Windows** | Chưa có bản phát hành — [tự build](Windows_Build.md) |
| **Linux** | Chưa có bản phát hành — [tự build](Linux_Build.md) |

---

## Cài đặt nhanh (macOS)

1. Tải `VNKey-*-macOS.zip` từ [Releases](https://github.com/ketviet/VNKey/releases/latest)
2. Giải nén → kéo **VNKey.app** vào **Applications**
3. Mở VNKey → cấp quyền **Accessibility** (System Settings → Privacy & Security)
4. Tắt bộ gõ khác (OpenKey, Unikey, EVKey…) để tránh xung đột

Tự build từ mã nguồn: [macOS_Build.md](macOS_Build.md)

---

## Dựa trên OpenKey

**VNKey là fork và phát triển tiếp từ [OpenKey](https://github.com/tuyenvm/OpenKey)** — bộ gõ tiếng Việt mã nguồn mở của Mai Vũ Tuyên.

| | OpenKey (gốc) | VNKey (KétViệt) |
|---|---|---|
| Tác giả gốc | [Mai Vũ Tuyên](https://github.com/tuyenvm/OpenKey) | [KétViệt](https://ketviet.vn) |
| macOS | Có | **Có** — bản release chính thức |
| Windows | Có (OpenKey.exe) | Mã nguồn có — [tự build](Windows_Build.md) |
| Linux | Đang phát triển | Mã nguồn có — [tự build](Linux_Build.md) |
| Engine | C++ (`Sources/OpenKey/engine/`) | Kế thừa engine OpenKey |
| Giấy phép | GPL v3 | GPL v3 (bắt buộc kế thừa từ OpenKey) |

Theo **GPL v3**, khi phân phối VNKey bạn phải công khai mã nguồn, ghi rõ dựa trên OpenKey, và giữ license GPL v3.

---

## Tính năng

- Kiểu gõ: **Telex**, **VNI**, **Simple Telex**
- Bảng mã: Unicode, TCVN3, VNI Windows, Unicode tổ hợp, CP1258
- Kiểm tra chính tả & ngữ pháp, Quick Telex, macro, chuyển mã
- Smart Switch, nhớ bảng mã theo ứng dụng
- Sửa lỗi event tap (macOS) — tự bật lại hook khi bị hệ thống tắt

---

## Hướng dẫn build theo nền tảng

| Nền tảng | Tài liệu |
|----------|----------|
| macOS | [macOS_Build.md](macOS_Build.md) |
| Windows | [Windows_Build.md](Windows_Build.md) |
| Linux | [Linux_Build.md](Linux_Build.md) |

---

## Thông tin sản phẩm

| | |
|---|---|
| **App** | VNKey |
| **Phát triển** | [KétViệt](https://ketviet.vn) |
| **Website** | https://ketviet.vn |
| **Liên hệ** | contact@ketviet.vn |
| **Bundle ID (macOS)** | `vn.ketviet.vnkey` |
| **Repo** | https://github.com/ketviet/VNKey |

---

## Cấu trúc mã nguồn

```
VNKey/
├── Sources/OpenKey/engine/     # Engine C++ (từ OpenKey)
├── Sources/OpenKey/macOS/      # VNKey.app — VNKey.xcodeproj
├── Sources/OpenKey/win32/      # Shell Windows (tự build)
├── Sources/OpenKey/linux/      # Shell Linux (đang phát triển)
├── macOS_Build.md
├── Windows_Build.md
└── Linux_Build.md
```

---

## Giấy phép & Credit

**GPL v3** — xem [LICENSE](LICENSE).

- **[OpenKey](https://github.com/tuyenvm/OpenKey)** — Mai Vũ Tuyên. Engine và thuật toán gõ tiếng Việt.
- **[KétViệt](https://ketviet.vn)** — Phát triển, bảo trì và phát hành VNKey (macOS).
