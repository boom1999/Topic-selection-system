#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include"menu.h"
#define random(x) (rand()%x)
using namespace std;


int guess (int num) {
    srand ((unsigned)time (NULL));
    return random (num);
}

int manual_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����ֶ�ѡ�����                      -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "�����������ּ���(-1���ز˵�)��" << endl;

    match_stu = 0;
    int flag;
    cin >> flag;
    if(flag == -1)
        return -1;
    for(; match_stu < real_stu; match_stu++) {
        int res = guess (real_sub);
        string str_res = to_string (res);
        if(sub[ res ].get_con () == 1) {
            match_stu--;
            continue;
        }
        cout << "������ѧ�ţ�";
        string en_xh; cin >> en_xh;
        int s = 0;//�����Ƿ���ڸ�ѧ��
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == en_xh) {
                s = 1;
                stu[ i ].in_su (str_res);
                sub[ res ].in_con (1);
            }
        }
        if(s == 0) {
            cout << "��λʧ�ܣ���ȷ�����������Ƿ���ȷ���������룡" << endl;
            match_stu--;
        }
    }
    cout << endl;
    cout << "������Ŀ��Ϣ���" << endl;
    cout << "�����������ַ��ز˵���";
    int re_num;
    cin >> re_num;
    return -1;
}