/*��Ŀ��ҵ3
o ���һ���ַ����࣬������Ŀ��ҵ 2�����ݽ��з�װ
�˲���Ϊ�����������Լ�����һ����ʾ���ܵĲ˵�����*/ 
#include<iostream>
#include "work3class.h"//����ͷ�ļ�work3class.h
using namespace std;

//�˵�
void menu()
{
	cout<<"\t\t*********************�ַ������������˵�***************************\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       1.�����ַ���                8.�Ƚ�ָ�������ַ���         *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       2.����ָ�������ַ���        9.�����ַ��ַ���             *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       3.����ַ���                10.�����ַ������ַ���        *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       4.���ָ�������ַ���        11.�����ַ���                *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       5.ȡ�ַ�������              12.�ַ���ת����int��         *\n";
    cout<<"\t\t*                                                                *\n";
	cout<<"\t\t*       6.�Ƚ��ַ���                13.�ַ���ת����double��      *\n";
    cout<<"\t\t*                                                                *\n";
	cout<<"\t\t*       7.���Դ�С�Ƚ��ַ����ַ���  0.�˳�                       *\n";
	cout<<"\t\t*                                                                *\n";
	cout<<"\t\t******************************************************************\n"; 
    cout<<"\t\t������ָ��(0-13): ";
}

int main()
{
	char s0[] = "a";   //������ʼ�����ø����ַ����������������ַ������� 
	char s1[] = "b"; 
	Stringfunction a(s0,s1,0);
	int num(0);        //�������ú��� 
    system("color 0A");//�޸�����ʱ��������ɫ
    while(1)
    { 
        menu();        //���ò˵�
        cin>>num;
        system("cls");//�⽫������е��κ��ı�����Ļ
        switch(num)
        {
            case 1:  a.cpy();    break; 
            case 2:  a.ncpy();   break;
            case 3:  a.cat();    break;
            case 4:  a.ncat();   break;
            case 5:  a.len();    break;
            case 6:  a.cmp();    break;
            case 7:  a.casecmp();break;
            case 8:  a.ncmp();   break;
            case 9:  a.chr();    break;
            case 10: a.rchr();   break;
            case 11: a.str();    break;
            case 12: a.atoi();   break;
            case 13: a.atof();   break;
            case 0: cout<<"ллʹ�ã�\n\n"; 
			return 0;
            default :cout<<"\n��Ч��ָ��!\n\n\n";//����0-13����ı��� 
        }
        system("pause");//�⽫Ҫ�󡰰������....���رմ���
        system("cls");  //�⽫������е��κ��ı�����Ļ
    }
    return 0;
}
