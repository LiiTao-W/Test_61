/**
 * 运算符重载
 */
#include <iostream >

using namespace std;

class Box {
public:

    double getVolume(void) {
        return length * breadth * height;
    }

    void setLength(double len) {
        length = len;
    }

    void setBreadth(double bre) {
        breadth = bre;
    }

    void setHeight(double hei) {
        height = hei;
    }

    Box operator+(const Box &b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

private:
    double length;
    double breadth;
    double height;

};


int main() {
    Box Box1;                // 声明 Box1，类型为 Box
    Box Box2;                // 声明 Box2，类型为 Box
    Box Box3;                // 声明 Box3，类型为 Box
    double volume = 0.0;     // 把体积存储在该变量中

    // Box1 详述
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // Box2 详述
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // Box2 的体积
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}


/**
 * 函数重载
 */
//#include <iostream>
//using namespace std;
//
//class printData
//{
//public:
//    void print(int i) {
//        cout << "Printing int: " << i << endl;
//    }
//
//    void print(double  f) {
//        cout << "Printing float: " << f << endl;
//    }
//
//    void print(char* c) {
//        cout << "Printing character: " << c << endl;
//    }
//};
//
//int main(void)
//{
//    printData pd;
//
//    // Call print to print integer
//    pd.print(5);
//    // Call print to print float
//    pd.print(500.263);
//    // Call print to print character
//    pd.print("Hello C++");
//
//    return 0;
//}