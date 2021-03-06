#include<iostream>
#include<string>
#include<fstream>
#include <stdio.h>  
#include <windows.h> 
#include"menu.h"
#include"student.h"
#include"subject.h"
using namespace std;


Student stu[ 80 ];//可以储存八十名同学
Subject sub[ 100 ];//可以储存一百个题目的题库
int real_stu = 0;
int real_sub = 0;
int match_stu = 0;
int main () {
    int n;
    int ss = -1;//用于输入-1返回主目录

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |
        FOREGROUND_GREEN | FOREGROUND_BLUE);
    while(ss == -1) {

        menu_list ();
        ss = 0;
        cin >> n;
        system ("cls");

        switch(n) {
        case 1: { //输入学生信息
                ss = in_student ();
                system ("cls");//命令行清屏
                break;
            }

        case 2: {//增加学生信息 
                ss = plus_student ();
                system ("cls");
                break;
            }

        case 3: {//删除学生信息菜单 
                ss = del_student ();
                system ("cls");
                break;
            }

        case 4: {//输入题目信息 
                ss = in_subject ();
                system ("cls");
                break;
            }

        case 5: {//增加题目 信息
                ss = plus_subject ();
                system ("cls");
                break;
            }

        case 6: {//删除题目信息
                ss = del_subject ();
                system ("cls");
                break;
            }

        case 7: {//修改学生信息 
                ss = mod_menu ();
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

        case 10: {//选题信息显示
                ss = view ();
                system ("cls");
                break;
            }

        case 11: {//文件同步并输出
                ss = file_output ();
                system ("cls");
                break;
            }

        case 12: {//文件格式化读入
                ss = file_input ();
                system ("cls");
                break;
            }

        case -1: {
                cout << "程序结束！" << endl;
                return 0;
            }

        default: {
                cout << "程序意外结束！" << endl;
                return 0;
            }
        }

    }
}