/*
- Queue - FIFO: Thêm vào ở đỉnh và lấy ra ở đáy.
- Queue sử dụng containers mặc định là deque.

- Hàm khởi tạo (Constructors): 
    queue<data_type> q;                                tạo queue rỗng.
    queue<data_type, container<data_type>> q(ctn);     copy container(deque, list).
    !!! Không thể khởi tạo queue trực tiếp từ danh sách khởi tạo hay range.

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
    list<int> l {1, 2, 3, 4, 5};
    queue<int, list<int>> q(l);
    q.push(6);
    q.push(7);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}