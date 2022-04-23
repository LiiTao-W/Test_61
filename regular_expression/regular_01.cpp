/**
 * @file regular_01.cpp
 * @brief 
 * @author LiiTao
 * @version v1
 * @date 2022/3/21.
 */

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    string qqStr;
    cin >> qqStr;
    if (qqStr.length() >= 5 && qqStr.length() <= 11) {
        if (qqStr[0] != '0') {
            auto pos = find_if(qqStr.begin(), qqStr.end(), [] (const char& ch) {
               return ch < '0' || ch > '9';
            });
            if (pos == qqStr.end()) cout << "valid." << endl;
        }
    }
    return 0;
}