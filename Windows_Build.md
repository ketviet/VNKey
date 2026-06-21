# Build VNKey trên Windows

**VNKey** hiện **chưa phát hành bản cài sẵn cho Windows**. Bạn cần tự build từ mã nguồn.

Phần Windows kế thừa shell **OpenKey for Windows** (chưa rebrand UI). Engine gõ tiếng Việt dùng chung trong `Sources/OpenKey/engine/`.

---

## Yêu cầu

- Windows 10 trở lên (Vista+ theo OpenKey gốc)
- [Visual Studio 2017](https://visualstudio.microsoft.com/) trở lên
- Workload: **Desktop development with C++**
- Windows 10 SDK

---

## Các bước build

### 1. Clone mã nguồn

```powershell
git clone https://github.com/ketviet/VNKey.git
cd VNKey
```

### 2. Mở solution

Mở file:

```
Sources\OpenKey\win32\OpenKey\OpenKey.sln
```

bằng Visual Studio.

### 3. Chọn cấu hình

- **Configuration:** `Release`
- **Platform:** `x64` (khuyến nghị) hoặc `x86`

### 4. Build

Menu **Build → Rebuild Solution** (hoặc `Ctrl+Shift+B`).

Output nằm tại:

```
Sources\OpenKey\win32\OpenKey\x64\Release\OpenKey.exe
```

(hoặc `Release\OpenKey.exe` với platform x86)

### 5. Chạy thử

- Chạy `OpenKey.exe` — Windows có thể hỏi quyền Administrator (cần cho gõ trong game)
- Biểu tượng **V** trên system tray → double-click mở bảng điều khiển

---

## Build bằng dòng lệnh (MSBuild)

```powershell
cd Sources\OpenKey\win32\OpenKey
msbuild OpenKey.sln /p:Configuration=Release /p:Platform=x64 /t:Rebuild
```

---

## Lưu ý

- **Tên file output** vẫn là `OpenKey.exe` (chưa rebrand Windows). App macOS mới mang tên VNKey.
- Tắt bộ gõ khác (Unikey, EVKey…) khi dùng để tránh xung đột.
- Mã nguồn **GPL v3** — nếu phân phối bản build của bạn, phải công khai mã nguồn và ghi credit [OpenKey](https://github.com/tuyenvm/OpenKey) gốc.

---

## Báo lỗi / đóng góp

- Issue: https://github.com/ketviet/VNKey/issues
- Website: https://ketviet.vn
