//
// Created by Administrator on 2021/6/30.
//

#include <iostream>

using namespace std;

class Line {
public:

    void setWidth(double wid);

    double getWidth(void);

    double getlength(void);

    Line(double wid, double len);

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

double Line::getWidth() {
    return width;
}

void Line::setWidth(double wid) {
    width = wid;
}

double Line::getlength() {
    return length;
}

// 程序的主函数
int main() {
    Line box(10.0,20.0);
    cout << "Width of line: " << box.getWidth() << endl;
    cout << "Length of line: " << box.getlength() << endl;
    box.setWidth(5.0);
    cout << "Width of line : " << box.getWidth() << endl;

    return 0;
}