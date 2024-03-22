#include <iostream>
using namespace std;
void passByValue(int x) {
    cout << &x << std::endl;
}
void passByReference(int& x) {
    cout << &x << std::endl;
}

int main() {
    passByValue(a);
    passByReference(a);

    /* Nhận xét:
    - Khi sử dụng pass-by-value, một bản sao của đối số được tạo ra và truyền vào hàm. Điều này được chứng minh bằng việc địa chỉ của x trong hàm passByValue khác với địa chỉ của a trong hàm main.
    - Khi sử dụng pass-by-reference, đối số và tham số thực sự chia sẻ cùng một vị trí trong bộ nhớ. Điều này được chứng minh bằng việc địa chỉ của x trong hàm passByReference giống với địa chỉ của a trong hàm main.
    */
    return 0;
}
