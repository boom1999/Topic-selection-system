#include<iostream>
#include<fstream>
#include"menu.h"
#include"student.h"
using namespace std;


int in_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ��������ѧ����Ϣ����               -" << endl;
    cout << "-��ѡ��������Ϣ��ʽ��                                 -" << endl;
    cout << "-     1.�ļ�����                                      -" << endl;
    cout << "-     2.��������                                      -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "��ѡ��1/2,-1���ز˵�����" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == -1) {
        return -1;
    }
    else if(flag == 1) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         ��ӭ����������Ա��Ϣ-�ļ��������           -" << endl;
        cout << endl;
        ifstream in_file ("student_test.txt", ios::in);
        if(!in_file) {
            cout << "Open error!" << endl;
            cout << "�����������ַ��ز˵���";
            int re_num;
            cin >> re_num;
            return -1;
        }

        int t;
        in_file >> t;
        real_stu = t;
        cout << "(ѧ��/����/�༶):" << endl;
        for(int i = 0; i < t; ++i) {
            string xh, name, _class;
            in_file >> name >> xh >> _class;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
            cout << stu[ i ].get_name () << "	" << stu[ i ].get_xh () << "	" << stu[ i ].get_class () << endl;
        }
        cout << endl;
        cout << "�������" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        in_file.close ();
        return -1;
    }
    else if(flag == 2) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         ��ӭ��������ѧ����Ϣ-�����������           -" << endl;
        cout << endl;
        cout << "������������" << endl;
        int stu_number;
        cin >> stu_number;
        cout << endl;
        cout << "������ѧ����Ϣ(ѧ��/����/�༶)��" << endl;
        for(int i = 0; i < stu_number; ++i) {
            string name, xh, _class;
            cin >> name >> xh >> _class;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
            real_stu++;
        }
        cout << endl;
        cout << "����ѧ����Ϣ���" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}