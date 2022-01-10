#ifndef ASSIGNMENT8FIRST_COMPLEX_H
#define ASSIGNMENT8FIRST_COMPLEX_H
#include <iostream>
class Complex {
public:
    Complex(){};
    Complex(double r, double i) ;
    Complex(double r);
    ~Complex() = default;

    //생성자, 소멸자 이외의 copy/move 생성자, copy/move 대입 연산자는
    //컴파일러가 생성해 주는 default operations 사용함
    Complex add(const Complex& c);
    //필요한 멤버함수가 있으면 정의하시오
    //필요한 연산자가 있으면 정의하시오
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
    bool operator == (const Complex& c) const {
        return _r == c._r && _i == c._i;
    }
    bool operator != (const Complex& c) const{
        return ! this->operator == (c);
    }
private:
    double _r=0;
    double _i=0;
} ;


#endif //ASSIGNMENT8FIRST_COMPLEX_H
