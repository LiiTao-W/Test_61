//
// Created by Administrator on 2021/6/1.
//

#include <iostream>
#include <synchapi.h>
#include "hello.h"

//do-while  & forѭ��

int main() {

    sayHi();

    int count = 10;
    do {
        std::cout << "�Ҵ���~~" << std::endl;
        count++;
        Sleep(1000);
    } while (count < 5);

    //--------------------forѭ��----------------------------
    for (int i = 0; i < 5; ++i) {
        std::cout << "�Ҵ���~~for---" << i << std::endl;
        Sleep(500);
    }
    return 0;
}
