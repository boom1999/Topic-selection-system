#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int mod_menu () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����޸���Ϣ����                   -" << endl;
    cout << "-��ѡ���޸���Ϣ���ݣ�                                 -" << endl;
    cout << "-     1.�޸�ѧ����Ϣ                                  -" << endl;
    cout << "-     2.�޸���Ŀ��Ϣ                                  -" << endl;
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "��ѡ��1/2,-1���ز˵�����" << endl;
    int flag;
    cin >> flag;
    cout << endl;

    int rr;//�����ж��Ƿ���������
    if(flag == 1) {
        cout << "��������Ҫ�޸�ѧ����ѧ�ţ�" << endl;
        string change_xh;
        cin >> change_xh;

        int s = 0;//�����Ƿ���ڸ�ѧ��
        for(int i = 0; i < real_stu; ++i)
            if(stu[ i ].get_xh () == change_xh) s = 1;

        if(s == 0) {
            cout << "��λʧ�ܣ���ȷ�����������Ƿ���ȷ��" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
        rr = mod_xh (change_xh);

    }
    else if(flag == 2) {
        cout << "��������Ҫ�޸ĵ���Ŀ��ţ�" << endl;
        string change_number;
        cin >> change_number;

        int s = 0;//�����Ƿ���ڸ���Ŀ���
        for(int i = 0; i < real_sub; ++i)
            if(sub[ i ].get_number () == change_number) s = 1;

        if(s == 0) {
            cout << "��λʧ�ܣ���ȷ�����������Ƿ���ȷ��" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
        rr = mod_subject (change_number);
    }
    else if(flag == -1) return -1;
    else return 0;

    if(rr == -1) return -1;
}