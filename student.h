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
    void in_su (string x);//����ѡ������
    void in_flag (int x);//�����Ƿ�ѡ��
    string get_xh ();//����ѧ��
    string get_name ();//��������
    string get_class ();//���ذ༶
    string get_su ();//����ѡ������
    int get_flag ();//�����Ƿ�ѡ��
    Student () { st_xh = "null", st_name = "null", st_class = "null", st_su = "null", st_flag = 0; };//Ĭ��Ϊû��ѡ����Ŀ

private:
    string st_xh;//ѧ��
    string st_name;//����
    string st_class;//�༶
    string st_su;//ѡ������
    int st_flag;//�Ƿ�ѡ��
};