/*项目作业3
o 设计一个字符串类，并将项目作业 2的内容进行封装
此部分为主函数部分以及包含一个显示功能的菜单函数*/ 
#include<iostream>
#include "work3class.h"//包含头文件work3class.h
using namespace std;

//菜单
void menu()
{
	cout<<"\t\t*********************字符串函数操作菜单***************************\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       1.复制字符串                8.比较指定长度字符串         *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       2.复制指定长度字符串        9.查找字符字符串             *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       3.添加字符串                10.反向字符查找字符串        *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       4.添加指定长度字符串        11.查找字符串                *\n";
    cout<<"\t\t*                                                                *\n";
    cout<<"\t\t*       5.取字符串长度              12.字符串转化成int型         *\n";
    cout<<"\t\t*                                                                *\n";
	cout<<"\t\t*       6.比较字符串                13.字符串转化成double型      *\n";
    cout<<"\t\t*                                                                *\n";
	cout<<"\t\t*       7.忽略大小比较字符串字符串  0.退出                       *\n";
	cout<<"\t\t*                                                                *\n";
	cout<<"\t\t******************************************************************\n"; 
    cout<<"\t\t请输入指令(0-13): ";
}

int main()
{
	char s0[] = "a";   //用来初始化调用各个字符串处理函数的输入字符串函数 
	char s1[] = "b"; 
	Stringfunction a(s0,s1,0);
	int num(0);        //用来调用函数 
    system("color 0A");//修改运行时的字体颜色
    while(1)
    { 
        menu();        //调用菜单
        cin>>num;
        system("cls");//这将清除运行的任何文本的屏幕
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
            case 0: cout<<"谢谢使用！\n\n"; 
			return 0;
            default :cout<<"\n无效的指令!\n\n\n";//输入0-13以外的报错 
        }
        system("pause");//这将要求“按任意键....”关闭窗口
        system("cls");  //这将清除运行的任何文本的屏幕
    }
    return 0;
}
