#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int mod_xh (string x) {
    cout << "-------------------------------------------------------" << endl;
    cout << "-        ��ӭ�����޸�ѧ����Ϣ����-����ѧ���޸�        -" << endl;
    cout << "-     1.�޸�����                                      -" << endl;
    cout << "-     2.�޸İ༶                                      -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "��ѡ��1/2,-1���ز˵�����" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == 1) {
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == x) {
                cout << "���޸ĵ�����Ϊ��" << endl;
                string change_name;
                cin >> change_name;
                cout << endl;
                stu[ i ].in_name (change_name);
                break;
            }
        }
        cout << "�޸����" << endl;
        cout << "�������������ַ��ز˵���" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else if(flag == 2) {
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == x) {
                cout << "���޸ĵİ༶Ϊ��" << endl;
                string change_class;
                cin >> change_class;
                cout << endl;
                stu[ i ].in_class (change_class);
                break;
            }
        }
        cout << "�޸����" << endl;
        cout << "�������������ַ��ز˵���" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else if(flag == -1) return -1;
    else return 0;
}