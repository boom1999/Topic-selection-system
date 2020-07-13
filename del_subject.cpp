#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int del_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入删除题目信息界面               -" << endl;
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "确定是否开始删除信息(输入任意数字继续，-1返回菜单)：";
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
        int i = 0;
        int k;

        for(; i < real_sub; ++i) {
            if(sub[ i ].get_number () == number) {
                real_del = 1;
                real_sub--;
                break;
            }
            else
                continue;
        }

        k = i;//储存被删除题目的下标
        if(real_del == 1) {           
            /* 题目集全部向前移位，最后一个题目清零*/
            for(; i < real_sub; i++) 
                sub[ i ] = sub[ i + 1 ];
            sub[ i ].in_number ("null");
            sub[ i ].in_request ("null");
            sub[ i ].in_task ("null");
            sub[ i ].in_time ("null");
            sub[ i ].in_stu ("null");
            /*若学生选择的题目被删除，则类内su为null，若学生选择的题目序号在被删除的序号之后，则序号变成su-1*/
            for(int j = 0; j < real_stu; j++) {
                if(stu[j].get_su()=="null"||stoi (stu[ j ].get_su ()) == k)
                    stu[ j ].in_su ("null");
                else if(stoi (stu[ j ].get_su ()) > k) {
                    int en_su = stoi (stu[ j ].get_su ());
                    stu[ j ].in_su (to_string (en_su - 1));
                }
                else
                    continue;
            }

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