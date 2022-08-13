#ifndef CPP_TUTS_CIRCLE_H
#define CPP_TUTS_CIRCLE_H

class Circle: public Shape {
public:
    Circle();

    Circle(double width);

    virtual ~Circle();
    double area();
private:

};

#endif //CPP_TUTS_CIRCLE_H
