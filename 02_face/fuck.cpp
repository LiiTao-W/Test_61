//
// Created by Administrator on 2021/7/2.
//

#include <iostream>
#include <cmath>

using namespace std;

double x = 30.0;
double y = 20.0;
double a = 3.5;

int main() {
    cout << sqrt((x * x - y * y)) - sqrt((x * x - (a + y) * (a + y))) << endl;
}