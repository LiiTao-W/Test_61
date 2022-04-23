//
// Created by Administrator on 2021/6/18.
//

#include <iostream>

int count;
extern void write_extern();

int main(){
    count=5;
    write_extern();
}