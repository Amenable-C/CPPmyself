#include "String.h"
#include <string>
#include <cstring>
// 1.1 Default constructor
String::String(){
    s = new char[1];
    s[0] = '\0';
    len = 0;
}
// 1.2
String::String(const char* str) {
    if(str){
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }
    else{
        s = new char[1];
        s[0] = '\0';
    }
    len = strlen(str);
}

// 2. Copy constructor
String::String(const String& str): len(str.len), s(new char[str.len]){
    for(int i = 0; i < len; i++)
        s[i] = str.s[i];
}; // s3

// 3. Copy assignmnet // shallw copy하면 안됨.
String& String::operator=(const String& str) {
    //len(str.len), s(new char[str.len])
    String tmp(str.s);
    swap(tmp);
    return *this;
};

String::~String() noexcept{
    delete [] s;
}

const char* String::data() const{
    return s;
}

char& String::at(size_t a){
    if(len!=0 && 0 <= a && a < len)
        return s[a];
    else
        return s[0];
}

size_t String::size() const{};
void String::print(const char* str) const{
    std::cout << str <<": " << s << ", size: " << len << std::endl;
};

void String::swap(String& str){
    using std::swap;
    swap(s, str.s); // 근데 이것도 참조인데, 그러면 포인터로 가는거 아닌가?
    swap(len, str.len);
};