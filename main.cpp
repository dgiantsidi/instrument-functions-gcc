#include <iostream>
#include "lib1.h"

int main() {

    std::cout <<__PRETTY_FUNCTION__ << "\n";
    Object a;
    a.call();
    std::cout << ".....\n";
    a.add(Object(2));
    std::cout << ".....\n";

    return 0;
}
