# Build / cài đặt VNKey trên Windows

## Tải bản build sẵn (khuyến nghị)

Tải [`VNKey-Windows-x64.zip`](https://github.com/ketviet/VNKey/releases/latest) từ GitHub Releases.

1. Giải nén thư mục
2. Chạy **VNKey.exe** (Windows có thể hỏi quyền Administrator — cần cho gõ trong game)
3. Biểu tượng **V** trên system tray → double-click mở bảng điều khiển
4. Tắt bộ gõ khác (Unikey, EVKey…) để tránh xung đột

> Shell Windows kế thừa từ OpenKey; file exe được đặt tên **VNKey.exe** trong bản release.

---

## Tự build từ mã nguồn

### Yêu cầu

- Windows 10+
- [Visual Studio 2017+](https://visualstudio.microsoft.com/) với **Desktop development with C++**
- Windows 10 SDK

### Visual Studio

1. Clone repo, mở `Sources\OpenKey\win32\OpenKey\OpenKey.sln`
2. Configuration: **Release**, Platform: **x64**
3. **Build → Rebuild Solution**
4. Output: `Sources\OpenKey\win32\OpenKey\x64\Release\OpenKey.exe`

### MSBuild (dòng lệnh)

```powershell
cd Sources\OpenKey\win32\OpenKey
msbuild OpenKey.sln /p:Configuration=Release /p:Platform=x64 /t:Rebuild
```

---

## Giấy phép

GPL v3 — fork từ [OpenKey](https://github.com/tuyenvm/OpenKey). Phân phối bản build phải công khai mã nguồn.

## Liên hệ

- https://ketviet.vn
- https://github.com/ketviet/VNKey/issues
