#include<iostream>
#include<string>
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
    cout << "-              欢迎进入手动选题界面                      -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "输入任意数字继续(-1返回菜单)：" << endl;

    match_stu = 0;
    int flag;
    cin >> flag;
    if(flag == -1)
        return -1;
    for(; match_stu < real_stu; match_stu++) {
        int res = guess (real_sub);
        string str_res = to_string (res);
        if(sub[ res ].get_con () == 1) {
            match_stu--;
            continue;
        }
        cout << "请输入学号：";
        string en_xh; cin >> en_xh;
        int s = 0;//查找是否存在该学号
        for(int i = 0; i < real_stu; i++) {
            if(stu[ i ].get_xh () == en_xh) {
                s = 1;
                stu[ i ].in_su (str_res);
                sub[ res ].in_con (1);
            }
        }
        if(s == 0) {
            cout << "定位失败！请确认输入内容是否正确并重新输入！" << endl;
            match_stu--;
        }
    }
    cout << endl;
    cout << "输入题目信息完成" << endl;
    cout << "输入任意数字返回菜单：";
    int re_num;
    cin >> re_num;
    return -1;
}