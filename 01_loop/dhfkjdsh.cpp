//
// Created by Administrator on 2021/6/1.
//

#include <iostream>
using namespace std;

int main(){
    int age = 88;
    int *p = &age;

    cout << "ָ��ĵ�ַ�ǣ� " << &p <<endl;
    cout << "ָ��洢���ǣ� " << p <<endl;
    cout << "ָ���С�ǣ� " << sizeof(p) <<endl;
    cout << "age�Ĵ�С�ǣ� " << sizeof (age) <<endl;
    return 0 ;
}