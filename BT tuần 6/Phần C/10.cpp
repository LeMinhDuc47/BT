#include <cstdlib> 
#include <ctime> 

int randomNumberLessThanN(int N) {
    srand(time(0)); 
    return rand() % N;
}
