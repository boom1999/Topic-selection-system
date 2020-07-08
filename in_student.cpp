#include<iostream>
#include<fstream>
#include"menu.h"
#include"student.h"
using namespace std;


int in_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入输入学生信息界面               -" << endl;
    cout << "-请选择输入信息方式：                                 -" << endl;
    cout << "-     1.文件读入                                      -" << endl;
    cout << "-     2.键盘输入                                      -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "请选择（1/2,-1返回菜单）：" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == -1) {
        return -1;
    }
    else if(flag == 1) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         欢迎进入输入人员信息-文件读入界面           -" << endl;
        cout << endl;
        ifstream in_file ("student_test.txt", ios::in);
        if(!in_file) {
            cout << "Open error!" << endl;
            cout << "输入任意数字返回菜单：";
            int re_num;
            cin >> re_num;
            return -1;
        }

        int t;
        in_file >> t;
        real_stu = t;
        cout << "(学号/姓名/班级):" << endl;
        for(int i = 0; i < t; ++i) {
            string xh, name, _class;
            in_file >> name >> xh >> _class;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
            cout << stu[ i ].get_name () << "	" << stu[ i ].get_xh () << "	" << stu[ i ].get_class () << endl;
        }
        cout << endl;
        cout << "输入完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        in_file.close ();
        return -1;
    }
    else if(flag == 2) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         欢迎进入输入学生信息-键盘输入界面           -" << endl;
        cout << endl;
        cout << "请输入人数：" << endl;
        int stu_number;
        cin >> stu_number;
        cout << endl;
        cout << "请输入学生信息(学号/姓名/班级)：" << endl;
        for(int i = 0; i < stu_number; ++i) {
            string name, xh, _class;
            cin >> name >> xh >> _class;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
            real_stu++;
        }
        cout << endl;
        cout << "输入学生信息完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }
}