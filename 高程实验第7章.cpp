//看看修改.gitignore的效果！
//7-5
#include <iostream>
using namespace std;

class Shape{
    public:
    virtual double getArea()  =0;
    virtual ~Shape(){}

};

class Rectangle:public Shape{
    protected:
    double a,b;
    public:
    Rectangle(double x, double y):a(x),b(y){}
    
    double getArea()  {
        return a*b;
    }
};

class Circle:public Shape{
    int radius;
    const double PI=3.14;
    public:
    Circle(double r):radius(r){}
    double getArea(){
        return PI*radius*radius;
    }
};

class Square:public Rectangle{
    public:
    Square(int a):Rectangle(a,a){}

};

int main(){

    Square s(3);
    cout<<s.getArea();


    return 0;
}