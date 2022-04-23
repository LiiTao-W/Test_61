//
// Created by Administrator on 2021/6/1.
//

#include <iostream>
using namespace std;

int main(){
    int age = 88;
    int *p = &age;

    cout << "指针的地址是： " << &p <<endl;
    cout << "指针存储的是： " << p <<endl;
    cout << "指针大小是： " << sizeof(p) <<endl;
    cout << "age的大小是： " << sizeof (age) <<endl;
    return 0 ;
}