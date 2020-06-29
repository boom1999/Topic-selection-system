#pragma once
#include<iostream>
#include<string>
using namespace std;


class Subject
{
public:
    void in_number (string x);
    void in_task (string x);
    void in_request (string x);
    void in_time (string x);
    string get_number ();
    string get_task ();
    string get_request ();
    string get_time ();
    Subject ();
    ~Subject ();

private:
    string su_number;
    string su_task;
    string su_request;
    string su_time;
};

Subject::Subject ()
{
}

Subject::~Subject ()
{
}