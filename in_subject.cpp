#include<iostream>
#include<fstream>
#include"menu.h"
#include"subject.h"
using namespace std;

int in_subject () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入输入题目信息界面               -" << endl;
    cout << "-请选择输入信息方式：                                 -" << endl;
    cout << "-     1.从文件读入                                    -" << endl;
    cout << "-     2.从键盘输入                                    -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "请选择（1/2,-1返回菜单）：" << endl;

    int flag;
    cin >> flag;
    cout << endl;

    if(flag == 1) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         欢迎进入输入题目信息-文件读入界面           -" << endl;
        cout << endl;
        ifstream infile ("subject_test.tre_numt", ios::in);
        if(!infile) {
            cout << "Open error!" << endl;
            cout << "输入任意数字返回菜单：";
            int re_num;
            cin >> re_num;
            return -1;
        }

        int t;
        infile >> t;
        real_sub = t;
        cout << "(编号/题目/任务要求/完成时间):" << endl;
        for(int i = 0; i < t; ++i) {
            string number, task, request, time;
            infile >> number >> task >> request >> time;
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
            cout << sub[ i ].get_number () << "	" << sub[ i ].get_task () << "	" << sub[ i ].get_request () << "	" << sub[ i ].get_time () << endl;
        }
        cout << endl;
        cout << "输入完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        infile.close ();
        return -1;
    }
    else if(flag == 2) {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         欢迎进入输入题目信息-键盘输入界面           -" << endl;
        cout << endl;
        cout << "请输入人数：" << endl;
        int stu_num;
        cin >> stu_num;
        cout << endl;

        cout << "请输入题目信息(编号/题目/任务要求/完成时间)：" << endl;

        for(int i = 0; i < stu_num; ++i) {
            string number, task, request, time;
            cin >> number >> task >> request >> time;
            sub[ i ].in_number (number);
            sub[ i ].in_task (task);
            sub[ i ].in_request (request);
            sub[ i ].in_time (time);
            real_sub++;
        }
        cout << endl;
        cout << "输入题目信息完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }
}