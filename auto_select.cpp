#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<ctime>
#include"menu.h"
using namespace std;


int auto_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����Զ�ѡ�����                      -" << endl;
    cout << "-              ����ѧ��˳��ƥ����Ŀ                     -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "�����������ּ���(-1���ز˵�)��" << endl;

    match_stu = 0;
    int flag;
    cin >> flag;
    if(flag == -1)
        return-1;
    else {
        srand ((unsigned)time (NULL));
        int res = rand () % real_sub;
        string str_res = to_string (res);
        stu[ 0 ].in_su (str_res);
        sub[ res ].in_stu (stu[ 0 ].get_xh ());
        for(int i = 1; i < real_stu; i++) {
            res++;
            if(sub[ res + 1 ].get_task () == "null")
                res = 0;
            stu[ i ].in_su (to_string (res));
            sub[ res ].in_stu (stu[ i ].get_xh ());
        }
        cout << "��Ŀƥ����ɣ�" << endl;
        cout << "�밴��������ز˵�" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
}