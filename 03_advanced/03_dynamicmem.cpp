//
// Created by Administrator on 2021/7/7.
//

#include <iostream>

using namespace std;

class Box {
public:
    Box() {
        cout << "调用构造函数！" << endl;
    }

    ~Box() {
        cout << "调用析构函数" << endl;
    }
};

int main() {
    Box *myBoxArray = new Box[4];

    delete[] myBoxArray;

    return 0;
}



/*
#include <iostream>

using namespace std;

int main() {
    int ROW = 2;
    int COL = 3;
    double **pvalue = new double *[ROW];

    for (int i = 0; i < COL; ++i) {
        pvalue[i] = new double[COL];
    }
    cout << pvalue[1] << endl;
    *pvalue[1] = 90;
    cout << *pvalue[1] << endl;


    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            pvalue[i][j] = i * 10 + j;
        }
    }

    cout << pvalue[0][2] << endl;

    for (int i = 0; i < COL; ++i) {
        delete[] pvalue[i];
    }
    delete[] pvalue;

    return 0;
}*/
