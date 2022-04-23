//
// Created by Administrator on 2021/6/18.
//

#include <iostream>

using namespace std;

void func();

static int count = 10;


int main() {
    while (count--) {
        func();
    }
    return 0;
}


void func() {
    static int i = 5;
    i++;
    cout << "i:" << i;
    cout << "count:" << count << endl;
}