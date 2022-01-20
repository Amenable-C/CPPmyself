#ifndef ASSIGNMENT10FIFTH_CIRCLE_H
#define ASSIGNMENT10FIFTH_CIRCLE_H
#include "IShape.h"

class Circle final : public IShape {
public:
    Circle() = default;
    Circle(const Point& c, size_t r);
    explicit Circle(const std::vector<Point>& points);
    virtual ~Circle() noexcept ;

    double getArea() const override;
    double getPerimeter() const override;
    virtual std::unique_ptr<IShape> clone() const;

protected:
    std::string toString() const override;

private:
    Point center = {0 , 0};
    size_t radius = 0;
};
#endif //ASSIGNMENT10FIFTH_CIRCLE_H
