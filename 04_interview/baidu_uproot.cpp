/**
 * @file baidu_uproot.cpp
 * @brief 
 * @author LiiTao
 * @version v1
 * @date 2022/4/13.
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        map<int, int> ropes;
        int rope;
        for (int i = 0; i < n; ++i) {
            cin >> rope;
            ropes[rope]++;
        }
        vector<pair<double, int>> ropeArray(ropes.begin(), ropes.end());    // map 按照键值排序，因此无需 sort
        int maxNum = 0;
        int curNum = n;  // 初始化当前值
        int leftIndex = 0;
        double ropeLen = 0;
        for (int rightIndex = 0; rightIndex < ropeArray.size(); ++rightIndex) {     // 维护当前绳子长度的一半以上的绳子数量
            while (ropeArray[leftIndex].first < ropeArray[rightIndex].first / 2.0) {
                curNum -= ropeArray[leftIndex].second;
                ++leftIndex;
            }
            if (maxNum < curNum + ropeArray[rightIndex].second) {
                maxNum = curNum + ropeArray[rightIndex].second;
                ropeLen = ropeArray[rightIndex].first / 2.0;
            }
        }
        cout << maxNum << endl;
        cout << "[test] Rope length by cut: " << ropeLen << endl;
    }
    return 0;
}