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


// �̵߳����к���
void *say_hello(void *threadid) {
    // �Դ���Ĳ�������ǿ������ת������������ָ���Ϊ������ָ�룬Ȼ���ٶ�ȡ
    int tid = *((int *) threadid);
    cout << "Hello w3cschool���߳� ID��" << tid << endl;
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
        cout << "main() : �����߳�, " << i << endl;
        indexes[i] = i; //�ȱ���i��ֵ
        // �����ʱ�����ǿ��ת��Ϊvoid* ���ͣ���������ָ��
        int ret = pthread_create(&tids[i], NULL, say_hello, (void *) &(indexes[i]));
        if (ret != 0) {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    /*
     * �������ݲ���
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
    //�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
    pthread_exit(NULL);

//    for (int j = 0; j < 65536; ++j) {
//        for (int k = 0; k < 65536; ++k);
//    }

    return 0;
}