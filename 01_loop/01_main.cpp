//
// Created by Administrator on 2021/6/1.
//

#include <iostream>
#include <synchapi.h>
#include "hello.h"

//do-while  & for循环

int main() {

    sayHi();

    int count = 10;
    do {
        std::cout << "我错了~~" << std::endl;
        count++;
        Sleep(1000);
    } while (count < 5);

    //--------------------for循环----------------------------
    for (int i = 0; i < 5; ++i) {
        std::cout << "我错了~~for---" << i << std::endl;
        Sleep(500);
    }
    return 0;
}
