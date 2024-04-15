#include <iostream>
using namespace std;
int main()
    int a[10];
    char b[10];
    for (int i = 0; i < 3; i++) {
        cout  << &a[i] <<endl;
        cout << reinterpret_cast<void*>(&b[i]) <<endl;
    }
    /* Nhận xét:
    - Địa chỉ của các phần tử trong mảng a và b tăng dần, điều này cho thấy các phần tử trong mảng được lưu trữ liên tiếp trong bộ nhớ.
    - Kích thước của kiểu int và char khác nhau nên khoảng cách giữa các địa chỉ trong mảng a và b cũng khác nhau.
    - Vị trí của biến trước và sau mảng không cố định, tùy thuộc vào cách trình biên dịch sắp xếp các biến trong bộ nhớ.
    */
    return 0;
}
