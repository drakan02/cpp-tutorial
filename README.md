# C++

### Giới thiệu về ngôn ngữ lập trình C++

* C++ là một ngôn ngữ lập trình bậc trung, được phát triển bởi Bjarne Stroustrup năm 1979 tại Bell Labs. Từ thập niên 1990, C++ đã trở thành một trong những ngôn ngữ lập trình phổ biến nhất trên thế giới.


### Một số ưu điểm của ngôn ngữ lập trình C++:

* **Đa nền tảng**: chương trình được viết bằng C++ có thể chạy được trên nhiều nền tảng khác nhau như Windows, Mac OS, Linux, ...

* **Cộng đồng lập trình lớn**: C++ là một trong những ngôn ngữ phổ biến nhất thế giới nên có cộng đồng lập trình viên lớn, bạn có thể dễ dàng tìm kiếm các tài liệu, các lỗi gặp phải khi lập trình trên mạng.

* **Bộ thư viện hỗ trợ mạnh mẽ**: C++ có bộ thư viện chuẩn và bộ thư viện của bên thứ 3 với nhiều cấu trúc dữ liệu, thuật toán, ... để giúp bạn dễ dàng phát triển chương trình một cách nhanh chóng (bạn sẽ được học và hiểu về thư viện trong các bài tiếp theo).

* **Đa năng**: C++ có thể được dùng để lập trình nhúng, lập trình hệ thống, lập trình ứng dụng,  lập trình game, ...

* **Hiệu năng cao**: chương trình được viết bằng C++ sẽ cho tốc độ thực thi nhanh hơn các chương trình được viết bởi các ngôn ngữ lập trình khác như Java, C#, Python, ... Vì thế với các ứng dụng nặng, cần có tốc độ xử lý nhanh hay các game 3D thường được viết bằng C++.

* **Hỗ trợ lập trình hướng đối tượng**: C++ cho phép bạn lập trình theo phương pháp hướng đối tượng, giúp cho chương trình dễ phát triển và bảo trì hơn (bạn sẽ được học và hiểu về lập trình hướng đối tượng trong khóa học này ở các chương sau).


### Ứng dụng của ngôn ngữ lập trình C++

* **Hệ điều hành**: C++ được dùng trong việc phát triển các hệ điều hành mà bạn đang dùng như Windows, Mac OS, ...

* **Lập trình game**: hầu hết các game nổi tiếng hiện nay đều được viết bằng C++ hoặc các Game engine dựa trên C++. Ví dụ như các game Counter Strike, Warcraft III, Doom III, ... đều sử dụng C++.

* **Lập trình ứng dụng**: đây là một trong những mảng mạnh nhất của C++. Có rất nhiều ứng dụng lớn được tạo ra bởi C++ mà chúng ta đang sử dụng như Word, Excel, Powerpoint, Google Chrome, Firefox, Adobe Photoshop & Illustrator, ...

* **Lập trình nhúng**: C++ cũng được sử dụng nhiều trong các thiết bị như đồng hồ thông minh, thiết bị y tế, ...

* Ngoài ra C++ còn được dùng để tạo ra các tình biên dịch, các hệ quản trị cơ sở dữ liệu, ...


# Quá trình biên dịch chương trình C++

### Biên dịch chương trình là gì?

* Quy trình dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao sang ngôn ngữ đích (ngôn ngữ máy) để máy tính có thể hiểu và thực thi. Ngôn ngữ lập trình C++ là một ngôn ngữ dạng biên dịch. Chương trình được viết bằng C++ muốn chạy được trên máy tính phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:

![img](https://s3-sgn09.fptcloud.com/codelearnstorage/Media/Default/Users/Darksider/ssj/maxresdefault.jpg)

1. **Preprocessing (tiền xử lý)**
    * Nhận mã nguồn.
    * Xóa bỏ tất cả chú thích, comments của chương trình.
    * Chỉ thị tiền xử lý (bắt đầu bằng #) cũng được xử lý.

2. **Compilation (biên dịch)**
    * Trình biên dịch phân tích mã nguồn C++ thuần túy (bây giờ không có bất kỳ chỉ thị tiền xử lý nào) và chuyển đổi nó assembly code.
    * Ở giai đoạn này, trình biên dịch sẽ bắt các lỗi về kiểu dữ liệu, phân tích (syntax) cú pháp đồng thời có thể thực hiện tối ưu tự động source code để chương trình hoạt động hiệu quả hơn. Nếu có lỗi xảy ra trình biên dịch sẽ thông báo và chúng ta phải sửa lại code để xử lý các lỗi đó và thực hiện biên dịch lại.

3. **Assembling**
    * assembler chuyển đổi các assembly code trong các assembler files thành mã máy (machine code – là mã mà CPU có thể hiểu được) trong các object code files. Lưu ý assembler phụ thuộc vào kiến trúc của CPU (x86, PowerPC, ARM,…) nên các kiến trúc CPU khác nhau thì sẽ có các assembler khác nhau. Trên hệ thống UNIX, các object code files có hậu tố .o (.OBJ trên Windows). 
    * Các object code files chứa code đã được biên dịch (ở dạng nhị phân) của các symbols (có hiểu đơn giản symbols ở đây là các hàm, các biến) định nghĩa trong file source đầu vào. Symbols trong các object code files được tham chiếu đến bằng tên.

4. **Linker (Trình liên kết)**
    * Giai đoạn này sẽ tạo thành chương trình đích duy nhất của quá trình biên dịch từ các object code files mà assembler đã tạo ra ở bước trước đó. Đầu ra này có thể là thư viện shared (or dynamic) library hoặc file chaỵ (executable file).
    * Nó liên kết tất cả các object code files bằng cách thay thế các tham chiếu đến các symbols bằng các địa chỉ chính xác. Mỗi symbol này có thể được định nghĩa trong các object code files khác hoặc trong các thư viện. Nếu chúng được định nghĩa trong các thư viện khác với thư viện chuẩn, bạn cần phải khai báo rõ với linker về chúng (điều này được thực hiện thông qua các config build).