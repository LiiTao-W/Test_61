//
// Created by Administrator on 2021/6/18.
//

#include <iostream>

using namespace std;

//Declare the enumerated type
enum Roster {
    Tom = 1, Sharon, Bill, Teresa, John
};

int main() {
    int who;
    cin >> who;
    switch (who) {
        case Tom:
            cout << "Tom's birthday is January 3.\n";
            break;
        case Sharon:
            cout << "Sharon's birthday is January 3.\n";
            break;
        case Bill:
            cout << "Bill's birthday is January 3.\n";
            break;
        case Teresa:
            cout << "Teresa's birthday is January 3.\n";
            break;
        case John:
            cout << "John's birthday is January 3.\n";
            break;
        default:
            cout << "Invalid selection\n";
    }
    return 0;
}