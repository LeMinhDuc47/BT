#include <math.h>

int rnd(double num) {
    if (num >= 0) {
        return (num - floor(num) >= 0.5) ? ceil(num) : floor(num);
    } else {
        return (ceil(num) - num >= 0.5) ? floor(num) : ceil(num);
    }
}
