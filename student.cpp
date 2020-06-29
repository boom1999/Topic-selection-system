#include"student.h"
using namespace std;


void Student::in_xh (string x) {
    st_xh = x;
}

void Student::in_name (string x)
{
    st_name = x;
}

void Student::in_class (string x)
{
    st_class = x;
}

string Student::get_xh ()
{
    return string (st_xh);
}

string Student::get_name ()
{
    return string (st_name);
}

string Student::get_class ()
{
    return string (st_class);
}
