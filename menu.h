#pragma once
#include<iostream>
#include<string>
#include"student.h"
#include"subject.h"


extern Student stu[ 40 ];
extern Subject sub[ 50 ], sub_[ 40 ];
extern int real_stu;
extern int real_sub;

void menu_list ();//0.总选择目录

int in_student ();//1.输入学生信息目录
int in_subject ();//2.输入题目信息目录

int mod_menu ();//3.修改信息目录
int mod_xh (string x);//3.1根据学号修改
int mod_subject (string x);//3.2根据题目修改

int del_student ();//4.删除学生信息目录
int del_subject ();//5.删除题目信息目录

int plus_student ();//6.增加学生信息目录
int plus_subject ();//7.增加题目信息目录

int manual_select ();//8.手动选题目录
int auto_select ();//9.自动选题目录

int file_output ();//10.文件同步
