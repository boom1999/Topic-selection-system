#include<iostream>
#include<fstream>
#include"menu.h"
#include"subject.h"
using namespace std;


int plus_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ���������Ŀ��Ϣ����               -" << endl;
    cout << "�����뱾��������Ŀ��������ȷ������Ŀ��������һ�ٶ�ʮ����" << endl;

    unsigned int plus_sub;
    cin >> plus_sub;
    cout << endl;
    int index_sub = real_sub;
    real_sub += plus_sub;

    if(real_sub > 120) {
        cout << "������Ŀ�����������������룡" << endl;
        cout << "�������������ַ��ز˵���" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        cout << "�����������Ŀ����Ϣ�����/��Ŀ/����Ҫ��/���ʱ�䣩��" << endl;
        for(int i = index_sub; i < real_sub; i++) {
            string number, task, request, time;
            cin >> number >> task >> request >> time;
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
        }
        cout << endl;
        cout << "������Ŀ��Ϣ���" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}