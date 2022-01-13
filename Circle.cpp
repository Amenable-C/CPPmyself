#include "Circle.h"
#include <cmath>

Circle::Circle(const Point& c, size_t r){
    points.emplace_back(c);
    center = c;
    radius = r;
}
Circle::Circle(const std::vector<Point>& points) {

}
Circle::~Circle() noexcept {
    std::cout << "Circle is destructed!" << std::endl;
}

double Circle::getArea() const {
    double area = M_PI * radius * radius;
    area = round(area * 100) / 100;
    return area; // 근데 이 계산이 조금 안 맞는데?
}
double Circle::getPerimeter() const {
    double perimeter = M_PI * radius * 2;
    perimeter = round(perimeter * 100) / 100;
    return perimeter;
}
std::unique_ptr<IShape> Circle::clone() const{
    return std::unique_ptr<IShape>(new Circle(*this));
}
std::string Circle::toString() const {
    //std::cout << "area: " << getArea() << ", perimeter: " << getPerimeter() << std::endl;
    //std::cout << "check" << std::endl;
    return "";
}
