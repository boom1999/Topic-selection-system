#include<iostream>
#include<fstream>
#include"menu.h"
#include"subject.h"
using namespace std;

int in_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ����������Ŀ��Ϣ����               -" << endl;
    cout << "-��ѡ��������Ϣ��ʽ��                                 -" << endl;
    cout << "-     1.���ļ�����                                    -" << endl;
    cout << "-     2.�Ӽ�������                                    -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "��ѡ��1/2,-1���ز˵�����" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == 1) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         ��ӭ����������Ŀ��Ϣ-�ļ��������           -" << endl;
        cout << endl;
        ifstream infile ("subject_test.tre_numt", ios::in);
        if(!infile) {
            cout << "Open error!" << endl;
            cout << "�����������ַ��ز˵���";
            int re_num;
            cin >> re_num;
            return -1;
        }

        int t;
        infile >> t;
        real_sub = t;
        cout << "(���/��Ŀ/����Ҫ��/���ʱ��):" << endl;
        for(int i = 0; i < t; ++i) {
            string number, task, request, time;
            infile >> number >> task >> request >> time;
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
            cout << sub[ i ].get_number () << "	" << sub[ i ].get_task () << "	" << sub[ i ].get_request () << "	" << sub[ i ].get_time () << endl;
        }
        cout << endl;
        cout << "�������" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        infile.close ();
        return -1;
    }
    else if(flag == 2) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         ��ӭ����������Ŀ��Ϣ-�����������           -" << endl;
        cout << endl;
        cout << "������������" << endl;
        int stu_num;
        cin >> stu_num;
        cout << endl;

        cout << "��������Ŀ��Ϣ(���/��Ŀ/����Ҫ��/���ʱ��)��" << endl;

        for(int i = 0; i < stu_num; ++i) {
            string number, task, request, time;
            cin >> number >> task >> request >> time;
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
            real_sub++;
        }
        cout << endl;
        cout << "������Ŀ��Ϣ���" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}