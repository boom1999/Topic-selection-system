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
    string get_number ();//������Ŀ���
    string get_task ();//������Ŀ����
    string get_request ();//������ĿҪ��
    string get_time ();//�������ʱ��

private:
    string su_number;//��Ŀ���
    string su_task;//��Ŀ����
    string su_request;//����Ҫ��
    string su_time;//���ʱ��
};