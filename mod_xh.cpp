#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int mod_xh (string x) {
    cout << "-------------------------------------------------------" << endl;
    cout << "-        欢迎进入修改学生信息界面-根据学号修改        -" << endl;
    cout << "-     1.修改姓名                                      -" << endl;
    cout << "-     2.修改班级                                      -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "请选择（1/2,-1返回菜单）：" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == 1) {
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == x) {
                cout << "所修改的姓名为：" << endl;
                string change_name;
                cin >> change_name;
                cout << endl;
                stu[ i ].in_name (change_name);
                break;
            }
        }
        cout << "修改完成" << endl;
        cout << "请输入任意数字返回菜单：" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else if(flag == 2) {
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == x) {
                cout << "所修改的班级为：" << endl;
                string change_class;
                cin >> change_class;
                cout << endl;
                stu[ i ].in_class (change_class);
                break;
            }
        }
        cout << "修改完成" << endl;
        cout << "请输入任意数字返回菜单：" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else if(flag == -1) return -1;
    else return 0;
}