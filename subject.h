#pragma once
#include<iostream>
#include<string>
using namespace std;


class Subject
{
public:
    void in_number (string x);//������Ŀ���
    void in_task (string x);//������Ŀ����
    void in_request (string x);//��������Ҫ��
    void in_time (string x);//�������ʱ��
    void in_stu (string x);//�����Ƿ����
    string get_number ();//������Ŀ���
    string get_task ();//������Ŀ����
    string get_request ();//������ĿҪ��
    string get_time ();//�������ʱ��
    string get_stu ();//���ع�����ѧ��
    Subject () { su_number="null",su_task="null",su_request="null",su_time="null",su_stu = "null"; };

private:
    string su_number;//��Ŀ���
    string su_task;//��Ŀ����
    string su_request;//����Ҫ��
    string su_time;//���ʱ��
    string su_stu;//������ѧ��
};