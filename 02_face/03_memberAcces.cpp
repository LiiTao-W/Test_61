//
// Created by Administrator on 2021/6/30.
//

#include <iostream>

using namespace std;

class Box {
public:
    double length;

    void setWidth(double wid);

    double getWidth(void);

private:
    double width;
protected:
    double width1;
};

class SmallBox : Box {
public:
    void setSmallWidth(double wid);

    double getSmallWidth(void);
};

// ��Ա��������
double Box::getWidth(void) {
    return width;
}

void Box::setWidth(double wid) {
    width = wid;
}

void SmallBox::setSmallWidth(double wid) {
    width1 = wid;
}

double SmallBox::getSmallWidth() {
    return width1;
}

// �����������
int main() {
    SmallBox box;
    box.setSmallWidth(5.0);
    cout << "Width of box : " << box.getSmallWidth() << endl;

    return 0;
}