#pragma once

class Object {
    public:
        Object() : object_val(0) {};
        Object(int value) : object_val(value) {};
        void call();
        int add(const Object& other);
        int add (int num);

    private:
        int object_val;

};
