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

    outfile << "(����/�༶/ѧ��/���/��Ŀ/����Ҫ��/���ʱ��):" << endl;
    for(int i = 0; i < real_stu; ++i) {
        outfile << stu[ i ].get_name () << "	" << stu[ i ].get_xh () << "	" << stu[ i ].get_class () << endl;
        outfile << sub[ i ].get_number () << endl;
        outfile << sub[ i ].get_task () << endl;
        outfile << sub[ i ].get_request () << endl;
        outfile << sub[ i ].get_time () << endl;
    }
    outfile.close ();
    cout << endl;

    cout << "������" << endl;
    cout << "�����������ַ��ز˵���";
    int re_num;
    cin >> re_num;
    return -1;
}