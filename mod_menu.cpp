#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int mod_menu () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入修改信息界面                   -" << endl;
    cout << "-请选择修改信息内容：                                 -" << endl;
    cout << "-     1.修改学生信息                                  -" << endl;
    cout << "-     2.修改题目信息                                  -" << endl;
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "请选择（1/2,-1返回菜单）：" << endl;
    int flag;
    cin >> flag;
    cout << endl;

    int rr;//用于判断是否正常返回
    if(flag == 1) {
        cout << "请输入需要修改学生的学号：" << endl;
        string change_xh;
        cin >> change_xh;

        int s = 0;//查找是否存在该学号
        for(int i = 0; i < real_stu; ++i)
            if(stu[ i ].get_xh () == change_xh) s = 1;

        if(s == 0) {
            cout << "定位失败！请确认输入内容是否正确！" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
        rr = mod_xh (change_xh);

    }
    else if(flag == 2) {
        cout << "请输入需要修改的题目编号：" << endl;
        string change_number;
        cin >> change_number;

        int s = 0;//查找是否存在该题目编号
        for(int i = 0; i < real_sub; ++i)
            if(sub[ i ].get_number () == change_number) s = 1;

        if(s == 0) {
            cout << "定位失败！请确认输入内容是否正确！" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
        rr = mod_subject (change_number);
    }
    else if(flag == -1) return -1;
    else return 0;

    if(rr == -1) return -1;
}