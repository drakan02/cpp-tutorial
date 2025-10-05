/*
- Unordered_map: lưu cặp {key, value} với key là duy nhất, không được sắp xếp.

- Hàm khởi tạo (Constructors):
    unordered_map<data_type> um;                              tạo unordered_map rỗng.
    unordered_map<data_type> um{initializer_list};            khởi tạo từ danh sách khởi tạo.
    unordered_map<data_type> um(unordered_map_other);         copy constructor.
    unordered_map<data_type> um(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm dung lượng (Capacity):
    empty()         kiểm tra rỗng (T/F).
    size()          số phần tử hiện tại (size_t).
    max_size()      số phần tử tối đa có thể chứa.

- Hàm truy cập phần tử:
    at(key)    trả tham chiếu đến value của key (nếu không có thì ném out_of_range).
    um[key]     truy cập hoặc tạo mới value mặc định nếu chưa tồn tại key.

- Hàm sửa đổi (Modifiers):
    clear()          xóa toàn bộ phần tử.

    insert({key, value})                   chèn phần tử {key, value}, nếu key đã tồn tại thì bỏ qua.
    insert(iterator first, iterator last)  chèn từ một dải [first, last).
    insert(initializer_list)               chèn một danh sách khởi tạo.
    insert_or_assign(key, value)           chèn phần tử {key, value}, nếu key đã tồn tại thì gán lại.
    erase(key)                             xóa phần tử theo key.
    erase(iterator pos)                    xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)   xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    extract(key)                           rút ra một phần tử có giá trị key khỏi container.
    extract(interator pos)                 rút ra phần tử tại vị trí pos khỏi container.

    merge(unordered_map_other)     trộn với unordered_map khác.
    swap(unordered_map_other)      hoán đổi dữ liệu với other.

- Tìm kiếm (Lookup):
    count(key)         đếm số phần tử có giá trị bằng key (unordered_map chỉ trả về 0 hoặc 1).
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