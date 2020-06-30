#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"menu.h"
using namespace std;


int auto_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入自动选题界面                   -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "根据学号后两位匹配题目" << endl;
    cout << "请输入班级人数：" << endl;

    int stu_number;
    cin >> stu_number;
    for(int i = 0; i < stu_number; i++) {
        if(stu[ i ].get_xh () == sub[ i ].get_number ())
            //sub_[ i ] = sub[ i ];
            cout << sub[ i ].get_number () << "	" << sub[ i ].get_task () << "	"
            << sub[ i ].get_request () << "	" << sub[ i ].get_time () << endl;

    }
    cout << "题目匹配完成！" << endl;
    cout << "请按任意键返回菜单" << endl;
    int re_num;
    cin >> re_num;
    return -1;
}