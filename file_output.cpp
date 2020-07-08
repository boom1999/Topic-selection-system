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

    outfile << "(姓名/班级/学号/编号/题目/任务要求/完成时间):" << endl << endl;
    for(int i = 0; i < real_stu; ++i) {
        outfile << "学生姓名："<<stu[ i ].get_name () << "   " <<"学号："<< stu[ i ].get_xh () << "   " <<"班级："<<stu[ i ].get_class () << endl;
        outfile << "题目编号：" << sub[ i ].get_number () << endl;
        outfile << "题目内容：" << sub[ i ].get_task () << endl;
        outfile << "任务要求：" << sub[ i ].get_request () << endl;
        outfile << "完成时间：" << sub[ i ].get_time () << endl << endl;
    }
    outfile.close ();
    cout << endl;

    cout << "输出完成" << endl;
    cout << "输入任意数字返回菜单：";
    int re_num;
    cin >> re_num;
    return -1;
}