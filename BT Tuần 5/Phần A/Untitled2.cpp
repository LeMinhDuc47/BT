#include <iostream>
using namespace std;
int factorial(int x) {
    cout << "x = " << x << " at " << &x << endl;
    if (x == 0) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    int N = 5;
   factorial(N);

    /* Nhận xét:
    - Khi hàm đệ quy được gọi, mỗi lần gọi sẽ tạo ra một stack frame mới trong stack.
    - Mỗi stack frame chứa thông tin về hàm đang được gọi, bao gồm các biến địa phương và tham số của hàm.
    - Địa chỉ của x trong mỗi lần gọi hàm đệ quy đều khác nhau, cho thấy mỗi lần gọi hàm đệ quy đều tạo ra một bản sao mới của x trong stack.
    - Kích thước của một stack frame cho hàm factorial có thể được ước lượng bằng cách xem sự thay đổi của địa chỉ của x qua mỗi lần gọi hàm. Tuy nhiên, kích thước thực tế có thể lớn hơn do có thể chứa thêm thông tin khác như địa chỉ trở về.
    */
    return 0;
}
