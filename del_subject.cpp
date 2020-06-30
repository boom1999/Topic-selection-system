#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int del_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入删除题目信息界面                   -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "确定是否开始删除信息(输入任意数字继续，-1返回菜单)：" << endl;
    int want_del;
    cin >> want_del;

    if(want_del == -1) {
        return -1;
    }
    else {
        cout << "输入要删除的题目编号：" << endl;

        string number;
        cin >> number;
        cout << endl;
        int real_del = 0;

        for(int i = 0; i < real_sub; ++i) {
            if(sub[ i ].get_number () == number) {
                real_del = 1;
                for(int k = i; k < real_sub - 1; ++k) {
                    sub[ k ] = sub[ k + 1 ];
                }
                real_sub--;
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