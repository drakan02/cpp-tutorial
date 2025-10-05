/*
- Set: các phần tử là duy nhất, được tự động sắp xếp theo thứ tự tăng dần.

- Hàm khởi tạo (Constructors):
    set<data_type> s;                              tạo set rỗng.
    set<data_type> s{initializer_list};            khởi tạo từ danh sách khởi tạo.
    set<data_type> s(set_other);                   copy constructor.
    set<data_type> s(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm dung lượng (Capacity):
    empty()         kiểm tra rỗng (T/F).
    size()          số phần tử hiện tại (size_t).
    max_size()      số phần tử tối đa có thể chứa.

- Hàm sửa đổi (Modifiers):
    clear()          xóa toàn bộ phần tử.

    insert(key)                            chèn phần tử key.
    insert(interator hint, key)            chèn với gợi ý.
    insert(iterator first, iterator last)  chèn từ một dải [first, last).
    insert(initializer_list)               chèn một danh sách khởi tạo.
    erase(key)                             xóa phần tử có giá trị key.
    erase(iterator pos)                    xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)   xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    extract(key)                           rút ra một phần tử có giá trị key khỏi container.
    extract(interator pos)                 rút ra phần tử tại vị trí pos khỏi container.

    merge(set_other)     trộn với set khác.
    swap(set_other)      hoán đổi dữ liệu với other.

- Tìm kiếm (Lookup):
    count(key)         đếm số phần tử có giá trị bằng key (set chỉ trả về 0 hoặc 1).
    find(key)          iterator tới phần tử có giá trị bằng key nếu có, nếu không có trả về end().
    lower_bound(key)   iterator tới phần tử ≥ key.
    upper_bound()      iterator tới phần tử > key.
    equal_range(key)   trả về pair iterator [lower_bound, upper_bound).

- Observers
    key_comp()     comparator cho key.
    value_comp()   comparator cho value (giống key_comp vì set chỉ lưu key).
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {5, 3, 9, 7, 4, 1};
    auto nh = s.extract(3);
    for (int x : s) cout << x << " ";

    return 0;
}