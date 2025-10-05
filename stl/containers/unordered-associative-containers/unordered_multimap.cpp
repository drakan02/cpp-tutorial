/*
- Unordered_multimap: lưu cặp {key, value} cho phép trùng lặp key, không được sắp xếp.

- Hàm khởi tạo (Constructors):
    unordered_multimap<data_type> umm;                              tạo unordered_multimap rỗng.
    unordered_multimap<data_type> umm{initializer_list};            khởi tạo từ danh sách khởi tạo.
    unordered_multimap<data_type> umm(unordered_multimap_other);    copy constructor.
    unordered_multimap<data_type> umm(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm dung lượng (Capacity):
    empty()         kiểm tra rỗng (T/F).
    size()          số phần tử hiện tại (size_t).
    max_size()      số phần tử tối đa có thể chứa.

- Hàm sửa đổi (Modifiers):
    clear()          xóa toàn bộ phần tử.

    insert({key, value})                   chèn phần tử {key, value}.
    insert(iterator first, iterator last)  chèn từ một dải [first, last).
    insert(initializer_list)               chèn một danh sách khởi tạo.
    erase(key)                             xóa tất cả phần tử theo key.
    erase(iterator pos)                    xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)   xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    extract(key)                           rút ra một phần tử có giá trị key khỏi container.
    extract(interator pos)                 rút ra phần tử tại vị trí pos khỏi container.

    merge(unordered_multimap_other)     trộn với unordered_multimap khác.
    swap(unordered_multimap_other)      hoán đổi dữ liệu với other.

- Tìm kiếm (Lookup):
    count(key)         đếm số phần tử có giá trị bằng key (unordered_multimap chỉ trả về 0 hoặc 1).
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