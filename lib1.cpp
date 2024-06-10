#include <iostream>
#include "lib1.h"

void Object::call() {
    std::cout << object_val << "\n";
}

int Object::add(const Object& other) {
    return add(other.object_val);
}

int Object::add(int number) {
    return number + object_val;
}
