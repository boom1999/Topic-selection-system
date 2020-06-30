#include<iostream>
#include<fstream>
#include"menu.h"
#include"subject.h"
using namespace std;


int plus_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入添加题目信息界面               -" << endl;
    cout << "请输入本次增加题目数量（请确认总题目数量少于一百二十）：" << endl;

    unsigned int plus_sub;
    cin >> plus_sub;
    cout << endl;
    int index_sub = real_sub;
    real_sub += plus_sub;

    if(real_sub > 120) {
        cout << "增加题目数量过大！请重新输入！" << endl;
        cout << "请输入任意数字返回菜单：" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        cout << "请输入添加题目的信息（编号/题目/任务要求/完成时间）：" << endl;
        for(int i = index_sub; i < real_sub; i++) {
            string number, task, request, time;
            cin >> number >> task >> request >> time;
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
        }
        cout << endl;
        cout << "输入题目信息完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }
}