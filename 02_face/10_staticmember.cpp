//
// Created by Administrator on 2021/6/30.
//

#include <iostream>

using namespace std;

class Box {
public:
    static int objectCount;

    // 构造函数定义
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        objectCount++;
    }

    static int getCount(){
        return objectCount;
    }

    double Volume() {
        return length * breadth * height;
    }

    int compare(Box box) {
        return this->Volume() > box.Volume();
    }

private:
    double length;     // Length of a box
    double breadth;    // Breadth of a box
    double height;     // Height of a box
};


int Box::objectCount = 0;

int main() {
    cout<<"Inital State Count: "<< Box::getCount()<<endl;

    Box Box1(3.3, 1.2, 1.5);    // Declare box1
    Box Box2(8.5, 6.0, 2.0);    // Declare box2

    cout << "Total of objects: " << Box::objectCount << endl;
    cout<<"Final State Count: "<< Box::getCount()<<endl;

    return 0;
}