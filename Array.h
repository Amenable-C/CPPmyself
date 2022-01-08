#ifndef HW75FIRST_ARRAY_H
#define HW75FIRST_ARRAY_H
#include <cstddef>
#include <initializer_list>
#include <memory>
#include <iostream>

class Array {
public:
    Array(std::initializer_list<int> args, size_t size);
    int& operator [] (int index);
    size_t size() const;
private:
    std::unique_ptr<int[]> data;
    size_t _size;

};
#endif //HW75FIRST_ARRAY_H
