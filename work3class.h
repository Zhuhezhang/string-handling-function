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
