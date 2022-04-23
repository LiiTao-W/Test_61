/**
 * @file regular_02.cpp
 * @brief 
 * @author LiiTao
 * @version v1
 * @date 2022/3/21.
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

int main() {
    string s1 = "ab123cdef";
    string s2 = "123456789";
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    cout << "*************** regex_match ***************" << endl;
    regex ex("\\d+");
    cout << s1 << " is all digit: " << regex_match(s1, ex) << endl;
    cout << s2 << " is all digit: " << regex_match(s2, ex) << endl;
    cout << endl;

    cout << "*************** regex_search ***************" << endl;
    regex ex_search("\\d+");
    smatch match_search;
    regex_search(s1, match_search, ex_search);
    cout << s1 << " contains digit: " << match_search[0] << endl;
    cout << endl;

    cout << "*************** regex_replace ***************" << endl;
    regex ex_replace("\\d+");
    string str_replace = regex_replace(s1, ex_replace, "xxx");
    cout << str_replace << endl;
    cout << endl;



    return 0;
}