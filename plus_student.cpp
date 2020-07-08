#include<iostream>
#include<string>
#include"menu.h"
#include"student.h"
using namespace std;


int plus_student () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入添加学生信息界面               -" << endl;
    cout << "请输入本次增加学生数量（请确认添加后总学生数量少于一百,-1返回菜单）：" << endl;

    unsigned int plus_stu;
    cin >> plus_stu;
    cout << endl;
    int index_stu = real_stu;
    real_stu += plus_stu;

    if(real_stu == -1) {
        return -1;
    }
    else if(real_stu > 100) {
        cout << "增加学生数量过大！请重新输入！" << endl;
        cout << "请输入任意数字返回菜单：" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
    else {
        cout << "请输入添加学生的信息（学号/姓名/班级）：" << endl;
        for(int i = index_stu; i < real_stu; i++) {
            string xh, name, _class;
            cin >> xh >> name >> _class;
            stu[ i ].in_xh (xh);
            stu[ i ].in_name (name);
            stu[ i ].in_class (_class);
        }
        cout << endl;
        cout << "输入人员信息完成" << endl;
        cout << "输入任意数字返回菜单：";
        int re_num;
        cin >> re_num;
        return -1;
    }
}