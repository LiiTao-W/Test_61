//
// Created by Administrator on 2021/6/30.
//

#include <iostream>
#include <cstdio>
#include "class_function.h"

using namespace std;

class_function::class_function(double wid): width(wid) {
//    this->width=wid;
    cout << "Object(cf) is being created, width = " << wid << endl;
}


class_function::~class_function() {
    cout << "Object(cf) is being deleted." << endl;
}

void class_function::setWidth(double wid) {
    width = wid;
}

double class_function::getWidth(void) {
    return width;
}




