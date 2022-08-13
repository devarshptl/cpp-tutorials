#ifndef CPP_TUTS_SHAPE_H
#define CPP_TUTS_SHAPE_H

class Shape {
protected:
    // accesible to class and inherited class
    double height;
    double width;
private:
    // accessible to class
public:
    static int numOfShapes;
//    Shape();
    Shape(double length);
    Shape(double height, double width);
    virtual ~Shape();
    void setHeight(double height);
    double getHeight();
    void setWidth(double width);
    double getWidth();
    static int getNumOfShapes();
    virtual double area(); // virtual as we plan on overriding it
};

#endif //CPP_TUTS_SHAPE_H
