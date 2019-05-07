#include <emscripten/bind.h>

std::string greet(const std::string& name) {
    return std::string("Hello ") + name;
}

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("greet",&greet);
}