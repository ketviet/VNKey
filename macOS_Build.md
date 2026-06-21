## Build VNKey cho macOS

**VNKey** — bộ gõ tiếng Việt do [KétViệt](https://ketviet.vn) phát triển.

**Yêu cầu:** macOS Mojave+, Xcode 10+

**Các bước:**

1. Mở `Sources/OpenKey/macOS/VNKey.xcodeproj`
2. Scheme **VNKey**
3. Signing & Capabilities → chọn Team của bạn
4. Product → Run hoặc Archive

Output: **VNKey.app**

Sau khi cài, cấp quyền Accessibility cho **VNKey** trong System Settings.

**Lưu ý build:** Lỗi `invalid in C99` ở `MJAccessibilityUtils.m` → thêm `extern BOOL AXAPIEnabled();` đầu file.
