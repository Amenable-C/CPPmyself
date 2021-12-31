#include "student.h"
#include <iostream>
void Student::modifyGPA(double gpa){
    _gpa = gpa;
};
void Student::print() const{
    std::cout << _id << " " << _name << " " << _gpa << std::endl;
};