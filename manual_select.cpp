#include<iostream>
#include<string>
#include<string.h>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include"menu.h"
#define random(x) (rand()%x)
using namespace std;


int guess (int num) {
    srand ((unsigned)time (NULL));
    return random (num);
}

int manual_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入手动选题界面                   -" << endl;
    cout << "-------------------------------------------------------" << endl << endl;

    cout << "输入任意数字继续(-1返回菜单)：";
    match_stu = 0;
    int* match = new int[ real_stu ];
    memset (match, 0, real_stu);
    int flag;
    cin >> flag;

    if(flag == -1)
        return -1;
    for(; match_stu < real_stu; match_stu++) {
        int res = guess (real_sub);
        string str_res = to_string (res);
        if(sub[ res ].get_stu () != "null") {
            match_stu--;
            continue;
        }
        cout << "----------------------------------------------" << endl;
        cout << "请输入学号：";
        string en_xh; cin >> en_xh;
        int s = 0;//查找是否存在该学号
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == en_xh) {
                if(match[i]==1) {
                    s = 1;
                    cout << "该学号已匹配,请重新输入!" << endl;
                    cout << "----------------------------------------------" << endl << endl;
                    match_stu--;
                    break;
                }
                match[ i ] = 1;
                s = 1;
                stu[ i ].in_su (str_res);
                sub[ res ].in_stu (en_xh);
                cout << "匹配完成！" << endl;
                cout << "学生姓名：" << stu[ i ].get_name () << "   " << "学号：" << stu[ i ].get_xh () << "   " << "班级：" << stu[ i ].get_class () << endl;
                cout << "题目编号：" << sub[ stoi(stu[i].get_su()) ].get_number () << endl;
                cout << "题目内容：" << sub[ stoi (stu[ i ].get_su ()) ].get_task () << endl;
                cout << "任务要求：" << sub[ stoi (stu[ i ].get_su ()) ].get_request () << endl;
                cout << "完成时间：" << sub[ stoi (stu[ i ].get_su ()) ].get_time () << endl;
                cout << "----------------------------------------------" << endl << endl;
            }
        }
        if(s == 0) {
            cout << "定位失败！请确认输入内容是否正确并重新输入！" << endl;
            cout << "----------------------------------------------" << endl << endl;
            match_stu--;
        }
    }
    cout << endl;
    delete[]match;
    cout << "输入题目信息完成" << endl;
    cout << "输入任意数字返回菜单：";
    int re_num;
    cin >> re_num;
    return -1;
}