#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include"menu.h"
using namespace std;

int file_output () {
    ofstream outfile ("file_out.txt", ios::out);
    if(!outfile) {
        cerr << "Output error!" << endl;
        cout << "�������������ַ��ز˵���";
        int re_num;
        cin >> re_num;
        return -1;
    }

    outfile << "(����/�༶/ѧ��/���/��Ŀ/����Ҫ��/���ʱ��):" << endl << endl;

    for(int i = 0; i < real_stu; ++i) {
        outfile << "ѧ��������"<<stu[ i ].get_name () << "   " <<"ѧ�ţ�"<< stu[ i ].get_xh () << "   " <<"�༶��"<<stu[ i ].get_class () << endl;
        if(stu[ i ].get_su () == "null") {
            cout << "��Ǹ������δ���ѡ�⣬��ѡ���Զ�ѡ����ֶ�ѡ����ٳ��Խ���ͬ����" << endl;
            outfile << "��Ǹ������δ���ѡ�⣬��ѡ���Զ�ѡ����ֶ�ѡ����ٳ��Խ���ͬ����" << endl << endl;
            continue;
        }
        int sub_i = stoi(stu[ i ].get_su ());
        outfile << "��Ŀ��ţ�" << sub[ sub_i ].get_number () << endl;
        outfile << "��Ŀ���ݣ�" << sub[ sub_i ].get_task () << endl;
        outfile << "����Ҫ��" << sub[ sub_i ].get_request () << endl;
        outfile << "���ʱ�䣺" << sub[ sub_i ].get_time () << endl << endl;
    }
    outfile.close ();
    cout << endl;

    cout << "������" << endl;
    cout << "�����������ַ��ز˵���";
    int re_num;
    cin >> re_num;
    return -1;
}