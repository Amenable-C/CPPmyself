
#include "String.h"
#include <iostream>
#include <cstring>
#include <string>
// 1. Defalut constructor
String::String(){
    _data = new char[1];
    _data[0] = '\0';
    _size = 0;
};
// 1.2
String::String(const char* str){
    if(str){
        _size = std::strlen(str);
        _data = new char[_size + 1];
        strcpy(_data, str);
    }
    else{
        _size = 0;
        _data = new char[_size + 1];
        _data[0] = '\0';
    }
}
// 2. copy constructor
String::String(const String& str){
    _size = str._size;
    _data = new char[_size + 1];
    std::strcpy(_data, str._data);

}

// 3. copy assignment
String& String::operator=(const String& str){
    _size = str._size;
    _data = new char[_size + 1];
    strcpy(_data, str._data);
    return *this;
}

// 4. move constructor
String::String(String&& str) noexcept{
    _size = std::move(str._size);
    _data = new char[_size + 1];
    std::strcpy(_data, str._data);

    str._size = 0;
    str._data[0] = '\0';
}

// 5. move assignment
String& String::operator=(String&& str) noexcept{
    if(this->_data == str._data){
        return *this;
    }
    _size = std::move(str._size);
    _data = new char[_size + 1];
    std::strcpy(_data, str._data);

    str._size = 0;
    str._data[0] = '0';
    return *this;
}


// 6. Destructor
String::~String() noexcept{
    delete []_data;
}

char& String::at(size_t a){
    if(_size != 0 &&  0 <= a && a < _size)
        return _data[a];
    throw std::out_of_range("out of range at index: " + std::to_string(a) + ", but the length of String is " + std::to_string(_size));
}

const char* String::data() const{
    return _data;
}


size_t String::size() const{
    return _size;
}

std::ostream& operator<<(std::ostream& os, const String& s){
    os << s._data;
    return os;
}