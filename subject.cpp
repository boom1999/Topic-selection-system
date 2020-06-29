#include"subject.h"
using namespace std;


void Subject::in_number (string x)
{
    su_number = x;
}

void Subject::in_task (string x)
{
    su_task = x;
}

void Subject::in_request (string x)
{
    su_request = x;
}

void Subject::in_time (string x)
{
    su_time = x;
}

string Subject::get_number ()
{
    return string (su_number);
}

string Subject::get_task ()
{
    return string (su_task);
}

string Subject::get_request ()
{
    return string (su_request);
}

string Subject::get_time ()
{
    return string (su_time);
}
