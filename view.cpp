#include<iostream>
#include<string>
#include<iomanip>
#include"menu.h"
using namespace std;

int view () {
    cout << "(����/�༶/ѧ��/���/��Ŀ/����Ҫ��/���ʱ��):" << endl;
    cout << "��������������������������������������������������������������������������������" << endl;

    for(int i = 0; i < real_stu; ++i) {
        cout << "ѧ��������" << stu[ i ].get_name () << "   " << "ѧ�ţ�" << stu[ i ].get_xh () << "   " << "�༶��" << stu[ i ].get_class () << endl;
        if(stu[ i ].get_su () == "null") {
            cout << "��Ǹ������δ���ѡ�⣬��ѡ���Զ�ѡ����ֶ�ѡ����ٳ��Խ���ͬ����" << endl;
            cout << "��������������������������������������������������������������������������������" << endl;
            continue;
        }
        int sub_i = stoi (stu[ i ].get_su ());
        cout << "��Ŀ��ţ�" << sub[ sub_i ].get_number () << endl;
        cout << "��Ŀ���ݣ�" << sub[ sub_i ].get_task () << endl;
        cout << "����Ҫ��" << sub[ sub_i ].get_request () << endl;
        cout << "���ʱ�䣺" << sub[ sub_i ].get_time () << endl;
        cout << "��������������������������������������������������������������������������������" << endl;
    }
    cout << "�����������ַ��ز˵���";
    int re_num;
    cin >> re_num;
    return -1;
}