/*
- Stack - LIFO: Thêm vào và lấy ra chỉ ở 1 đầu.
- Stack sử dụng containers mặc định là deque.

- Hàm khởi tạo (Constructors):
    stack<data_type> st;                               tạo stack rỗng.
    stack<data_type, container<data_type>> st(ctn);    copy containers(vector, deque, list).
    !!! Không thể khởi tạo stack trực tiếp từ danh sách khởi tạo hay range.

- Các hàm chính trong stack:
    push(x)	Thêm phần tử vào đỉnh stack.
    pop()	Xoá phần tử ở đỉnh stack (không trả về giá trị).
    top()	Truy cập phần tử ở đỉnh (tham chiếu, có thể đọc/ghi).
    empty()	Kiểm tra stack rỗng (true/false).
    size()	Số lượng phần tử trong stack.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v {1, 2, 3, 4, 5};
    stack<int, vector<int>> st(v);
    st.push(6);
    st.push(7);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}