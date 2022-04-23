//
// Created by Administrator on 2021/6/18.
//

#include <iostream>

extern int count;

void write_extern(void) {
    std::cout << "Count is " << count << std::endl;
}