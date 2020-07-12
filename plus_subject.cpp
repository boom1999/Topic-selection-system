#include<iostream>
#include<fstream>
#include"menu.h"
#include"subject.h"
using namespace std;


int plus_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入添加题目信息界面               -" << endl;
    cout << "请输入本次增加题目数量（请确认总题目数量不大于于一百,-1返回菜单）：" << endl;

    unsigned int plus_sub;
    cin >> plus_sub;
    cout << endl;
    int index_sub = real_sub;
    real_sub += plus_sub;

    if(real_sub == -1) {
        return -1;
    }
    else if(real_sub > 100) {
        cout << "增加题目数量过大！请重新输入！" << endl;
        cout << "请输入任意数字返回菜单：" << endl;
        real_sub -= plus_sub;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        for(int i = index_sub; i < real_sub; i++) {
            cout << "请输入添加题目的信息（编号/题目/任务要求/完成时间）：" << endl;
            int repeat = 0;
            string number, task, request, time;
            cin >> number >> task >> request >> time;
            for(int j = 0; j < real_stu; j++) {
                if(sub[ j ].get_number () == number) {
                    repeat = 1;
                    cout << "题目编号重复，请重新输入！" << endl << endl;
                    break;
                }
                else
                    continue;
            }
            if(repeat == 1) {
                i--;
                continue;
            }
            else {
                sub[ i ].in_number (number);
                sub[ i ].in_task (task);
                sub[ i ].in_request (request);
                sub[ i ].in_time (time);
            }
        }
        cout << endl;
        cout << "输入题目信息完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }
}