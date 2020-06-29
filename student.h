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
    string get_xh ();//返回学号
    string get_name ();//返回姓名
    string get_class ();//返回班级
    Student ();
    ~Student ();

private:
    string st_xh;//学号
    string st_name;//姓名
    string st_class;//班级
};

Student::Student ()
{
}

Student::~Student ()
{
}