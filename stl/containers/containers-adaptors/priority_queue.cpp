/*
- Priority_queue: lưu trữ theo thứ tự ưu tiên (mặc định là max heap).
- Queue sử dụng containers mặc định là vector.

- Hàm khởi tạo (Constructors): 
    priority_queue<data_type> pq;                                                 tạo priority_queue rỗng.
    priority_queue<data_type, container<data_type>> pq(ctn.begin(), ctn.end());    copy containers(vector, deque).
    priority_queue<data_type, vector<data_type>, greater> pq;                      khởi tạo min heap.
    !!! Không thể khởi tạo queue trực tiếp từ danh sách khởi tạo hay container trực tiếp.

- Các hàm chính trong queue:
    push(x)	Thêm phần tử vào cuối queue
    pop()	Xoá phần tử ở đầu queue
    front()	Truy cập phần tử ở đầu queue
    back()	Truy cập phần tử ở cuối queue
    empty()	Kiểm tra queue rỗng
    size()	Số lượng phần tử trong queue
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d {1, 3, 6, 4, 2};
    priority_queue<int, deque<int>> pq(d.begin(), d.end());
    pq.push(5);
    pq.push(7);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}