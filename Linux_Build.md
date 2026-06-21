# Build VNKey trên Linux

**VNKey chưa có bản phát hành chính thức cho Linux.** Phần Linux trong repo vẫn đang phát triển (kế thừa từ [OpenKey Linux](https://github.com/tuyenvm/OpenKey/tree/master/Sources/OpenKey/linux)).

Người dùng Linux hiện **phải tự build** nếu muốn thử nghiệm.

---

## Trạng thái hiện tại

| Thành phần | Trạng thái |
|------------|------------|
| Engine C++ (`Sources/OpenKey/engine/`) | Có sẵn, hỗ trợ `platforms/linux.h` |
| Shell / GUI Linux | Chưa hoàn thiện trong repo VNKey |
| Bản cài sẵn từ KétViệt | **Không có** |

Demo sớm của OpenKey Linux (gốc): [YouTube](https://www.youtube.com/watch?v=NjpirdDo-nY)

---

## Yêu cầu (dự kiến)

Khi shell Linux hoàn thiện, build sẽ cần tương tự OpenKey gốc:

- GCC hoặc Clang (C++14)
- CMake hoặc build system được dự án định nghĩa
- Thư viện phụ thuộc theo môi trường desktop (X11 / Wayland) — API input Linux phức tạp hơn macOS/Windows

Theo dõi thư mục:

```
Sources/OpenKey/linux/
Sources/OpenKey/engine/platforms/linux.h
```

---

## Clone mã nguồn

```bash
git clone https://github.com/ketviet/VNKey.git
cd VNKey
```

---

## Hướng build tạm thời (engine only)

Engine có thể biên dịch độc lập để kiểm tra logic gõ (không có app desktop đầy đủ):

```bash
cd Sources/OpenKey/engine
# Tham khảo các file .cpp: Engine.cpp, Vietnamese.cpp, Macro.cpp, ...
# Biên dịch thử (ví dụ):
c++ -std=c++14 -DLINUX -c Engine.cpp -o Engine.o
```

> Đây chỉ là bước kiểm tra engine, **không** tạo bộ gõ hệ thống hoàn chỉnh.

---

## Khuyến nghị người dùng Linux

1. **macOS / Windows:** dùng [bản release macOS](https://github.com/ketviet/VNKey/releases/latest) hoặc [build Windows](Windows_Build.md)
2. **Linux:** theo dõi repo VNKey; đóng góp PR phần `Sources/OpenKey/linux/` nếu bạn muốn hỗ trợ nền tảng này

---

## Giấy phép

**GPL v3** — fork từ [OpenKey](https://github.com/tuyenvm/OpenKey). Phân phối bản build phải công khai mã nguồn.

## Liên hệ

- https://ketviet.vn
- https://github.com/ketviet/VNKey/issues
