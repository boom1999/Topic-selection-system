#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int mod_subject (string x) {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����޸���Ŀ��Ϣ����               -" << endl;
    cout << "-     1.�޸���Ŀ                                      -" << endl;
    cout << "-     2.�޸�����Ҫ��                                  -" << endl;
    cout << "-     3.�޸����ʱ��                                  -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "��ѡ��1/2/3,-1���ز˵�����" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == 1) {
        cout << "��������Ҫ�޸���Ŀ��" << endl;
        string change_task;
        cin >> change_task;

        int s = 0;
        for(int i = 0; i < real_sub; ++i) {
            if(sub[ i ].get_number () == x) {

                s = 1;
                sub[ i ].in_task (change_task);
                cout << "��Ŀ�޸���ɣ�" << endl;
                cout << "�������������ַ��ز˵���" << endl;
                int x;
                cin >> x;
                return -1;
            }
        }
        if(s == 0) {
            cout << "��Ŀ��Ŵ�����ȷ�����������Ƿ���ȷ��" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
    else if(flag == 2) {
        cout << "��������Ҫ�޸ĵ�����Ҫ��" << endl;
        string change_request;
        cin >> change_request;

        int s = 0;
        for(int i = 0; i < real_sub; ++i)
            if(sub[ i ].get_number () == x) {

                s = 1;
                sub[ i ].in_request (change_request);
                cout << "��Ŀ�޸���ɣ�" << endl;
                cout << "�������������ַ��ز˵���" << endl;
                int re_num;
                cin >> re_num;
                return -1;
            }
        if(s == 0) {
            cout << "��Ŀ��Ŵ�����ȷ�����������Ƿ���ȷ��" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
    else if(flag == 3) {
        cout << "��������Ҫ�޸ĵ����ʱ�䣺" << endl;
        string change_time;
        cin >> change_time;

        int s = 0;
        for(int i = 0; i < real_sub; ++i)
            if(sub[ i ].get_number () == x) {

                sub[ i ].in_time (change_time);
                s = 1;
                cout << "��Ŀ�޸���ɣ�" << endl;
                cout << "�������������ַ��ز˵���" << endl;
                int re_num;
                cin >> re_num;
                return -1;
            }
        if(s == 0) {
            cout << "��Ŀ��Ŵ�����ȷ�����������Ƿ���ȷ��" << endl;
            cout << "�������������ַ��ز˵���" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
    else if(flag == -1) return -1;
    else return 0;
}