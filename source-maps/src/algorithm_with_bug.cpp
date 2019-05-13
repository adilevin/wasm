#include "stdint.h"

extern "C" {
    int algorithm_with_bug();
}

int divide(int x) {
    return 100/x;
}

int algorithm_with_bug() {
    int sum = 0;
    for(int i=0;i<20;++i)
        sum += divide(i-10);
    return sum;
};

