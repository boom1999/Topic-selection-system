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

        for(int i = 0; i < real_sub; ++i) {
            if(sub[ i ].get_number () == number) {
                real_del = 1;
                for(int k = i; k < real_sub - 1; ++k) {
                    sub[ k ] = sub[ k + 1 ];
                }
                real_sub--;
            }
        }
        if(real_del == 1) {
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