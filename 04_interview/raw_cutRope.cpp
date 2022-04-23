/**
 * @file raw_cutRope.cpp
 * @brief 
 * @author LiiTao
 * @version v1
 * @date 2022/4/13.
 */

/**
 * 题目：剪绳子
 * 给你一根长度为n的绳子，请把绳子剪成整数长的m段（m、n都是整数，n>1并且m>1）。
 * 每段绳子的长度记为k[0],k[1],…,k[m]。
 * 请问k[0]xk[1]x…xk[m]可能的最大乘积是多少？
 * 例：当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。
 * 输入描述：输入一个数n，意义见题面。（2 <= n <= 60）
 * 输出描述：输出最大乘积
 * 测试案列 1：
 * cin >> 8
 * cout << 18
 * 测试案列 2：
 * cin >> 9
 * cout << 27
 * 测试案列 3：
 * cin >>
 * cout <<
 */


#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int maxProductAfterCutting(int length);

int main() {
    int n;
    while (cin >> n) {
        cout << maxProductAfterCutting(n) << endl;
    }
    return 0;
}

int maxProductAfterCutting(int length) {
    if (length < 2) {
        return 0;
    }
    if (length == 2) {
        return 1;
    }
    if (length == 3) {
        return 2;
    }
    int timesOf3 = length / 3;
    if (length - timesOf3 * 3 == 1) {
        timesOf3--;
    }
    int timesOf2 = (length - timesOf3 * 3) / 2;
    return (int)(pow(3, timesOf3)) * (int)(pow(2, timesOf2));
}