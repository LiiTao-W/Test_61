//
// Created by Administrator on 2021/6/7.
//

#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;

typedef struct rect{
    int id;
    int length;
    int width;
}Rect;

int main() {
    int out[3][2] = { 1, 2,
                      3, 4,
                      5, 6 };
    vector <int*> v1;
    v1.push_back(out[0]);
    v1.push_back(out[1]);
    v1.push_back(out[2]);
    cout << v1[0][0] << endl;//1
    cout << v1[0][1] << endl;//2
    cout << v1[1][0] << endl;//3
    cout << v1[1][1] << endl;//4
    cout << v1[2][0] << endl;//5
    cout << v1[2][1] << endl;//6
    return 0;
    //    vector<Rect> vec;
//    Rect rect;
//    rect.id=1;
//    rect.length=2;
//    rect.width=3;
//
//    vec.push_back(rect);
//    vector<Rect>::iterator it=vec.begin();
//    cout<<(*it).id<<' ' << (*it).length<<' '<<(*it).width<<endl;


    //    vector<int> test;
//    test.push_back(1);
//    test.push_back(2);
//    for (auto it = test.begin(); it != test.end(); it++) {
//        cout << *it << endl;
//    }
//    vector<vector<int>> points;
//    points[0].push_back(1);
//    points[0].push_back(1);
//    points[1].push_back(1);
//    int a=points[0].size();
//    cout<< a <<endl;

    return 0;
}