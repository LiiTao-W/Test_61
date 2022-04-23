//
// Created by Administrator on 2021/6/30.
//

#ifndef TEST_61_CLASS_FUNCTION_H
#define TEST_61_CLASS_FUNCTION_H

#include <iostream>
#include <cstdio>

class class_function {
public:

    void setWidth(double wid);

    double getWidth(void);

    class_function(double wid);

    ~class_function();

private:
    double width;

};


#endif //TEST_61_CLASS_FUNCTION_H
