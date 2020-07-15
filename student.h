#pragma once
#include<iostream>
#include<string>
using namespace std;


class Student
{
public:
    void in_xh (string x);//构造学号
    void in_name (string x);//构造姓名
    void in_class (string x);//构造班级
    void in_su (string x);//构造选择的题号
    void in_flag (int x);//构造是否选择
    string get_xh ();//返回学号
    string get_name ();//返回姓名
    string get_class ();//返回班级
    string get_su ();//返回选择的题号
    int get_flag ();//返回是否选择
    Student () { st_xh = "null", st_name = "null", st_class = "null", st_su = "null", st_flag = 0; };//默认为没有选择题目

private:
    string st_xh;//学号
    string st_name;//姓名
    string st_class;//班级
    string st_su;//选择的题号
    int st_flag;//是否选择
};