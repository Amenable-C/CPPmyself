#include "school.h"

void School::addStudent(const std::string& id, const Student& s){
    std::pair<std::string, Student> k = std::pair<std::string, Student>{id, s};
    students.insert(k);
};
void School::deleteStudent(const std::string& id){
    students.erase(id);
};
void School::modifyStudentGPA(const std::string& id, double gpa){
    auto find_it = students.find(id);
    find_it->second.modifyGPA(gpa);
};
bool School::findStudent(const std::string& id) const{
    auto find_it = students.find(id);
    if(find_it != students.end())
        return true;
    else
        return false;
};
void School::print(const std::string& id) const{
    auto find_it = students.find(id);
    find_it->second.print();
};