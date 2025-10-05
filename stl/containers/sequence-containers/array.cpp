/*
- Array: là containers giả mảng tĩnh trong STL.

- Hàm khởi tạo (Constructors):
    array<data_type, size> a;                               tạo array có n phần tử (mặc định bằng 0 hoặc giá trị mặc định của kiểu).
    array<data_type, size> a{initializer_list};             khởi tạo từ danh sách khởi tạo.
    array<data_type, size> a(array_other);                  copy constructor.
    array<data_type, size> s(other.begin(), other.end());   copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm truy cập phần tử:
    at(pos)             truy cập phần tử tại vị trí pos (có kiểm tra out-of-range).
    operator[](pos)     truy cập phần tử (không kiểm tra out-of-range).
    front()             trả về phần tử đầu tiên.
    back()              trả về phần tử cuối cùng.
    data()              trả về con trỏ đến mảng dữ liệu bên trong.

- Hàm dung lượng (Capacity):
    empty()              kiểm tra rỗng (T/F).
    size()               số phần tử - luôn bằng N (size_t).
    max_size()           giống size().
- Hàm sửa đổi (Modifiers):
    fill(value)         điền tất cả phần tử bằng value.
    swap(array_other)   hoán đổi với other.
*/