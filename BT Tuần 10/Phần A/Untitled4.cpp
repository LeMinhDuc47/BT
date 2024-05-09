#include <bits/stdc++.h>
using namespace std;
int main() {
    int localVariable = 10; // Biến địa phương
    int* ptr = &localVariable; // Con trỏ trỏ đến biến địa phương

    cout <<*ptr << std::endl;

    delete ptr; // Lỗi! ptr không được cấp phát bởi new

    // Sau khi giải phóng, ptr không còn trỏ đến vùng nhớ hợp lệ
    // Vì vậy, việc truy cập nó có thể dẫn đến hành vi không xác định
    cout << "ptr after delete: " << *ptr <<endl;

    return 0;
}
