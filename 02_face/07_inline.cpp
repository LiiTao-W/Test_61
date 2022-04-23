//
// Created by Administrator on 2021/6/30.
//

#include <iostream>

using namespace std;

inline int Max(int x, int y) {
    return (x > y) ? x : y;
}

// 程序的主函数
int main() {
    cout<<Max(20,10)<<endl;

    cout<<Max(200,10)<<endl;
    cout<<Max(20,1010)<<endl;

    return 0;
}