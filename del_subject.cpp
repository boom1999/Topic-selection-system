#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int del_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ����ɾ����Ŀ��Ϣ����               -" << endl;
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "ȷ���Ƿ�ʼɾ����Ϣ(�����������ּ�����-1���ز˵�)��";
    int want_del;
    cin >> want_del;

    if(want_del == -1) {
        return -1;
    }
    else {
        cout << "����Ҫɾ������Ŀ��ţ�" << endl;

        string number;
        cin >> number;
        cout << endl;
        int real_del = 0;
        int i = 0;
        int k;

        for(; i < real_sub; ++i) {
            if(sub[ i ].get_number () == number) {
                real_del = 1;
                real_sub--;
                break;
            }
            else
                continue;
        }

        k = i;//���汻ɾ����Ŀ���±�
        if(real_del == 1) {           
            /* ��Ŀ��ȫ����ǰ��λ�����һ����Ŀ����*/
            for(; i < real_sub; i++) 
                sub[ i ] = sub[ i + 1 ];
            sub[ i ].in_number ("null");
            sub[ i ].in_request ("null");
            sub[ i ].in_task ("null");
            sub[ i ].in_time ("null");
            sub[ i ].in_stu ("null");
            /*��ѧ��ѡ�����Ŀ��ɾ����������suΪnull����ѧ��ѡ�����Ŀ����ڱ�ɾ�������֮������ű��su-1*/
            for(int j = 0; j < real_stu; j++) {
                if(stu[j].get_su()=="null"||stoi (stu[ j ].get_su ()) == k)
                    stu[ j ].in_su ("null");
                else if(stoi (stu[ j ].get_su ()) > k) {
                    int en_su = stoi (stu[ j ].get_su ());
                    stu[ j ].in_su (to_string (en_su - 1));
                }
                else
                    continue;
            }

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