#include<iostream>
#include<fstream>
#include"menu.h"
#include"subject.h"
using namespace std;


int plus_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ���������Ŀ��Ϣ����               -" << endl;
    cout << "�����뱾��������Ŀ��������ȷ������Ŀ������������һ��,-1���ز˵�����" << endl;

    unsigned int plus_sub;
    cin >> plus_sub;
    cout << endl;
    int index_sub = real_sub;
    real_sub += plus_sub;

    if(real_sub == -1) {
        return -1;
    }
    else if(real_sub > 100) {
        cout << "������Ŀ�����������������룡" << endl;
        cout << "�������������ַ��ز˵���" << endl;
        real_sub -= plus_sub;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        for(int i = index_sub; i < real_sub; i++) {
            cout << "�����������Ŀ����Ϣ�����/��Ŀ/����Ҫ��/���ʱ�䣩��" << endl;
            int repeat = 0;
            string number, task, request, time;
            cin >> number >> task >> request >> time;
            for(int j = 0; j < real_stu; j++) {
                if(sub[ j ].get_number () == number) {
                    repeat = 1;
                    cout << "��Ŀ����ظ������������룡" << endl << endl;
                    break;
                }
                else
                    continue;
            }
            if(repeat == 1) {
                i--;
                continue;
            }
            else {
                sub[ i ].in_number (number);
                sub[ i ].in_task (task);
                sub[ i ].in_request (request);
                sub[ i ].in_time (time);
            }
        }
        cout << endl;
        cout << "������Ŀ��Ϣ���" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}