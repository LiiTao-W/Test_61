//
// Created by Administrator on 2021/6/30.
//

#include <iostream>

#include "class_function.h"

using namespace std;

class Line {
public:

    void setWidth(double wid);

    double getWidth(void);

    double getlength(void);

    Line(double wid, double len);

    ~Line();

private:
    double width;
    double length;
protected:
    double width1;
};

//Line::Line(double wid) {
//    cout << "Object is being created, width = " << wid << endl;
//    width = wid;
//}

Line::Line(double wid, double len) : width(wid), length(len) {
    clog << "Object is being created, width = " << wid << endl;
    clog << "Object is being created, length = " << len << endl;
}

Line::~Line() {
    cout << "Object is being deleted." << endl;
}

void Line::setWidth(double wid) {
    width = wid;
}

double Line::getlength() {
    return length;
}

double Line::getWidth() {
    return width;
}

Line::Line(int len) {

}

Line::Line(const Line &obj) {

}

// 程序的主函数
int main() {
    Line box(10.0, 20.0);
    cout << "Width of line: " << box.getWidth() << endl;
    cout << "Length of line: " << box.getlength() << endl;
    box.setWidth(5.0);
    cout << "Width of line : " << box.getWidth() << endl;

//    class_function *cf = new class_function(10.0);
    class_function cf(12);
    cout << "width: " << cf.getWidth() << endl;

    return 0;
}