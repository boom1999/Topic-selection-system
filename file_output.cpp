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
        cout << "请输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }

    outfile << "(姓名/班级/学号/编号/题目/任务要求/完成时间):" << endl;
    for(int i = 0; i < real_stu; ++i) {
        outfile << stu[ i ].get_name () << "	" << stu[ i ].get_xh () << "	" << stu[ i ].get_class () << endl;
        outfile << sub[ i ].get_number () << endl;
        outfile << sub[ i ].get_task () << endl;
        outfile << sub[ i ].get_request () << endl;
        outfile << sub[ i ].get_time () << endl;
    }
    outfile.close ();
    cout << endl;

    cout << "输出完成" << endl;
    cout << "输入任意数字返回菜单：";
    int re_num;
    cin >> re_num;
    return -1;
}