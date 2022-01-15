#include "Manager.h"

Manager::Manager(const std::string& name, const std::string& deptName, long wage) : Employee(name, deptName, wage){}
bool Manager::addEmployee(Employee* employee){
    std::pair<size_t, Employee*> k{employee->getEmployeeID(), employee};
    employees.insert(k);
    return true;
}
void Manager::print(int depth) {
    //std::cout << "depth: " << depth << std::endl;
    for(int i = 0; i < depth; i++)
        std::cout << "oooo";
    Employee::print(depth);
    if(employees.size()) // 이렇게해야지 depth를 이용하는거
        depth++;
    for(auto k : employees){ // 여기서 employees가 없으면 그냥 건너뀜
        k.second->print(depth); // "test" again
    }
    // 맨처음에 ceo
    // design
    // develop
    //// dev 1 //// dev2
    // qa

}
std::ostream& operator<<(std::ostream& os, const Manager& e){
    os << "manager operator<<" << std::endl;
    return os;
}