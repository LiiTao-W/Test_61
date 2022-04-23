/**
 * @file regular_03.cpp
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

static void search_by_regex(const char* regex_s, const string& s);

int main() {
    string str = "_AaBbCcDdEeFfGg12345!@#$% \t";
    search_by_regex("[[:alnum:]]{5}", str);
    search_by_regex("\\w{5,}", str);
    search_by_regex(R"(\W{3,5})", str);
    search_by_regex("[[:digit:]]*", str);
    search_by_regex(".+", str);
    search_by_regex("[[:lower:]]?", str);
    return 0;
}

/**
 *
 * @param regex_s
 * @param s
 */
void search_by_regex(const char* regex_s, const string& s) {
    regex reg_ex(regex_s);
    smatch match_result;
    cout.width(14);
    if (regex_search(s, match_result, reg_ex)) {
        cout << regex_s << ": \"" << match_result[0] << "\"" <<endl;
    }
}