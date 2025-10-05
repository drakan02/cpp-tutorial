/*
- Interator: được ví như "con trỏ tổng quát" cho các container STL.

- Các loại iterators chính trong STL:
    Input Iterator          chỉ đọc, duyệt 1 lần từ đầu → cuối.
    Output Iterator         chỉ ghi, duyệt 1 lần từ đầu → cuối.
    Forward Iterator        vừa đọc vừa ghi, duyệt nhiều lần, chỉ đi xuôi.
    Bidirectional Iterator  vừa đọc vừa ghi, duyệt nhiều lần, nhưng có thể đi xuôi và ngược.
    Random Access Iterator  vừa đọc vừa ghi, duyệt nhiều lần, hỗ trợ toán tử +, -, [], nhảy tới bất kỳ vị trí nào (giống con trỏ mảng).

- Containers và iterators của chúng:
    vector, deque, array    → Random Access Iterator (it++, it--, it+n, it1-it2, it[n]).
    list                    → Bidirectional Iterator (it++, it--).
    forward_list            → Forward Iterator       (it++).       
    Associative Containers  → Bidirectional iterator
    Unordered Containers    → Forward iterator
    Containers Adaptors     → không hỗ trợ iterators

- Các interator chính:
    begin()   Iterator trỏ tới phần tử đầu tiên.
    end()     Iterator trỏ tới phần tử sau phần tử cuối cùng.
    rbegin()  Iterator ngược trỏ tới phần tử cuối cùng.
    rend()    Iterator ngược trỏ tới phần tử trước phần tử đầu tiên.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {28, 100, 30, 20, 15};
    //duyet xuoi
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    //duyet nguoc
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "Phan tu thu 2 trong day la: " << *(v.begin() + 2);
    return 0;
}