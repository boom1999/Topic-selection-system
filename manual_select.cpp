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

    int flag;
    cin >> flag;
    if(flag == -1)
        return -1;
    else {
        string ent_xh;
        cout << "请输入学号：";
        while(cin >> ent_xh) {
            if(match_stu < real_stu) {
                int guess (int);
                int res = guess (real_sub);
                for(int i = 0; i < real_stu; i++) {
                    if(stu[ i ].get_xh () == ent_xh) {
                         /*sub_[ i ].in_number = sub[ res ].get_number;
                       sub_[ i ].in_request = sub[ res ].get_request;
                       sub_[ i ].in_task = sub[ res ].get_task;
                       sub_[ i ].in_time = sub[ res ].get_time;*/
                        sub_[ i ] = sub[ res ];
                        cout << sub_[ i ].get_number () << "	" << sub[ i ].get_task () << "	" << sub[ i ].get_request () << "	" << sub[ i ].get_time () << endl;
                        for(; res < real_sub; res++)
                            sub[ res ] = sub[ res + 1 ];
                        real_sub = res - 1;
                        match_stu++;
                    }
                }
            }
            else {
                cout << "题目已选择完成！" << endl;
                cout << "请按任意键返回菜单" << endl;
                int re_num;
                cin >> re_num;
                return -1;
            }
        }
    }
}