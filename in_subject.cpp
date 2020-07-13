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
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "��ѡ��1/2,-1���ز˵�����";
    int flag;
    cin >> flag;
    cout << endl;

    if(flag == -1) {
        return -1;
    }
    if(flag == 1) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         ��ӭ����������Ŀ��Ϣ-�ļ��������           -" << endl;
        cout << "-------------------------------------------------------" << endl << endl;
        ifstream infile ("subject_test.txt", ios::in);

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
        cout << "������Ŀ��Ϣ���......" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        infile.close ();
        return -1;
    }
    else if(flag == 2) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         ��ӭ����������Ŀ��Ϣ-�����������           -" << endl;
        cout << "-------------------------------------------------------" << endl << endl;
        cout << "��������Ŀ������" << endl;
        int stu_num;
        cin >> stu_num;
        cout << endl;

        cout << "��������Ŀ��Ϣ(���/��Ŀ/����Ҫ��/���ʱ��)��" << endl;

        for(int i = 0; i < stu_num; ++i) {
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
                real_sub++;
            }
        }
        cout << endl;
        cout << "������Ŀ��Ϣ���......" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}