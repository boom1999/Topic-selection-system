#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"menu.h"
using namespace std;


int auto_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入自动选题界面                      -" << endl;
    cout << "-              根据学号后两位匹配题目                     -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "输入任意数字继续(-1返回菜单)：" << endl;

    int flag;
    cin >> flag;
    if(flag == -1)
        return-1;
    for(int i = 0; i < real_stu; i++) {
        int xh_length = (stu[ i ].get_xh ()).length();
        long long xh_int = std::stoi (stu[ i ].get_xh());
        int last_xh = xh_int % 100;
        for(int j = 0; j < real_sub; j++) {
            int sub_int = std::stoi (sub[ i ].get_number ());
            if(last_xh == sub_int) {
                match_stu++;
            }
        }
    }
    cout << "题目匹配完成！" << endl;
    cout << "请按任意键返回菜单" << endl;
    int re_num;
    cin >> re_num;
    return -1;
}