#include <emscripten/bind.h>

int my_add(int a, int b) {
    return a+b;
}

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("my_add",&my_add);
}