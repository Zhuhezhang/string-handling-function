//�˲���Ϊ�����ַ����������Լ����Ӧ�ĸ����ַ��������������ַ���������Դ�� 
#include<iostream> 
#include "work3class.h"//����ͷ�ļ�work3class.h 
using namespace std;   //ʹ�ñ�׼�����ռ�����std 

Stringfunction::Stringfunction(char *str1,char *str2,int n)
{
	//���캯��������Stringfunction::�����ú�������Stringfunction����ĺ��� 
}

//�����ַ��� 
char *Stringfunction::strcpy1(char *str1, const char *str2) //ʹ��const,��ֹ�޸�Դ�ַ��� 
{
	if(str1 != nullptr && str2 != nullptr); 	
	{
	    char *temp = str1;                  //����Ŀ���ַ�����ַ�Ա㷵�� 
    	while ((*str1++ = *str2++) != '\0');//�����str2���ַ���ֵ��str1��ֱ������������\0 	   
    	return temp;                        //���ز���str1���ַ�����ʼ��ַ��ʹ�����ܹ�֧����ʽ���ʽ
	}                              
}
void Stringfunction::cpy()
{ 
    char *string1 = new char [100]; //��̬�ڴ����100��int�Ŀռ� 
    cout<<"������Դ�ַ�����";
    cin>>string1; 
    char *string2 = new char [100];
    cout<<"������Ҫ���Ƶ��ַ�����";
    cin>>string2;
    Stringfunction a(string1,string2,0);//����һ�����󲢳�ʼ�� 
    cout<<"���ƵĽ��: "<<a.strcpy1(string1,string2)<<endl;
    delete[] string1;//�ͷŷ���Ŀռ� 
	delete[] string2;  
}


//����ָ�������ַ��� 
char *Stringfunction::strncpy1(char *str1, const char *str2, int n)
{
	if(str1 != nullptr && str2 != nullptr);
	{	
	    char *temp = str1;
	    while(n-- && (*str1++ = *str2++) != '\0');//��str2ǰn���ַ�������� 	   
        return temp;
    }
}
void Stringfunction::ncpy()
{	
    char *string1 = new char [100];//��̬�ڴ����n��int������
    cout<<"������Դ�ַ�����";
	cin>>string1;  
    char *string2 = new char [100];
    cout<<"������Ҫ���Ƶ��ַ�����";
    cin>>string2;
    int n(0);                   //���Ƶ��ַ������� 
    cout<<"������Ҫ���Ƶĳ��ȣ�";
	cin>>n; 
	Stringfunction a(string1,string2,n);
    cout<<"���ƵĽ��: "<<a.strncpy1(string1,string2,n)<<endl;
	delete[] string1;
	delete[] string2; 
}


//�����ַ��� 
char *Stringfunction::strcat1(char *str1 , const char *str2)
{ 
    char *temp=str1;//��str1��ֵ��temp��Ȼ���temp����������str1�׵�ַ�����㷵�� 
    if(str1 != nullptr && str2 != nullptr)
    { 
        while(*temp)//��str1ĩ�ַ��ĵ�ַ��Ϊ����ַ��Ŀ�ʼ 
       {
            temp++;
       }
       while(*temp++=*str2++)//ÿ��ѭ����ֵ���� nullptrֱ����ֵ���� 
       {
            nullptr;
       }
    return str1;
    } 
}
void Stringfunction::cat()
{	
    char *string1 = new char [100];
    cout<<"������Դ�ַ�����";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"��������ӵ��ַ�����";
    cin>>string2;
    Stringfunction a(string1,string2,0);
	cout<<"��ӵĽ��: "<<a.strcat1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2;  
}


//����ָ�������ַ���
char *Stringfunction::strncat1(char *str1 , const char *str2,int n)
{ 
    char *temp=str1; 
    if(str1 != nullptr && str2 != nullptr)
    { 
        while(*temp)//��str1ĩ�ַ��ĵ�ַ��Ϊ����ַ��Ŀ�ʼ 
       {
            temp++;
       }
       while(n-- && (*temp++=*str2++))//������n���ַ� 
       {
            nullptr;
       }
    return str1;
    } 
}
void Stringfunction::ncat()
{	
    char *string1 = new char [100];
    cout<<"������Դ�ַ�����";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"��������ӵ��ַ�����";
    cin>>string2;
    int n(0);//��ӵ��ַ�����
	cout<<"��������ӵ��ַ����ȣ�";
    cin>>n; 
    Stringfunction a(string1,string2,n);
	cout<<"��ӵĽ��: "<<a.strncat1(string1,string2,n)<<endl;
	delete[] string1;
	delete[] string2;  
}


//ͳ���ַ�������
int Stringfunction::strlen1(char *p)
{
	int n(0);//�ַ������� 
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
    cout<<"�������ַ�����";
    cin>>string1;
    char string2[] = "a";
    Stringfunction a(string1,string2,0);
    cout<<"���ַ�������Ϊ��"<<a.strlen1(string1)<<endl;
	delete[] string1; 
}


//�Ƚ��ַ���
int Stringfunction::strcmp1(char *str1,char *str2)
{
	if(str1 != nullptr && str2 != nullptr)
	{
		while(*str1 == *str2)//����Ƚϣ������������Ƚ� 
		{   
            if(*str1 =='\0')//������ȷ���0 
			return 0;		    
		    str1++;
		    str2++;
		}
		return (*str1-*str2);//���߲��ȷ������ַ��Ĳ�ֵ 
	} 
}
void Stringfunction::cmp()
{
	char *string1 = new char [100];
    cout<<"�������ַ���1��";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"�������ַ���2��";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"�ȽϽ��Ϊ��"<<a.strcmp1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2; 
}


//���Դ�Сд�Ƚ��ַ���
int Stringfunction::strcasecmp1(const char *str1, const char *str2)
{
    char s1, s2;            //�洢ת������ַ� 
    do {
        s1 = tolower(*str1++);//����д����ĸת����Сд 
        s2 = tolower(*str2++);
    } while(s1 == s2 && s1 != 0);
    return s1 - s2;
}
void Stringfunction::casecmp()
{
	char *string1 = new char [100];
    cout<<"�������ַ���1��";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"�������ַ���2��";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"�ȽϽ��Ϊ��"<<a.strcasecmp1(string1,string2);
    delete[] string1;
	delete[] string2;
}


//�Ƚ�ָ�������ַ���
int Stringfunction::strncmp1(char *str1,char *str2,int n)
{
	if(str1 != nullptr && str2 != nullptr)
	{
		while(--n && *str1 == *str2)//����Ƚϣ������������Ƚ� 
		{   
            if(*str1 =='\0')//������ȷ���0 
			return 0;		    
		    str1++;
		    str2++;
		}
		return (*str1-*str2);//���߲��ȷ������ַ��Ĳ�ֵ 
	} 
}
void Stringfunction::ncmp()
{
	char *string1 = new char [100];
    cout<<"�������ַ���1��";
    cin>>string1;
    char *string2 = new char [100];
    cout<<"�������ַ���2��";
    cin>>string2;
    int n(0);//�Ƚϵ��ַ����� 
    cout<<"������Ҫ�Ƚϵ��ַ����ȣ�";
	cin>>n;
	Stringfunction a(string1,string2,n); 
    cout<<"�ȽϽ��Ϊ��"<<a.strncmp1(string1,string2,n)<<endl;
	delete[] string1;
	delete[] string2; 
}


//���ַ����в���ָ���ַ�
char *Stringfunction::strchr1(char *str1,char *str2)
{
	while(*str1 != '\0' && *str1 != *str2)//ֱ��������������������ҵ� 
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
    cout<<"��������ҵ�Դ�ַ�����";
    cin>>string1;
    char *string2 = new char [100];//���ҵ��ַ� 
    cout<<"��������ҵ��ַ���";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"���ҽ��Ϊ��"<<a.strchr1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2;
}


//���ַ����з������
char *Stringfunction::strrchr1(char *str1,char *str2)
{   
    char *temp=str1;//�洢str�׵�ַ 
	while(*str1 != '\0')//�ҳ�strĩ��ַ 
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
    cout<<"��������ҵ�Դ�ַ�����";
    cin>>string1;
    char *string2 = new char [100];//���ҵ��ַ� 
    cout<<"��������ҵ��ַ���";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"���ҽ��Ϊ��"<<a.strrchr1(string1,string2)<<endl;
	delete[] string1;
	delete[] string2; 
}


//�����ַ���
char *Stringfunction::strstr1(const char *str1, const char *str2)
{ 
    if (*str2)//����Ҫ�в��ҵ��ַ���������û������ֱ�ӷ���nullptr 
	{  
	    while(*str1)//Ȼ�����Դ�ַ���Ҫ�У�����ͬ������nullptr 
	    {   
		    for(int n(0); *(str1+n) == *(str2+n); n++)   
            {    
			    if (!*(str2+n+1))//ע��'\0'����+1    
	            {     
			    return (char *)str1; //ǿ��ת������Ϊchar*,��Ϊ�������ص�ʱchar*���� 
	            }   
	        }
            str1++;//���������ַ�ƥ�䲻ƥ�䶼Ҫ������ 
        }  
		return nullptr; 
	}
    return nullptr;
}
void Stringfunction::str()
{
	char *string1 = new char [100];//Դ�ַ��� 
    cout<<"��������ҵ�Դ�ַ�����";
    cin>>string1;
    char *string2 = new char [100];//���ҵ��ַ��� 
    cout<<"��������ҵ��ַ���";
    cin>>string2;
    Stringfunction a(string1,string2,0);
    cout<<"���ҽ��Ϊ��"<<a.strstr1(string1,string2)<<endl;
	delete[] string1; 
	delete[] string2;
}	

//�ַ���ת����int���� 
int Stringfunction::atoi1(const char *str1)
{
    int dest(0);         //����ת�������ֵ
    int negative(0);     //��¼�ַ������Ƿ��и���
    int len(0);          //��¼�ַ����ĳ���
    const char *p = str1; //����str�׵�ַ 
    char temp = '0';     //���ں���������˵�����ص��ַ� 

    while(*p++!='\0')    //�����ַ����ĳ���
    {
        len++;
    }
    p = str1;             //����ָ���ַ������׵�ַ
    if(*p == '-')        //�ж��Ƿ��и���
    {
        negative = 1;     
    }
    
    for(int i = 0;i < len;i++)
    {
        temp = *p++;
        if(temp > '9'||temp < '0')//�˳��������ַ�
        {
            continue;             //��������ѭ������ִ��������䣬����ִ����һ��ѭ�� 
        }
        if(dest != 0||temp != '0')//�˳��ַ�����ʼ��0�ַ�
        {
            temp -= '0';          //ÿѭ��һ�Σ��ͱ�ʾ���е�λҪ����һλ����*10���ַ�ASCIIֵ��ȥ�ַ���0��ASCIIֵ���ȵ����Ӧ����ֵ 
            dest = dest*10 + temp;
        }
    }

    if(negative)                 //����ַ������и��ţ�����ֵȡ��
        return (0 - dest);
    else
        return dest;             //����ת�������ֵ
}
void Stringfunction::atoi()
{
	char *string1 = new char [100];//Դ�ַ��� 
    cout<<"������Ҫת����Դ�ַ�����";
    cin>>string1;
    char string2[] = "a";
	Stringfunction a(string1,string2,0); 
    cout<<"ת�����Ϊ��"<<a.atoi1(string1)<<endl;
	delete[] string1; 
} 


//���ַ���ת����double������
double Stringfunction::atof1(const char *str)
{
	double s=0.0; //��ʱ����ת�������� 
	double d=10.0;//����С�����Ĳ��� 
	bool falg=false;//��¼���� 

	if(*str=='-')   //��¼��������
	{
		falg=true;
		str++;
	}
	if(!(*str>='0'&&*str<='9'))           //���һ��ʼ���������˳�������0.0
		return s; 
	while(*str>='0'&&*str<='9'&&*str!='.')//����С����ǰ��������
	{
		s=s*10.0+*str-'0';
		str++;
	}
	if(*str=='.')                        //�Ժ�ΪС������
		str++;
	while(*str>='0'&&*str<='9')          //����С������
	{
		s=s+(*str-'0')/d;
		d*=10.0;
		str++;
	}
    return s*(falg?-1.0:1.0);//false����󷵻ظ��� 
}
void Stringfunction::atof()
{
	char *string1 = new char [100];
    cout<<"������Ҫת����Դ�ַ���1��";
    cin>>string1; 
    char *string2 = new char [100];
    cout<<"������Ҫת����Դ�ַ���2��";
    cin>>string2;
	Stringfunction a(string1,string2,0);
    cout<<"���ת���Ľ��Ϊ��"<<a.atof1(string1)+a.atof1(string2)<<endl;
    cout<<"���ת���Ľ��Ϊ��"<<a.atof1(string1)*a.atof1(string2)<<endl;
	delete[] string1;
	delete[] string2; 
} 
