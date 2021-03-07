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
# 3.源码
- work3class.h

```cpp
//此部分定义一个存有字符串处理函数以及其对应的输
//入字符串函数的类并将其生成一个头文件work3class.h 
#ifndef WORK3MAIN_H_//如果不存在work3class.h，后面的文件名一般用大写，避免重复 
#define WORK3MAIN_H_//就引入work3class.h，此举为了防止work3class.h被重复引用 

class Stringfunction{
	public:
		Stringfunction(char *str1,char *str2,int n);        //构造函数 
		char *strcpy1(char *str1, const char *str2);        //复制字符串 
		void cpy(); 
		char *strncpy1(char *str1, const char *str2, int n);//复制指定长度字符串
		void ncpy(); 
		char *strcat1(char *str1 , const char *str2);       //附加字符串  
		void cat();
		char *strncat1(char *str1 , const char *str2,int n);//附加指定长度字符串
		void ncat();
		int strlen1(char *str);                             //统计字符串长度
		void len();
		int strcmp1(char *str1,char *str2);                 //比较字符串
		void cmp();
		int strcasecmp1(const char *str1, const char *str2);//忽略大小写比较字符串
		void casecmp();
		int strncmp1(char *str1,char *str2,int n);          //比较指定长度字符串
		void ncmp();
		char *strchr1(char *str1,char *str2);               //在字符串中查找指定字符
		void chr();
		char *strrchr1(char *str,char *str2);               //在字符串中反向查找
		void rchr();
		char *strstr1(const char *str1, const char *str2);  //查找字符串
		void str();
		int atoi1(const char *str1);                        //字符串转化成int类型 
		void atoi();
		double atof1(const char *str1);                     //把字符串转化成double浮点数
		void atof();
	private:
		char *str1;
		char *str2;
		int n;
};

#endif//否则不需要引入work3class.h 
```
- work3function.cpp

```cpp
//此部分为各个字符串处理函数以及其对应的各个字符串函数的输入字符串函数的源码 
#include<iostream> 
#include "work3class.h"//包含头文件work3class.h 
using namespace std;   //使用标准命名空间名字std 

Stringfunction::Stringfunction(char *str1,char *str2,int n)
{
	//构造函数，其中Stringfunction::表明该函数是类Stringfunction里面的函数 
}

//复制字符串 
char *Stringfunction::strcpy1(char *str1, const char *str2) //使用const,防止修改源字符串 
{
	if(str1 != nullptr && str2 != nullptr); 	
	{
	    char *temp = str1;                  //保存目的字符串地址以便返回 
    	while ((*str1++ = *str2++) != '\0');//逐个将str2的字符赋值到str1中直到遇到结束符\0 	   
    	return temp;                        //返回参数str1的字符串起始地址，使函数能够支持链式表达式
	}                              
}
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


//复制指定长度字符串 
char *Stringfunction::strncpy1(char *str1, const char *str2, int n)
{
	if(str1 != nullptr && str2 != nullptr);
	{	
	    char *temp = str1;
	    while(n-- && (*str1++ = *str2++) != '\0');//将str2前n个字符逐个复制 	   
        return temp;
    }
}
void Stringfunction::ncpy()
{	
    char *string1 = new char [100];//动态内存分配n个int的数组
    cout<<"请输入源字符串：";
	cin>>string1;  
    char *string2 = new char [100];
    cout<<"请输入要复制的字符串：";
    cin>>string2;
    int n(0);                   //复制的字符串长度 
    cout<<"请输入要复制的长度：";
	cin>>n; 
	Stringfunction a(string1,string2,n);
    cout<<"复制的结果: "<<a.strncpy1(string1,string2,n)<<endl;
	delete[] string1;
	delete[] string2; 
}


//附加字符串 
char *Stringfunction::strcat1(char *str1 , const char *str2)
{ 
    char *temp=str1;//将str1赋值给temp，然后对temp操作，保存str1首地址，方便返回 
    if(str1 != nullptr && str2 != nullptr)
    { 
        while(*temp)//以str1末字符的地址作为添加字符的开始 
       {
            temp++;
       }
       while(*temp++=*str2++)//每次循环赋值返回 nullptr直到赋值结束 
       {
            nullptr;
       }
    return str1;
    } 
}
void Stringfunction::cat()
{	
    char *string1 = new char [100];
    cout<<"请输入源字符串：";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"请输入添加的字符串：";
    cin>>string2;
    Stringfunction a(string1,string2,0);
	cout<<"添加的结果: "<<a.strcat1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2;  
}


//附加指定长度字符串
char *Stringfunction::strncat1(char *str1 , const char *str2,int n)
{ 
    char *temp=str1; 
    if(str1 != nullptr && str2 != nullptr)
    { 
        while(*temp)//以str1末字符的地址作为添加字符的开始 
       {
            temp++;
       }
       while(n-- && (*temp++=*str2++))//逐个添加n个字符 
       {
            nullptr;
       }
    return str1;
    } 
}
void Stringfunction::ncat()
{	
    char *string1 = new char [100];
    cout<<"请输入源字符串：";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"请输入添加的字符串：";
    cin>>string2;
    int n(0);//添加的字符长度
	cout<<"请输入添加的字符长度：";
    cin>>n; 
    Stringfunction a(string1,string2,n);
	cout<<"添加的结果: "<<a.strncat1(string1,string2,n)<<endl;
	delete[] string1;
	delete[] string2;  
}


//统计字符串长度
int Stringfunction::strlen1(char *p)
{
	int n(0);//字符串长度 
	if(p != nullptr)
	{
		while(*p++ !='\0')
		{
			n++;
		}
	}
	return n;
} 
void Stringfunction::len()
{
	char *string1 = new char [100];
    cout<<"请输入字符串：";
    cin>>string1;
    char string2[] = "a";
    Stringfunction a(string1,string2,0);
    cout<<"该字符串长度为："<<a.strlen1(string1)<<endl;
	delete[] string1; 
}


//比较字符串
int Stringfunction::strcmp1(char *str1,char *str2)
{
	if(str1 != nullptr && str2 != nullptr)
	{
		while(*str1 == *str2)//逐个比较，若相等则继续比较 
		{   
            if(*str1 =='\0')//两者相等返回0 
			return 0;		    
		    str1++;
		    str2++;
		}
		return (*str1-*str2);//两者不等返回两字符的差值 
	} 
}
void Stringfunction::cmp()
{
	char *string1 = new char [100];
    cout<<"请输入字符串1：";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"请输入字符串2：";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"比较结果为："<<a.strcmp1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2; 
}


//忽略大小写比较字符串
int Stringfunction::strcasecmp1(const char *str1, const char *str2)
{
    char s1, s2;            //存储转化后的字符 
    do {
        s1 = tolower(*str1++);//将大写的字母转换成小写 
        s2 = tolower(*str2++);
    } while(s1 == s2 && s1 != 0);
    return s1 - s2;
}
void Stringfunction::casecmp()
{
	char *string1 = new char [100];
    cout<<"请输入字符串1：";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"请输入字符串2：";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"比较结果为："<<a.strcasecmp1(string1,string2);
    delete[] string1;
	delete[] string2;
}


//比较指定长度字符串
int Stringfunction::strncmp1(char *str1,char *str2,int n)
{
	if(str1 != nullptr && str2 != nullptr)
	{
		while(--n && *str1 == *str2)//逐个比较，若相等则继续比较 
		{   
            if(*str1 =='\0')//两者相等返回0 
			return 0;		    
		    str1++;
		    str2++;
		}
		return (*str1-*str2);//两者不等返回两字符的差值 
	} 
}
void Stringfunction::ncmp()
{
	char *string1 = new char [100];
    cout<<"请输入字符串1：";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"请输入字符串2：";
    cin>>string2;
    int n(0);//比较的字符长度 
    cout<<"请输入要比较的字符长度：";
	cin>>n;
	Stringfunction a(string1,string2,n); 
    cout<<"比较结果为："<<a.strncmp1(string1,string2,n)<<endl;
	delete[] string1;
	delete[] string2; 
}


//在字符串中查找指定字符
char *Stringfunction::strchr1(char *str1,char *str2)
{
	while(*str1 != '\0' && *str1 != *str2)//直到查找完或者遇到所查找的 
    {
        ++str1;
    }
    if(*str1==*str2)
	   return str1;
	else
	   return nullptr;
}
void Stringfunction::chr()
{
	char *string1 = new char [100];
    cout<<"请输入查找的源字符串：";
    cin>>string1;
    char *string2 = new char [100];//查找的字符 
    cout<<"请输入查找的字符：";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"查找结果为："<<a.strchr1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2;
}


//在字符串中反向查找
char *Stringfunction::strrchr1(char *str1,char *str2)
{   
    char *temp=str1;//存储str首地址 
	while(*str1 != '\0')//找出str末地址 
    {
        ++str1;
    }
    while(str1 != temp)
    {
    	if(*str1 == *str2)
    	{
    		return str1;
		}
		else
		{
			--str1;
		}
	}
}
void Stringfunction::rchr()
{
	char *string1 = new char [100];
    cout<<"请输入查找的源字符串：";
    cin>>string1;
    char *string2 = new char [100];//查找的字符 
    cout<<"请输入查找的字符：";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"查找结果为："<<a.strrchr1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2; 
}


//查找字符串
char *Stringfunction::strstr1(const char *str1, const char *str2)
{ 
    if (*str2)//首先要有查找的字符串，否则没有意义直接返回nullptr 
	{  
	    while(*str1)//然后查找源字符串要有，否则同样返回nullptr 
	    {   
		    for(int n(0); *(str1+n) == *(str2+n); n++)   
            {    
			    if (!*(str2+n+1))//注意'\0'所以+1    
	            {     
			    return (char *)str1; //强制转换类型为char*,因为函数返回的时char*类型 
	            }   
	        }
            str1++;//不管两者字符匹配不匹配都要往下走 
        }  
		return nullptr; 
	}
    return nullptr;
}
void Stringfunction::str()
{
	char *string1 = new char [100];//源字符串 
    cout<<"请输入查找的源字符串：";
    cin>>string1;
    char *string2 = new char [100];//查找的字符串 
    cout<<"请输入查找的字符：";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"查找结果为："<<a.strstr1(string1,string2)<<endl;
	delete[] string1; 
	delete[] string2;
}	

//字符串转化成int类型 
int Stringfunction::atoi1(const char *str1)
{
    int dest(0);         //保存转换后的数值
    int negative(0);     //记录字符串中是否有负号
    int len(0);          //记录字符串的长度
    const char *p = str1; //保存str首地址 
    char temp = '0';     //用于后面逐个过滤掉不相关的字符 

    while(*p++!='\0')    //计算字符串的长度
    {
        len++;
    }
    p = str1;             //重新指向字符串的首地址
    if(*p == '-')        //判断是否有负号
    {
        negative = 1;     
    }
    
    for(int i = 0;i < len;i++)
    {
        temp = *p++;
        if(temp > '9'||temp < '0')//滤除非数字字符
        {
            continue;             //跳出本次循环，不执行下面语句，继续执行下一次循环 
        }
        if(dest != 0||temp != '0')//滤除字符串开始的0字符
        {
            temp -= '0';          //每循环一次，就表示现有的位要增加一位，故*10；字符ASCII值减去字符‘0’ASCII值，既得其对应的数值 
            dest = dest*10 + temp;
        }
    }

    if(negative)                 //如果字符串中有负号，将数值取反
        return (0 - dest);
    else
        return dest;             //返回转换后的数值
}
void Stringfunction::atoi()
{
	char *string1 = new char [100];//源字符串 
    cout<<"请输入要转换的源字符串：";
    cin>>string1;
    char string2[] = "a";
	Stringfunction a(string1,string2,0); 
    cout<<"转换结果为："<<a.atoi1(string1)<<endl;
	delete[] string1; 
} 


//把字符串转化成double浮点数
double Stringfunction::atof1(const char *str)
{
	double s=0.0; //临时储存转换的数字 
	double d=10.0;//计算小数点后的部分 
	bool falg=false;//记录正负 

	if(*str=='-')   //记录数字正负
	{
		falg=true;
		str++;
	}
	if(!(*str>='0'&&*str<='9'))           //如果一开始非数字则退出，返回0.0
		return s; 
	while(*str>='0'&&*str<='9'&&*str!='.')//计算小数点前整数部分
	{
		s=s*10.0+*str-'0';
		str++;
	}
	if(*str=='.')                        //以后为小数部分
		str++;
	while(*str>='0'&&*str<='9')          //计算小数部分
	{
		s=s+(*str-'0')/d;
		d*=10.0;
		str++;
	}
    return s*(falg?-1.0:1.0);//false真最后返回负数 
}
void Stringfunction::atof()
{
	char *string1 = new char [100];
    cout<<"请输入要转换的源字符串1：";
    cin>>string1; 
    char *string2 = new char [100];
    cout<<"请输入要转换的源字符串2：";
    cin>>string2;
	Stringfunction a(string1,string2,0);
    cout<<"相加转换的结果为："<<a.atof1(string1)+a.atof1(string2)<<endl;
    cout<<"相乘转换的结果为："<<a.atof1(string1)*a.atof1(string2)<<endl;
	delete[] string1;
	delete[] string2; 
} 
```
- work3main.cpp

```cpp
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
```
# 4.源码下载
[https://github.com/Zhuhezhang/string-handling-function](https://github.com/Zhuhezhang/string-handling-function)
