#include <iostream>

using namespace std;

// 基类
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

//派生类
class Rectangle : public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

int main() {
    Rectangle Rect;
    Rect.setHeight(7);
    Rect.setWidth(5);
    cout << Rect.getArea() << endl;
    return 0;
}