#include<iostream>
#include<string>
#include<fstream>
#include"menu.h"
#include"student.h"
#include"subject.h"
using namespace std;


Student stu[ 80 ];//���Դ���һ����ͬѧ
Subject sub[ 100 ];//���Դ���һ�ٶ�ʮ����Ŀ�����
Subject sub_[ 80 ];//�洢��ͬѧ����1��1�Ĺ������
int real_stu = 0;
int real_sub = 0;
int match_stu = 0;
int main () {
    int n;
    int ss = -1;//��������-1������Ŀ¼

    while(ss == -1) {

        menu_list ();
        ss = 0;
        cin >> n;
        system ("cls");

        switch(n) {
        case 1: { //����ѧ����Ϣ�˵�
                ss = in_student ();
                system ("cls");//����������
                break;
            }

        case 2: {//������Ŀ��Ϣ 
                ss = in_subject ();
                system ("cls");

                break;
            }
        case 3: {//�޸�ѧ����Ϣ 
                ss = mod_menu ();
                system ("cls");

                break;
            }

        case 4: {//ɾ��ѧ����Ϣ�˵� 
                ss = del_student ();
                system ("cls");
                break;
            }
        case 5: {//ɾ����Ŀ��Ϣ
                ss = del_subject ();
                system ("cls");

                break;
            }
        case 6: {//����ѧ����Ϣ 
                ss = plus_student ();
                system ("cls");

                break;
            }
        case 7: {//������Ŀ ��Ϣ
                ss = plus_subject ();
                system ("cls");

                break;
            }
        case 8: {//�Զ�ѡ�� 
                ss = auto_select ();
                system ("cls");

                break;
            }
        case 9: {//�ֶ�ѡ�� 
                ss = manual_select ();
                system ("cls");

                break;
            }
        case 10: {//�ļ�ͬ�������
                ss = file_output ();
                system ("cls");

                break;
            }
        case -1: {
                cout << "���������" << endl;
                return 0;
            }

        }

    }
}