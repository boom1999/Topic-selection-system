#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<ctime>
#include"menu.h"
using namespace std;


int auto_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              欢迎进入自动选题界面                      -" << endl;
    cout << "-              根据学号顺序匹配题目                     -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "输入任意数字继续(-1返回菜单)：" << endl;

    match_stu = 0;
    int flag;
    cin >> flag;
    if(flag == -1)
        return-1;
    else {
        srand ((unsigned)time (NULL));
        int res = rand () % real_sub;
        string str_res = to_string (res);
        stu[ 0 ].in_su (str_res);
        sub[ res ].in_stu (stu[ 0 ].get_xh ());
        for(int i = 1; i < real_stu; i++) {
            res++;
            if(sub[ res + 1 ].get_task () == "null")
                res = 0;
            stu[ i ].in_su (to_string (res));
            sub[ res ].in_stu (stu[ i ].get_xh ());
        }
        cout << "题目匹配完成！" << endl;
        cout << "请按任意键返回菜单" << endl;
        int re_num;
        cin >> re_num;
        return -1;
    }
}