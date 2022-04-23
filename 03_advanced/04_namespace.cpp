//
// Created by Administrator on 2021/7/7.
//

#include <iostream>

//using namespace std;
using std::cout;


namespace first_space {
    void func() {
        cout << "Inside first_space" << std::endl;
    }
}

namespace second_space {
    void func() {
        cout << "Inside second_space" << std::endl;
    }
}

int main() {

    // 调用第一个命名空间中的函数
    first_space::func();

    using namespace second_space;
    // 调用第二个命名空间中的函数
    func();

    return 0;
}