/**
 * @file byte_cutRope.cpp
 * @brief 
 * @author LiiTao
 * @version v1
 * @date 2022/4/13.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    while (cin >> n) {
        vector<int> ropes(n);
        for (int i = 0; i < n; ++i) {
            int rope;
            cin >> rope;
            ropes[i] = rope;
        }
        cin >> m;
        vector<double> cutArray;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cutArray.push_back(ropes[i] * 1.0 / j);
            }
        }
        sort(cutArray.begin(), cutArray.end());
        cout << fixed << setprecision(2) << cutArray[n * m - m] << endl;
    }
}
/*
字节跳动2019笔试题
问题描述
总共有n条长度不等绳子，可以任意切割，不能拼接。要求切割后得到m条长度相等的绳子，求问得到的m条绳子长度L的最大值
输入 ： 绳子条数n；表示绳子长度的n维数组l，要求输出的绳子长度m；
输出： 长度最大值L
先考虑一种简化的情形，假设每一根绳子只能使用一次（即使绳子很长，可以切割出多条长度为L的小段，也只使用其中一段），那么这个问题就退化为一个简单的排序问题，直接找出其中第m长的绳子，其长度就是L的最大值。这种情形很简单。

再考虑一种稍微复杂一些的情形：假设每一根绳子最多只能使用两次，那么可以对l[0], l[1], …, l[n-1], l[0]/2, l[1]/2, …, l[n-1]/2 这2n个数排序，取其中第m大的数，其值就是L的最大值。

举个栗子，假设有n=4根绳，长度为a>b>c>d，又有b>a/2>c，要取出m=3条长度相等的绳。则对4*2=8个数排序后前三位是a,b,a/2. 那么长度L的最大值就是a/2；前三位中最长的绳出现了两次（a，a/2），第二长的绳出现了一次，而切割出的3个片段中最长的绳可以切出两个，第二次的绳可以切出一个，也就是说，每一根绳分出的片段数和它在排序后的数组的前m位中出现的次数是对应的。

如果把上面的条件改为a/2>b，则L的最大值就是b，同样是a分出两段，b分出一段。条件改为a/2<c，则L最大值为c，三根绳a, b, c各分出一段。

回到原来的问题，因为不限制每根绳的使用次数，所以一根绳最多使用m次（极端情况a/m>b），因此对l[0], l[1], …, l[n], l[0]/2, l[1]/2, …, l[n]/2, l[0]/3, …, l[n-1]/m共m*n个数排序，再取其第m大的元素既是L的最大值。这种情况下，“每一根绳分出的片段数和它在排序后的数组的前m位中出现的次数相等”这一条件依然能得到满足。
————————————————
版权声明：本文为CSDN博主「lshyengang」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/lshyengang/article/details/88604691
 */