#include<iostream>
#include<string>
#include<string.h>
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
    cout << "-              ��ӭ�����ֶ�ѡ�����                   -" << endl;
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "�����������ּ���(-1���ز˵�)��";
    match_stu = 0;
    int flag;
    cin >> flag;

    if(flag == -1)
        return -1;
    for(; match_stu < real_stu; match_stu++) {
        int res = guess (real_sub);
        string str_res = to_string (res);
        if(sub[ res ].get_stu () != "null") {
            match_stu--;
            continue;
        }
        cout << "----------------------------------------------" << endl;
        cout << "������ѧ�ţ�(����-1�˳��ֶ�ѡ��)";
        string en_xh; cin >> en_xh;
        if(stoi (en_xh) == -1) {
            cout << "�ֶ�ѡ���ж�" << endl;
            cout << "�����������ַ��ز˵���";
            int re_num;
            cin >> re_num;
            return -1;
        }
        int s = 0;//�����Ƿ���ڸ�ѧ��
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == en_xh) {
                if(stu[i].get_flag()==1) {
                    s = 1;
                    cout << "��ѧ����ƥ��,�Ƿ�����ѡ��(��1����ѡ�񣬰�0����)" << endl;
                    cout << "----------------------------------------------" << endl << endl;
                    int con = 0;
                    cin >> con;
                    if(con == 1) {
                        match_stu--;
                        stu[ i ].in_su (str_res);
                        sub[ res ].in_stu (en_xh);
                        cout << "ƥ����ɣ�" << endl;
                        cout << "ѧ��������" << stu[ i ].get_name () << "   " << "ѧ�ţ�" << stu[ i ].get_xh () << "   " << "�༶��" << stu[ i ].get_class () << endl;
                        cout << "��Ŀ��ţ�" << sub[ stoi (stu[ i ].get_su ()) ].get_number () << endl;
                        cout << "��Ŀ���ݣ�" << sub[ stoi (stu[ i ].get_su ()) ].get_task () << endl;
                        cout << "����Ҫ��" << sub[ stoi (stu[ i ].get_su ()) ].get_request () << endl;
                        cout << "���ʱ�䣺" << sub[ stoi (stu[ i ].get_su ()) ].get_time () << endl;
                        cout << "----------------------------------------------" << endl << endl;
                        break;
                    }
                    else if(con == 0)
                        break;
                }
                s = 1;
                stu[ i ].in_flag (1);
                stu[ i ].in_su (str_res);
                sub[ res ].in_stu (en_xh);
                cout << "ƥ����ɣ�" << endl;
                cout << "ѧ��������" << stu[ i ].get_name () << "   " << "ѧ�ţ�" << stu[ i ].get_xh () << "   " << "�༶��" << stu[ i ].get_class () << endl;
                cout << "��Ŀ��ţ�" << sub[ stoi(stu[i].get_su()) ].get_number () << endl;
                cout << "��Ŀ���ݣ�" << sub[ stoi (stu[ i ].get_su ()) ].get_task () << endl;
                cout << "����Ҫ��" << sub[ stoi (stu[ i ].get_su ()) ].get_request () << endl;
                cout << "���ʱ�䣺" << sub[ stoi (stu[ i ].get_su ()) ].get_time () << endl;
                cout << "----------------------------------------------" << endl << endl;
            }
        }
        if(s == 0) {
            cout << "��λʧ�ܣ���ȷ�����������Ƿ���ȷ���������룡" << endl;
            cout << "----------------------------------------------" << endl << endl;
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