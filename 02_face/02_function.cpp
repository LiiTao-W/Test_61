//
// Created by Administrator on 2021/6/30.
//

#include <iostream>

using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;


    // ��Ա��������
    double getVolume(void);

    void setLength(double len);

    void setBreadth(double bre);

    void setHeight(double hei);
};

// ��Ա��������
double Box::getVolume(void) {
    return length * breadth * height;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setBreadth(double bre) {
    breadth = bre;
}

void Box::setHeight(double hei) {
    height = hei;
}

int main() {
    Box Box1, Box2;

    double volume = 0.0;

    // box 1 ����
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 ����
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 �����
    volume = Box1.getVolume();
    cout << "Box1 �������" << volume << endl;

    // box 2 �����
    volume = Box2.getVolume();
    cout << "Box2 �������" << volume << endl;


    return 0;
}