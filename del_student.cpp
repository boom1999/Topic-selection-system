#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int del_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入删除学生信息界面               -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "确定是否开始删除信息(输入任意数字继续，-1返回菜单)：" << endl;
    int want_del;
    cin >> want_del;

    if(want_del == -1) {
        return -1;
    }
    else {
        cout << "请输入需要删除的人员的学号/班级：" << endl;
        string xh, _class;
        cin >> xh >> _class;
        cout << endl;
        int real_del = 0;//是否成功删除判断

        for(int i = 0; i < real_stu; ++i) {
            if((stu[ i ].get_xh () == xh) && (stu[ i ].get_class () == _class)) {
                real_del = 1;
                for(int k = i; k < real_stu - 1; ++k) {
                    stu[ k ] = stu[ k + 1 ];
                }
                real_stu--;
            }
        }
        if(real_del == 1) {
            cout << "删除完成" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
        else if(real_del == 0) {
            cout << "删除失败！请检查输入数据是否正确！" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
 }