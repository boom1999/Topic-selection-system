#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int del_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ����ɾ����Ŀ��Ϣ����                   -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "ȷ���Ƿ�ʼɾ����Ϣ(�����������ּ�����-1���ز˵�)��" << endl;
    int want_del;
    cin >> want_del;

    if(want_del == -1) {
        return -1;
    }
    else {
        cout << "����Ҫɾ������Ŀ��ţ�" << endl;

        string number;
        cin >> number;
        cout << endl;
        int real_del = 0;
        int i = 0;
        int j = 0;

        for(; i < real_sub; ++i) {
            if(sub[ i ].get_number () == number) {
                real_del = 1;
                real_sub--;
                break;
            }
            else
                continue;
        }

        if(real_del == 1) {
            for(int k = i; k < real_sub; ++k)
                sub[ k ] = sub[ k + 1 ];

            for(; j < real_stu; j++) {
                if(stoi (stu[ j ].get_su ()) == i) {
                    stu[ j ].in_su ("null");
                    j++;
                    break;
                }
                else
                    continue;
            }

            for(; j < real_stu; j++) {
                int int_su = stoi (stu[ j ].get_su ());
                stu[ j ].in_su (to_string (int_su + 1));
            }

            sub[ real_sub + 1 ].in_number ("null");
            sub[ real_sub + 1 ].in_request ("null");
            sub[ real_sub + 1 ].in_task ("null");
            sub[ real_sub + 1 ].in_time ("null");
            sub[ real_sub + 1 ].in_stu ("null");

            cout << "ɾ�����" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
        else if(real_del == 0) {
            cout << "ɾ��ʧ�ܣ��������������Ƿ���ȷ��" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
}