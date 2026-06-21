# Build / cài đặt VNKey trên Linux

## Tải bản build sẵn (khuyến nghị thử engine)

Tải [`VNKey-Linux-x64.tar.gz`](https://github.com/ketviet/VNKey/releases/latest) từ GitHub Releases.

```bash
tar -xzf VNKey-Linux-x64.tar.gz
cd VNKey-Linux-x64
chmod +x vnkey-cli
./vnkey-cli
```

Nhập Telex (ví dụ `vieejt nam`), Enter trống để thoát.

> **Lưu ý:** Đây là **bản preview CLI** — kiểm tra engine Telex trên Linux. **Chưa phải** bộ gõ hệ thống (IBus/Fcitx). Tích hợp desktop đang phát triển.

---

## Tự build từ mã nguồn

### Yêu cầu

- Ubuntu 20.04+ / Debian 11+ hoặc distro tương đương
- `g++` (C++14), `make`

### Các bước

```bash
git clone https://github.com/ketviet/VNKey.git
cd VNKey/Sources/OpenKey/linux
make
./vnkey-cli
```

Output: binary `vnkey-cli`

### Dọn build

```bash
make clean
```

---

## Cấu trúc

```
Sources/OpenKey/linux/
├── Makefile          # Build vnkey-cli
├── globals.cpp       # Biến cấu hình engine
├── vnkey_cli.cpp     # CLI preview Telex
└── README.md
```

Engine dùng chung: `Sources/OpenKey/engine/` (flag `-DLINUX`, header `platforms/linux.h`).

---

## Giấy phép

GPL v3 — fork từ [OpenKey](https://github.com/tuyenvm/OpenKey).

## Liên hệ

- https://ketviet.vn
- https://github.com/ketviet/VNKey/issues
