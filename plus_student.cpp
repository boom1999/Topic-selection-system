#include<iostream>
#include<string>
#include"menu.h"
#include"student.h"
using namespace std;


int plus_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�������ѧ����Ϣ����               -" << endl;
    cout << "�����뱾������ѧ����������ȷ����Ӻ���ѧ����������һ��,-1���ز˵�����" << endl;

    unsigned int plus_stu;
    cin >> plus_stu;
    cout << endl;
    int index_stu = real_stu;
    real_stu += plus_stu;

    if(real_stu == -1) {
        return -1;
    }
    else if(real_stu > 100) {
        cout << "����ѧ�������������������룡" << endl;
        cout << "�������������ַ��ز˵���" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        cout << "���������ѧ������Ϣ��ѧ��/����/�༶����" << endl;
        for(int i = index_stu; i < real_stu; i++) {
            string xh, name, _class;
            cin >> xh >> name >> _class;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
        }
        cout << endl;
        cout << "������Ա��Ϣ���" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}