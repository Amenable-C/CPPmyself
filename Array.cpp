#include "Array.h"

Array::Array(std::initializer_list<int> args, size_t size){
    int i = 0;
    data.reset(new int[size]);
    for(auto p = args.begin(); p != args.end(); ++p){
        data[i] = *p;
        i++;
    }
    _size = size;
}
int& Array::operator [] (int index){
    return data[index];
}

size_t Array::size() const{
    return _size;
}
