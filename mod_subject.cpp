#include<iostream>
#include<string>
#include"menu.h"
using namespace std;


int mod_subject (string x) {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入修改题目信息界面               -" << endl;
    cout << "-     1.修改题目                                      -" << endl;
    cout << "-     2.修改任务要求                                  -" << endl;
    cout << "-     3.修改完成时间                                  -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "请选择（1/2/3,-1返回菜单）：" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == 1) {
        cout << "请输入需要修改题目：" << endl;
        string change_task;
        cin >> change_task;

        int s = 0;
        for(int i = 0; i < real_sub; ++i) {
            if(sub[ i ].get_number () == x) {

                s = 1;
                sub[ i ].in_task (change_task);
                cout << "题目修改完成！" << endl;
                cout << "请输入任意数字返回菜单：" << endl;
                int x;
                cin >> x;
                return -1;
            }
        }
        if(s == 0) {
            cout << "题目编号错误！请确认输入内容是否正确！" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
    else if(flag == 2) {
        cout << "请输入需要修改的任务要求：" << endl;
        string change_request;
        cin >> change_request;

        int s = 0;
        for(int i = 0; i < real_sub; ++i)
            if(sub[ i ].get_number () == x) {

                s = 1;
                sub[ i ].in_request (change_request);
                cout << "题目修改完成！" << endl;
                cout << "请输入任意数字返回菜单：" << endl;
                int re_num;
                cin >> re_num;
                return -1;
            }
        if(s == 0) {
            cout << "题目编号错误！请确认输入内容是否正确！" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
    else if(flag == 3) {
        cout << "请输入需要修改的完成时间：" << endl;
        string change_time;
        cin >> change_time;

        int s = 0;
        for(int i = 0; i < real_sub; ++i)
            if(sub[ i ].get_number () == x) {

                sub[ i ].in_time (change_time);
                s = 1;
                cout << "题目修改完成！" << endl;
                cout << "请输入任意数字返回菜单：" << endl;
                int re_num;
                cin >> re_num;
                return -1;
            }
        if(s == 0) {
            cout << "题目编号错误！请确认输入内容是否正确！" << endl;
            cout << "请输入任意数字返回菜单：" << endl;
            int re_num;
            cin >> re_num;
            return -1;
        }
    }
    else if(flag == -1) return -1;
    else return 0;
}