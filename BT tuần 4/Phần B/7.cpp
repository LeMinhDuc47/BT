#include <iostream>
#include <string>
using namespace std;
void g( string alphabet) {
    for (char c1 : alphabet) {
        for (char c2 : alphabet) {
            cout << c1 << c2 << " ";
            for (char c3 : alphabet) {
                cout << c1 << c2 << c3 << " ";
            }
        }
    }
    cout << std::endl;
}
int main() {
    string alphabet = "wq";
    g(alphabet);
    return 0;
}
