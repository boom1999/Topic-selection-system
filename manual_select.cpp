#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include"menu.h"
#define random(x) (rand()%x)
using namespace std;


int guess (int num) {
    srand (time (NULL));
    return random (num);
}

int manual_select () {
    cout << "-------------------------------------------------------" << endl;
    cout << "-              ��ӭ�����ֶ�ѡ�����                   -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "������ѧ�ź���λ(����-1���ز˵�)��" << endl;

    int last_xh;
    while(cin >> last_xh) {
        if(last_xh == -1)return -1;
        else {
            int guess (int);
            int n = 10;
            int res = guess (n);
            cout << sub[ last_xh ].get_number () << "	" << sub[ last_xh ].get_task () << "	"
                << sub[ last_xh ].get_request () << "	" << sub[ last_xh ].get_time () << endl;
            sub[ res ] = sub[ res + 1 ];
        }
    }
}