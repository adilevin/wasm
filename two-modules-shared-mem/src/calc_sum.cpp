extern "C" {
    int calc_sum(int* array, int size);
}

int calc_sum(int* arr, int size) {
    int sum = 0;
    for(int i=0; i<size; ++i)
        sum += arr[i];
    return sum;
}