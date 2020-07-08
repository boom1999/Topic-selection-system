#include<iostream>
#include<string>
#include<fstream>
#include"menu.h"
#include"student.h"
#include"subject.h"
using namespace std;


Student stu[ 80 ];//可以储存一百名同学
Subject sub[ 100 ];//可以储存一百二十个题目的题库
Subject sub_[ 80 ];//存储与同学人数1：1的关联题库
int real_stu = 0;
int real_sub = 0;
int match_stu = 0;
int main () {
    int n;
    int ss = -1;//用于输入-1返回主目录

    while(ss == -1) {

        menu_list ();
        ss = 0;
        cin >> n;
        system ("cls");

        switch(n) {
        case 1: { //输入学生信息菜单
                ss = in_student ();
                system ("cls");//命令行清屏
                break;
            }

        case 2: {//输入题目信息 
                ss = in_subject ();
                system ("cls");

                break;
            }
        case 3: {//修改学生信息 
                ss = mod_menu ();
                system ("cls");

                break;
            }

        case 4: {//删除学生信息菜单 
                ss = del_student ();
                system ("cls");
                break;
            }
        case 5: {//删除题目信息
                ss = del_subject ();
                system ("cls");

                break;
            }
        case 6: {//增加学生信息 
                ss = plus_student ();
                system ("cls");

                break;
            }
        case 7: {//增加题目 信息
                ss = plus_subject ();
                system ("cls");

                break;
            }
        case 8: {//自动选题 
                ss = auto_select ();
                system ("cls");

                break;
            }
        case 9: {//手动选题 
                ss = manual_select ();
                system ("cls");

                break;
            }
        case 10: {//文件同步并输出
                ss = file_output ();
                system ("cls");

                break;
            }
        case -1: {
                cout << "程序结束！" << endl;
                return 0;
            }

        }

    }
}