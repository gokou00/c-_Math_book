#include "Point.h"


Point::Point(){
    x = y = 0.0;
}

Point::Point(double xx , double yy){
    x = xx;
    y = yy;
}

double Point::getX() const{
    return x;
}

void Point::setX(double xx){
    x = xx;
}


double Point::getY() const{
    return y;
}

void Point::setY(double yy){
    y = yy;
}

void Point::rotate(double theta){
    double A = getA();
    A += theta;
    setA(A);
}

double Point::getR() const{
    return sqrt(x *x + y *y);
}

void Point::setR(double r){
    if((x == 0.0) && (y == 0.0)){
        x = r;
        return;
    }

    double A = getA();
    x = r * cos(A);
    y = r * sin(A);
}

double Point::getA() const{
    if((x==0.0) && (y==0.0)) return 0.0;

    double A = atan2(y,x);

    if(A<0) A += 2*M_PI;
    return A;
}

void Point::setA(double theta){
    double r = getA();
    x = r * cos(theta);
    y = r * sin(theta);
}

bool Point::operator==(const Point& Q) const{
    return ((x==Q.x) && (y==Q.y));
}

bool Point::operator!=(const Point& Q) const{
    //could also do this return !((*this) == Q);

    return ((x!=Q.x) || (y!=Q.y));
}

Point midpoint(Point P, Point Q){
    double xx = (P.getX() + Q.getX()) / 2;
    double yy = (P.getY() + Q.getY()) / 2;

    return Point(xx,yy);
}

ostream& operator<<(ostream& os, const Point& P){
    os << "(" << P.getX() << "," << P.getY() << ")";
    return os;
}

double dist(Point P, Point Q){
    double dx = P.getX() - Q.getX();
    double dy = P.getY() - Q.getY();

    return sqrt(dx*dx + dy*dy);
}