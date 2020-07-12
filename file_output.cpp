#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include"menu.h"
using namespace std;

int file_output () {
    //用于更美观的输出
    ofstream outfile ("result.txt", ios::out);
    if(!outfile) {
        cerr << "Output error!" << endl;
        cout << "请输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }

    outfile << "(姓名/班级/学号/编号/题目/任务要求/完成时间):" << endl;
    outfile << "————————————————————————————————————————" << endl;

    for(int i = 0; i < real_stu; ++i) {
        outfile << "学生姓名："<<stu[ i ].get_name () << "   " <<"学号："<< stu[ i ].get_xh () << "   " <<"班级："<<stu[ i ].get_class () << endl;
        if(stu[ i ].get_su () == "null") {
            cout << "学生姓名：" << stu[ i ].get_name () << "   " << "学号：" << stu[ i ].get_xh () << "   " << "班级：" << stu[ i ].get_class () << endl;
            cout << "抱歉！您还未完成选题，请选择自动选题或手动选题后再尝试进行同步！" << endl;
            outfile << "抱歉！您还未完成选题，请选择自动选题或手动选题后再尝试进行同步！" << endl << endl;
            continue;
        }
        int sub_i = stoi(stu[ i ].get_su ());
        outfile << "题目编号：" << sub[ sub_i ].get_number () << endl;
        outfile << "题目内容：" << sub[ sub_i ].get_task () << endl;
        outfile << "任务要求：" << sub[ sub_i ].get_request () << endl;
        outfile << "完成时间：" << sub[ sub_i ].get_time () << endl;
        outfile << "————————————————————————————————————————" << endl;
    }
    outfile.close ();
    cout << endl;

    //用于文件的读入
    ofstream outfile1 ("result_io.txt", ios::out);
    outfile1 << real_stu << endl;
    for(int i = 0; i < real_stu; ++i) {
        outfile1 << stu[ i ].get_name () << " " << stu[ i ].get_xh () << " " << stu[ i ].get_class () << " ";
        if(stu[ i ].get_su () == "null") {
            outfile << "null" << "null" << "null" << "null" << endl << endl;
            continue;
        }
        int sub_i = stoi (stu[ i ].get_su ());
        outfile1 << sub[ sub_i ].get_number () << " ";
        outfile1 << sub[ sub_i ].get_task () << " ";
        outfile1 << sub[ sub_i ].get_request () << " ";
        outfile1 << sub[ sub_i ].get_time () << " " << endl;
    }
    outfile1.close ();

    cout << "输出完成" << endl;
    cout << "输入任意数字返回菜单：";
    int re_num;
    cin >> re_num;
    return -1;
}