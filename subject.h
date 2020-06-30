#pragma once
#include<iostream>
#include<string>
using namespace std;


class Subject
{
public:
    void in_number (string x);//构造题目编号
    void in_task (string x);//构造题目名称
    void in_request (string x);//构造任务要求
    void in_time (string x);//构造完成时间
    string get_number ();//返回题目编号
    string get_task ();//返回题目名称
    string get_request ();//返回题目要求
    string get_time ();//返回完成时间

private:
    string su_number;//题目编号
    string su_task;//题目名称
    string su_request;//任务要求
    string su_time;//完成时间
};