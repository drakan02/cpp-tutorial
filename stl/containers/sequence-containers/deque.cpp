/*
- Deque: là hàng đợi 2 đầu trong STL.

- Hàm khởi tạo (Constructors):
    deque<data_type> d;                              tạo deque rỗng.
    deque<data_type> d(n);                           tạo deque có n phần tử (mặc định bằng 0 hoặc giá trị mặc định của kiểu).
    deque<data_type> d(n, value);                    tạo deque có n phần tử, mỗi phần tử có giá trị value.
    deque<data_type> d{initializer_list};            khởi tạo từ danh sách khởi tạo.
    deque<data_type> d(deque_other);                 copy constructor.
    deque<data_type> d(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm truy cập phần tử:
    at(pos)             truy cập phần tử tại vị trí pos (có kiểm tra out-of-range).
    operator[](pos)     truy cập phần tử (không kiểm tra out-of-range).
    front()             trả về phần tử đầu tiên.
    back()              trả về phần tử cuối cùng.

- Hàm dung lượng (Capacity):
    empty()              kiểm tra rỗng (T/F).
    size()               số phần tử hiện tại (size_t).
    max_size()           số phần tử tối đa có thể chứa.

- Hàm sửa đổi (Modifiers):
    push_back(value)     thêm phần tử vào cuối.
    push_front(value)    thêm phần tử vào đầu.
    pop_back()           xóa phần tử cuối cùng.
    pop_front()          xóa phần tử đầu tiên.
    clear()              xóa toàn bộ phần tử.

    insert(iterator pos, value)                          chèn phần tử value vào trước vị trí pos.
    insert(iterator pos, n, value)                       chèn n phần tử value vào trước vị trí pos.
    insert(iterator pos, iterator first, iterator last)  chèn từ một dải [first, last) vào trước vị trí pos.
    insert(iterator pos, initializer_list)               chèn một danh sách khởi tạo vào trước vị trí pos.
    erase(iterator pos)                                  xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)                 xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    
    assign({initializer_list})             xóa toàn bộ phần tử và gán nội dung từ danh sách khởi tạo mới.
    assign(n, value)                       xóa toàn bộ phần tử và gán n phần tử, mỗi phần tử có giá trị value.
    assign(other.begin(), other.end())     xóa toàn bộ phần tử và gán nội dung từ 1 dải [other.begin(), other.end()).
    resize(n)                              đặt lại size bằng n và giữ lại n giá trị đầu;
    resize(n, value)                       đặt lại size bằng n và giữ lại các giá trị và thêm value vào các vị trí còn trống;
    swap(deque_other)                      hoán đổi dữ liệu với other.
*/