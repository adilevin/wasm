#include <iostream>

int main() {    
    char *previous, *current;

    previous = (char*)malloc(0);
    for(int i=0; i<32; ++i) {
        current = (char*)malloc(i+1);
        std::cout << "malloc(" << i << ") consumed " << (current-previous) << " bytes\n";
        previous = current;
    }

    std::cout << "\n";

    previous = (char*)malloc(1);
    for(int i=0; i<12; ++i) {
        current = (char*)malloc( 1<<(i+1) );
        std::cout << "malloc(" << (1<<i) << ") consumed " << (current-previous) << " bytes\n";
        previous = current;
    }    

    return 0;
}