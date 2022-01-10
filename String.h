#ifndef ASSIGNMENT8FIRST_STRING_H
#define ASSIGNMENT8FIRST_STRING_H
#include <string.h> // 이거는 머지?
#include <algorithm>
#include <iostream>
class String {
public:
    String(const char* str) ;
    // six rules 을 준수하여 default operators 를 모두 구현하시오
    String();
    String(const String& str);
    String& operator=(const String& str);
    String(String&& str) noexcept;
    String& operator=(String&& str) noexcept;
    ~String() noexcept;
    const char* data() const;
    char& at(size_t);
    size_t size() const;

    //필요한 멤버함수가 있으면 정의하시오
    //필요한 연산자가 있으면 정의하시오
    friend std::ostream& operator<<(std::ostream& os, const String& s);
    bool operator == (const String& s) const {
        if(!strcmp(_data, s._data)){ // 같으면 0을 반환
            return true;
        }
        else
            return false;
        //return _data == s._data;
        //return true; //test
    }
    bool operator != (const String& s) const{
        return ! this->operator == (s);
    }
private:
    size_t _size = 0;
    char* _data = nullptr;
};


#endif //ASSIGNMENT8FIRST_STRING_H
