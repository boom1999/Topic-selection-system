#pragma once
#include<iostream>
#include<string>
#include"student.h"
#include"subject.h"


extern Student stu[ 80 ];
extern Subject sub[ 100 ];
extern int real_stu;
extern int real_sub;
extern int match_stu;//已经匹配关联的学生人数，初始化0


void menu_list ();

int in_student ();
int plus_student ();
int del_student ();

int in_subject ();
int plus_subject ();
int del_subject ();

int mod_menu ();
int mod_xh (string x);
int mod_subject (string x);

int manual_select ();
int auto_select ();

int view ();

int file_output ();
int file_input ();

