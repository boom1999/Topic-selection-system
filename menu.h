#pragma once
#include<iostream>
#include<string>
#include"student.h"
#include"subject.h"


extern Student a[ 40 ];
extern Subject b[ 50 ], c[ 40 ];
extern int tj;
extern int zs;

void menu_list ();//0.��ѡ��Ŀ¼

int in_student ();//1.����ѧ����ϢĿ¼
int in_subject ();//2.������Ŀ��ϢĿ¼

int mod_menu ();//3.�޸���ϢĿ¼
int mod_name ();//3.1�޸�ѧ��������Ϣ
int mod_xuehao ();//3.2����ѧ���޸�
int mod_subject ();//3.3������Ŀ�޸�

int del_student ();//4.ɾ��ѧ����ϢĿ¼
int del_subject ();//5.ɾ����Ŀ��ϢĿ¼

int plus_student ();//6.����ѧ����ϢĿ¼
int plus_subject ();//7.������Ŀ��ϢĿ¼

int manual_select ();//8.�ֶ�ѡ��Ŀ¼
int auto_select ();//9.�Զ�ѡ��Ŀ¼

int file_output ();//10.�ļ�ͬ��
