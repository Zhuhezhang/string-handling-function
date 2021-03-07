@[TOC](目录)
# 1.总体分析
大概思路是这样的，根据题目的要求以及项目作业2的具体代码，我把代码分成这样的三个文件：work3class.h文件定义一个字符串类存放字符串处理函数以及对应的字符串输入函数；work3function.cpp文件写字符串处理函数以及其对应的字符串输入函数的具体代码；work3main.cpp文件为主函数部分，负责存放显示操作的菜单函数以及负责调用各个函数的主函数。

# 2.详细设计
首先建立一个名为work3class.h的头文件，为了便于其他读者的理解，会在代码开头写上该文件的作用以及其大概包含的代码。为了后面的文件引用该头文件，利用#ifndef、#define和#endif。接着定义一个名为Stringfunction的类，其中public里面包含二十七个函数声明，这二十七个中有一个构造函数，以及其他十三个字符串处理函数和每个字符串处理函数对应的共十三个输入字符串函数；接着是在private中定义三个变量。代码如下所示。
```cpp
//此部分定义一个存有字符串处理函数以及其对应的输
//入字符串函数的类并将其生成一个头文件work3class.h 
#ifndef WORK3MAIN_H_//如果不存在work3class.h，后面的文件名一般用大写，避免重复 
#define WORK3MAIN_H_//就引入work3class.h，此举为了防止work3class.h被重复引用 
class Stringfunction{
	public:
		Stringfunction(char *str1,char *str2,int n);       //构造函数 
		char *strcpy1(char *str1, const char *str2);       //复制字符串 
		void cpy(); 
		char *strncpy1(char *str1, const char *str2, int n);//复制指定长度字符串
		void ncpy(); 
		char *strcat1(char *str1 , const char *str2);       //附加字符串  
		void cat();
		char *strncat1(char *str1 , const char *str2,int n);//附加指定长度字符串
		void ncat();
		int strlen1(char *str);                          //统计字符串长度
		void len();
		int strcmp1(char *str1,char *str2);               //比较字符串
		void cmp();
		int strcasecmp1(const char *str1, const char *str2);//忽略大小写比较字符串
		void casecmp();
		int strncmp1(char *str1,char *str2,int n);          //比较指定长度字符串
		void ncmp();
		char *strchr1(char *str1,char *str2);             //在字符串中查找指定字符
		void chr();
		char *strrchr1(char *str,char *str2);             //在字符串中反向查找
		void rchr();
		char *strstr1(const char *str1, const char *str2);  //查找字符串
		void str();
		int atoi1(const char *str1);                   //字符串转化成int类型 
		void atoi();
		double atof1(const char *str1);             //把字符串转化成double浮点数
		void atof();
	private:
		char *str1;
		char *str2;
		int n;
};
#endif//否则不需要引入work3class.h
```

完成类的创建以及函数的声明之后，接着再创建一个work3function.cpp的文件，用来存放在上一个文件中声明的函数的原型。同样地，在代码开头也标注上该段文件代码的基本内容方便理解，最重要的是要在开头利用#include "work3class.h"包含头文件work3class.h，使上一个文件能够包含进来，否则程序无法正常执行。完成这些之后就是写一个类里面的构造函数

```cpp
Stringfunction::Stringfunction(char *str1,char *str2,int n)
{
	//构造函数，其中Stringfunction::表明该函数是类Stringfunction里面的函数 
}
```

然后就是根据项目作业2逐个写上各个函数的函数原型，当然了，在类外面定义一个类里面声明过的函数应该加上类名以及作用域运算符，如下所示：

```cpp
//复制字符串 
char *Stringfunction::strcpy1(char *str1, const char *str2) //使用const,防止修改源字符串 
{
if(str1 != nullptr && str2 != nullptr); 	
	{
char *temp = str1;              //保存目的字符串地址以便返回 
while ((*str1++ = *str2++) != '\0');//逐个将str2的字符赋值到str1中直到遇到结束符\0 	   
return temp;        //返回参数str1的字符串起始地址，使函数能够支持链式表达式
	}                              
}
```

紧接字符串处理函数是其对应的输入字符串函数，除了要加上Stringfunction::表明是类里面的函数以外，还在每个字符串输入函数里面定义一个对象并将输入的字符串的用于初始化它，然后用它调用字符串处理函数，如下所示，

```cpp
void Stringfunction::cpy()
{ 
    char *string1 = new char [100]; //动态内存分配100个int的空间 
    cout<<"请输入源字符串：";
    cin>>string1; 
    char *string2 = new char [100];
    cout<<"请输入要复制的字符串：";
    cin>>string2;
    Stringfunction a(string1,string2,0);//定义一个对象并初始化 
    cout<<"复制的结果: "<<a.strcpy1(string1,string2)<<endl;
    delete[] string1;//释放分配的空间 
	delete[] string2;  
}
```

后面的思路基本一样，这里便不做解释，免得冗长多余。这样work3function.cpp文件也写完了。最后是主函数文件，首先同样的也要包含头文件work3class.h，然后利用cout写一个菜单函数，接着再写主函数并在其中调用，在主函数里面也定义一个对象，然后通过switch语句输入对应的编号来调用类里面的字符串处理函数的字符串输入函数。

```cpp
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
```

最后再创建一个项目把它们都包含进去，如此，整个程序编写完成。
