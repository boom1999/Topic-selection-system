#include<iostream>
#include<string>
#include"menu.h"
#include"student.h"
using namespace std;


int plus_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�������ѧ����Ϣ����               -" << endl;
    cout << "�����뱾������ѧ����������ȷ����Ӻ���ѧ�����������ڰ�ʮ,-1���ز˵�����" << endl;

    unsigned int plus_stu;
    cin >> plus_stu;
    cout << endl;
    int index_stu = real_stu;
    real_stu += plus_stu;

    if(real_stu == -1) {
        return -1;
    }
    else if(real_stu > 80 || real_stu > real_sub) {
        cout << "����ѧ�������������������룡" << endl;
        cout << "�������������ַ��ز˵���" << endl;
        real_stu -= plus_stu;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        for(int i = index_stu; i < real_stu; i++) {
            cout << "���������ѧ������Ϣ��ѧ��/����/�༶����" << endl;
            int repeat = 0;
            string xh, name, _class;
            cin >> xh >> name >> _class;
            for(int j = 0; j < real_stu; j++) {
                if(stu[ j ].get_xh () == xh) {
                    repeat = 1;
                    cout << "ѧ���ظ������������룡" << endl << endl;
                    break;
                }
                else
                    continue;
            }
            if(repeat == 1) {
                i--;
                continue;
            }
            else {
                stu[ i ].in_xh (xh);
                stu[ i ].in_name (name);
                stu[ i ].in_class (_class);
            }
        }
        cout << endl;
        cout << "������Ա��Ϣ���" << endl;
        cout << "�����������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }
}