//
// Created by Administrator on 2021/7/7.
//

#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <Windows.h>

using namespace std;

#define NUM_THREADS 5

struct thread_data {
    int thread_id;
    char *message;
};


// 线程的运行函数
void *say_hello(void *threadid) {
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int *) threadid);
    cout << "Hello w3cschool！线程 ID：" << tid << endl;
    pthread_exit(NULL);
}

void *printData(void *threadarg) {
    struct thread_data *my_data;
    my_data = (struct thread_data *) threadarg;

    cout << "ID: " << my_data->thread_id;
    cout << "Message: " << my_data->message << endl;

    pthread_exit(NULL);
}


int main() {

    pthread_t tids[NUM_THREADS];
    int indexes[NUM_THREADS];

    int rc;
    int i;

    for (int i = 0; i < NUM_THREADS; ++i) {
        cout << "main() : 创建线程, " << i << endl;
        indexes[i] = i; //先保存i的值
        // 传入的时候必须强制转换为void* 类型，即无类型指针
        int ret = pthread_create(&tids[i], NULL, say_hello, (void *) &(indexes[i]));
        if (ret != 0) {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    /*
     * 参数传递部分
     */
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];


    for (i = 0; i < NUM_THREADS; ++i) {
        cout << "main(): Create thread - " << i << endl;
        td[i].thread_id = i;
        td[i].message = "This is message";
        rc = pthread_create(&threads[i], NULL, printData, (void *) &td[i]);
        if (rc) {
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);

//    for (int j = 0; j < 65536; ++j) {
//        for (int k = 0; k < 65536; ++k);
//    }

    return 0;
}