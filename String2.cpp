#include "String.h"
#include <exception>
using namespace std;

String::String() {
    //멤버 함수를 구현하시오
    std::cout << "default constructor" << std::endl;
    char* k = new char[1];
    k[0] = '\0';
    append(k);
}

String::String(const char* s)  {
    //멤버 함수를 구현하시오
    std::cout << "constructor with the one argument" << std::endl;
    if(s){
        char* k = new char[std::strlen(s) + 1];
        std::strcpy(k, s);
        append(k);
    }
    else{}
}

String::~String() noexcept {
    //멤버 함수를 구현하시오
    std::cout << "destructor" << std::endl;
    _data.clear();
}

String::String(String&& s) noexcept : _data(s._data) {
    //멤버 함수를 구현하시오
    std::cout << "move constructor" << std::endl;
    s._data.clear();
}

String::String(const String& s) noexcept {
    //멤버 함수를 구현하시오
    std::cout << "copy constructor" << std::endl;
    append(s);
}

const char* String::data() const {
    //멤버 함수를 구현하시오
    char* k = new char[_data.size() + 1];
    int i = 0;
    for(i; i < _data.size(); i++){
        k[i] = _data[i];
    }
    k[i] = '\0';
    return k;
}

bool String::empty() const {
    //멤버 함수를 구현하시오
    return _data.empty();
}

size_t String::size() const {
    //멤버 함수를 구현하시오
    return _data.size();
}


String& String::append(const String& s) {
    //멤버 함수를 구현하시오
    _data.insert(_data.end(), s._data.begin(), s._data.end());
}

String& String::append(const char* s) {
    //멤버 함수를 구현하시오
    for(int i = 0; i < std::strlen(s); i++){
        _data.push_back(s[i]);
    }
}


int String::compare(const String& s) const {
    //멤버 함수를 구현하시오
    if(_data == s._data){
        return 0;
    }
    else
        return 1;
}

int String::compare(const char* s) const {
    //멤버 함수를 구현하시오
    if(_data.data() == s){
        return 0;
    }
    else
        return 1;
}