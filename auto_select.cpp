#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"menu.h"
using namespace std;


int auto_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����Զ�ѡ�����                      -" << endl;
    cout << "-              ����ѧ�ź���λƥ����Ŀ                     -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "�����������ּ���(-1���ز˵�)��" << endl;

    int flag;
    cin >> flag;
    if(flag == -1)
        return-1;
    for(int i = 0; i < real_stu; i++) {
        int xh_length = (stu[ i ].get_xh ()).length();
        long long xh_int = std::stoi (stu[ i ].get_xh());
        int last_xh = xh_int % 100;
        for(int j = 0; j < real_sub; j++) {
            int sub_int = std::stoi (sub[ i ].get_number ());
            if(last_xh == sub_int) {
                match_stu++;
            }
        }
    }
    cout << "��Ŀƥ����ɣ�" << endl;
    cout << "�밴��������ز˵�" << endl;
    int re_num;
    cin >> re_num;
    return -1;
}