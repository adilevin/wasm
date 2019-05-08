#include "stdint.h"

extern "C" {
    uint8_t* fill_array(int n);
}

uint8_t* fill_array(int n) {
    uint8_t* arr = new uint8_t[n];
    for(uint8_t i=0;i<n;++i)
        arr[i] = i;
    return arr;
}