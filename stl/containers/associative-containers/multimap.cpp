/*
- Multimap: lưu cặp {key, value} cho phép trùng lặp key, được tự động sắp xếp tăng dần theo value.

- Hàm khởi tạo (Constructors):
    multimap<data_type> mm;                              tạo multimap rỗng.
    multimap<data_type> mm{initializer_list};            khởi tạo từ danh sách khởi tạo.
    multimap<data_type> mm(multimap_other);              copy constructor.
    multimap<data_type> mm(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm dung lượng (Capacity):
    empty()         kiểm tra rỗng (T/F).
    size()          số phần tử hiện tại (size_t).
    max_size()      số phần tử tối đa có thể chứa.

- Hàm sửa đổi (Modifiers):
    clear()          xóa toàn bộ phần tử.

    insert({key, value})                   chèn phần tử {key, value}, cho phép trung key.
    insert(interator hint, {key, value})   chèn với gợi ý.
    insert(iterator first, iterator last)  chèn từ một dải [first, last).
    insert(initializer_list)               chèn một danh sách khởi tạo.
    erase(key)                             xóa tất cả phần tử theo key.
    erase(iterator pos)                    xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)   xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    extract(key)                           rút ra một phần tử có giá trị key khỏi container.
    extract(interator pos)                 rút ra phần tử tại vị trí pos khỏi container.

    merge(map_other)     trộn với map khác.
    swap(map_other)      hoán đổi dữ liệu với other.

- Tìm kiếm (Lookup):
    count(key)         đếm số phần tử có giá trị bằng key (map chỉ trả về 0 hoặc 1).
    find(key)          iterator tới phần tử đầu tiên có giá trị bằng key nếu có, nếu không có trả về end().
    lower_bound(key)   iterator tới phần tử ≥ key.
    upper_bound()      iterator tới phần tử > key.
    equal_range(key)   trả về cặp iterator [lower_bound, upper_bound).

- Observers
    key_comp()     comparator cho key.
    value_comp()   comparator cho value.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, int> mp;
    mp.insert(make_pair(1, 100));
    mp.insert(make_pair(2, 200));
    mp.insert(make_pair(2, 300));
    mp.insert({3, 500});
    mp.insert({1, 200});
    mp.insert({3, 400});
    //tra ve con tro den phan tu dau tien co key = 2
    auto it = mp.find(2);
    mp.erase(it);
    for(auto it : mp){
        cout << "key = " << it.first << ", value = " << it.second << endl;
    }
}