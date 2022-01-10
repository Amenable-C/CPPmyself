#include "Complex.h"

Complex::Complex(double r, double i) : _r(r), _i(i){}

Complex Complex::add(const Complex& c){
    return Complex(_r+(c._r), _i+(c._i));
}
Complex::Complex(double r) : _r(r), _i(0.0){}

std::ostream& operator<<(std::ostream& os, const Complex& c){
    os << c._r << " + " << c._i << "i";
    return os;
}