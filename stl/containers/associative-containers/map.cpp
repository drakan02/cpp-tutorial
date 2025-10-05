/*
- Map: lưu cặp {key, value} với key là duy nhất, được tự động sắp xếp tăng dần theo value.

- Hàm khởi tạo (Constructors):
    map<key_data_type, value_data_type> m;                              tạo map rỗng.
    map<key_data_type, value_data_type> m{initializer_list};            khởi tạo từ danh sách khởi tạo.
    map<key_data_type, value_data_type> m(map_other);                   copy constructor.
    map<key_data_type, value_data_type> m(other.begin(), other.end());  copy nội dung từ 1 dải [other.begin(), other.end());

- Hàm dung lượng (Capacity):
    empty()         kiểm tra rỗng (T/F).
    size()          số phần tử hiện tại (size_t).
    max_size()      số phần tử tối đa có thể chứa.

- Hàm truy cập phần tử:
    at(key)    trả tham chiếu đến value của key (nếu không có thì ném out_of_range).
    m[key]     truy cập hoặc tạo mới value mặc định nếu chưa tồn tại key.

- Hàm sửa đổi (Modifiers):
    clear()          xóa toàn bộ phần tử.

    insert({key, value})                   chèn phần tử {key, value}, nếu key đã tồn tại thì bỏ qua.
    insert(interator hint, {key, value})   chèn với gợi ý.
    insert(iterator first, iterator last)  chèn từ một dải [first, last).
    insert(initializer_list)               chèn một danh sách khởi tạo.
    insert_or_assign(key, value)           chèn phần tử {key, value}, nếu key đã tồn tại thì gán lại.
    erase(key)                             xóa phần tử theo key.
    erase(iterator pos)                    xóa phần tử tại vị trí pos, trả về iterator pos chỉ vào phần tử đứng ngay sau phần tử bị xóa.
    erase(iterator first, iterator last)   xóa một dải phần tử [first, last), trả về iterator pos chỉ vào last.
    extract(key)                           rút ra một phần tử có giá trị key khỏi container.
    extract(interator pos)                 rút ra phần tử tại vị trí pos khỏi container.

    merge(map_other)     trộn với map khác.
    swap(map_other)      hoán đổi dữ liệu với other.

- Tìm kiếm (Lookup):
    count(key)         đếm số phần tử có giá trị bằng key (map chỉ trả về 0 hoặc 1).
    find(key)          iterator tới phần tử có giá trị bằng key nếu có, nếu không có trả về end().
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
    map<int, int> mp;
    mp.insert(make_pair(1, 2));
    mp.insert(make_pair(2, 4));
    mp.insert({3,5});
    mp.insert({4,6});
    mp[1] = 3;
    mp[5] = 7;
    if(mp.count(3) != 0){
        mp.erase(3);
    }
    for(pair<int, int> it : mp){
        cout << "key = " << it.first << ", value = " << it.second << endl;
    }
    return 0;
}
