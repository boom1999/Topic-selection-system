#pragma once
#include<iostream>
#include<string>
using namespace std;


class Student
{
public:
    void in_xh (string x);//����ѧ��
    void in_name (string x);//��������
    void in_class (string x);//����༶
    string get_xh ();//����ѧ��
    string get_name ();//��������
    string get_class ();//���ذ༶
    Student ();
    ~Student ();

private:
    string st_xh;//ѧ��
    string st_name;//����
    string st_class;//�༶
};

Student::Student ()
{
}

Student::~Student ()
{
}