/*
- Unordered_set: các phần tử là duy nhất, không được sắp xếp.

- Hàm khởi tạo (Constructors):
    unordered_set<data_type> us;                              tạo unordered_set rỗng.
    unordered_set<data_type> us{initializer_list};            khởi tạo từ danh sách khởi tạo.
    unordered_set<data_type> us(unordered_set_other);         copy constructor.
    unordered_set<data_type> us(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm dung lượng (Capacity):
    empty()         kiểm tra rỗng (T/F).
    size()          số phần tử hiện tại (size_t).
    max_size()      số phần tử tối đa có thể chứa.

- Hàm sửa đổi (Modifiers):
    clear()          xóa toàn bộ phần tử.

    insert(key)                            chèn thêm phần tử.
    insert(iterator first, iterator last)  chèn từ một dải [first, last).
    insert(initializer_list)               chèn một danh sách khởi tạo.
    erase(key)                             xóa phần tử có giá trị key.
    erase(iterator pos)                    xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)   xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    extract(key)                           rút ra một phần tử có giá trị key khỏi container.
    extract(interator pos)                 rút ra phần tử tại vị trí pos khỏi container.

    merge(unordered_set_other)     trộn với unordered_set khác.
    swap(unordered_set_other)      hoán đổi dữ liệu với other.

- Tìm kiếm (Lookup):
    count(key)         đếm số phần tử có giá trị bằng key (unordered_set chỉ trả về 0 hoặc 1).
    find(key)          iterator tới phần tử có giá trị bằng key nếu có, nếu không có trả về end().

- Buckets:
    bucket_count();          số buckets hiện tại.
    max_bucket_count();      số buckets tối đa.
    bucket_size(n);          số phần tử trong bucket n.
    bucket(key);             bucket chứa key.

- Hash policy
    load_factor();           tỉ lệ tải = size / bucket_count.
    max_load_factor();       ngưỡng load factor.
    rehash(n);               thay đổi số bucket tối thiểu.
    reserve(n);              đặt số phần tử kỳ vọng (tự rehash).

- Observers
    hash_function();   hàm băm dùng.
    key_eq();          hàm so sánh key.
*/