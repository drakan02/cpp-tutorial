/*
- List: là danh sách liên kết đôi trong STL.

- Hàm khởi tạo (Constructors):
    list<data_type> l;                              tạo list rỗng.
    list<data_type> l(n);                           tạo list có n phần tử (mặc định bằng 0 hoặc giá trị mặc định của kiểu).
    list<data_type> l(n, value);                    tạo list có n phần tử, mỗi phần tử có giá trị value.
    list<data_type> l{initializer_list};            khởi tạo từ danh sách khởi tạo.
    list<data_type> l(list_other);                  copy constructor.
    list<data_type> l(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm truy cập phần tử:
    front()             trả về phần tử đầu tiên.
    back()              trả về phần tử cuối cùng.

- Hàm dung lượng (Capacity):
    empty()              kiểm tra rỗng (T/F).
    size()               số phần tử hiện tại (size_t).
    max_size()           số phần tử tối đa có thể chứa.

- Hàm sửa đổi (Modifiers):
    push_back(value)     thêm phần tử vào cuối.
    pop_back()           xóa phần tử cuối cùng.
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
    swap(list_other)                       hoán đổi dữ liệu với other.

- Các hàm đặc thù của list (Operations) - chỉ có ở list và forward_list:
    splice(iterator pos, list_other)                                 chuyển toàn bộ phần tử từ other vào trước pos.
    splice(iterator pos, list_other, iterator it)                    chuyển 1 phần tử từ other vào trước pos.
    splice(iterator pos, list_other, iterator first, iterator last)  chuyển một dải [first, last) vào trước pos.

    remove(value)                        xóa tất cả phần tử bằng value.
    remove_if(Predicate p)               xóa theo điều kiện (lambda).
    unique()                             xóa phần tử trùng kề nhau.
    merge(list& other)                   trộn 2 list đã sắp xếp thành 1 list đã sắp xếp.
    merge(list& other, Compare comp)     trộn 2 list đã sắp xếp theo compare thành 1 list đã sắp xếp.
    sort()                               sắp xếp tăng dần.
    sort(Compare comp)                   sắp xếp theo comparator.
    reverse()                            đảo ngược list.
*/