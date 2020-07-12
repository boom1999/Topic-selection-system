#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include"menu.h"
using namespace std;

int file_input () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入格式化读入界面                  -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "确定是否开始读入信息(输入任意数字继续，-1返回菜单)：" << endl;

    int want_in;
    cin >> want_in;

    if(want_in == -1) {
        return -1;
    }
    else {
        ifstream infile ("result_io.txt", ios::in);
        if(!infile) {
            cout << "Open error!" << endl;
            cout << "输入任意数字返回菜单：";
            int re_num;
            cin >> re_num;
            return -1;
        }
        int t;
        infile >> t;
        real_stu = t;
        real_sub = t;
        cout << "(学号/姓名/班级/编号/题目/任务要求/完成时间):" << endl;
        for(int i = 0; i < t; ++i) {
            string xh, name, _class, number, task, request, time;
            infile >> name >> xh >> _class >> number >> task >> request >> time;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
            stu[ i ].in_su (to_string(i));
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
            sub[ i ].in_stu (xh);
            cout << stu[ i ].get_name () << "	" << stu[ i ].get_xh () << "	" << stu[ i ].get_class () << "	" << sub[ i ].get_number () << "	" << sub[ i ].get_task () << "	" << sub[ i ].get_request () << "	" << sub[ i ].get_time () << endl;
        }

        cout << endl;
        cout << "输入学生信息完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }
}