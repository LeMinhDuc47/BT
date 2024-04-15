#include <iostream>
using namespace std;
int main() {
    int a = 10; // Biến thường
    int& b = a; // Biến tham chiếu

    cout << "a: " << a << ", b: " << b << endl;
    // Biến tham chiếu và biến mà nó chiếu tới chia sẻ cùng một ô nhớ.
    // Do đó, chúng ta có thể coi chúng như là một biến duy nhất.
    // Không thể khai báo một tham chiếu mà không chiếu ngay nó tới một biến thường.
    // int& c; // Lỗi biên dịch
   int c = 20;
    // Không thể chiếu một tham chiếu tới một biến khác với đích ban đầu của nó.
    // b = c; // Điều này không làm thay đổi tham chiếu của b từ a sang c, mà chỉ thay đổi giá trị của a và b thành giá trị của c.
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    return 0;
}
