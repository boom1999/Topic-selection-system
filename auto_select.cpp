#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"menu.h"
using namespace std;


int auto_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����Զ�ѡ�����                   -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "����ѧ�ź���λƥ����Ŀ" << endl;
    cout << "������༶������" << endl;

    int stu_number;
    cin >> stu_number;
    for(int i = 0; i < stu_number; i++) {
        if(stu[ i ].get_xh () == sub[ i ].get_number ())
            //sub_[ i ] = sub[ i ];
            cout << sub[ i ].get_number () << "	" << sub[ i ].get_task () << "	"
            << sub[ i ].get_request () << "	" << sub[ i ].get_time () << endl;

    }
    cout << "��Ŀƥ����ɣ�" << endl;
    cout << "�밴��������ز˵�" << endl;
    int re_num;
    cin >> re_num;
    return -1;
}