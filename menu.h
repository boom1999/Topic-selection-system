#pragma once
#include<iostream>
#include<string>
#include"student.h"
#include"subject.h"


extern Student stu[ 80 ];
extern Subject sub[ 100 ];
extern int real_stu;
extern int real_sub;
extern int match_stu;//�Ѿ�ƥ�������ѧ����������ʼ��0

void menu_list ();//0.��ѡ��Ŀ¼

int in_student ();//1.����ѧ����ϢĿ¼
int in_subject ();//2.������Ŀ��ϢĿ¼

int mod_menu ();//3.�޸���ϢĿ¼
int mod_xh (string x);//3.1����ѧ���޸�
int mod_subject (string x);//3.2������Ŀ�޸�

int del_student ();//4.ɾ��ѧ����ϢĿ¼
int del_subject ();//5.ɾ����Ŀ��ϢĿ¼

int plus_student ();//6.����ѧ����ϢĿ¼
int plus_subject ();//7.������Ŀ��ϢĿ¼

int manual_select ();//8.�ֶ�ѡ��Ŀ¼
int auto_select ();//9.�Զ�ѡ��Ŀ¼

int file_output ();//10.�ļ�ͬ��
