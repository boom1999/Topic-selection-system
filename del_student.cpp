#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int del_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ����ɾ��ѧ����Ϣ����               -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "ȷ���Ƿ�ʼɾ����Ϣ(�����������ּ�����-1���ز˵�)��" << endl;
    int want_del;
    cin >> want_del;

    if(want_del == -1) {
        return -1;
    }
    else {
        cout << "��������Ҫɾ������Ա��ѧ��/�༶��" << endl;
        string xh, _class;
        cin >> xh >> _class;
        cout << endl;
        int real_del = 0;//�Ƿ�ɹ�ɾ���ж�

        for(int i = 0; i < real_stu; ++i) {
            if((stu[ i ].get_xh () == xh) && (stu[ i ].get_class () == _class)) {
                real_del = 1;
                for(int k = i; k < real_stu - 1; ++k) {
                    stu[ k ] = stu[ k + 1 ];
                }
                real_stu--;
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