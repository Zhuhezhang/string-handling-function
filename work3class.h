//�˲��ֶ���һ�������ַ����������Լ����Ӧ����
//���ַ����������ಢ��������һ��ͷ�ļ�work3class.h 
#ifndef WORK3MAIN_H_//���������work3class.h��������ļ���һ���ô�д�������ظ� 
#define WORK3MAIN_H_//������work3class.h���˾�Ϊ�˷�ֹwork3class.h���ظ����� 

class Stringfunction{
	public:
		Stringfunction(char *str1,char *str2,int n);        //���캯�� 
		char *strcpy1(char *str1, const char *str2);        //�����ַ��� 
		void cpy(); 
		char *strncpy1(char *str1, const char *str2, int n);//����ָ�������ַ���
		void ncpy(); 
		char *strcat1(char *str1 , const char *str2);       //�����ַ���  
		void cat();
		char *strncat1(char *str1 , const char *str2,int n);//����ָ�������ַ���
		void ncat();
		int strlen1(char *str);                             //ͳ���ַ�������
		void len();
		int strcmp1(char *str1,char *str2);                 //�Ƚ��ַ���
		void cmp();
		int strcasecmp1(const char *str1, const char *str2);//���Դ�Сд�Ƚ��ַ���
		void casecmp();
		int strncmp1(char *str1,char *str2,int n);          //�Ƚ�ָ�������ַ���
		void ncmp();
		char *strchr1(char *str1,char *str2);               //���ַ����в���ָ���ַ�
		void chr();
		char *strrchr1(char *str,char *str2);               //���ַ����з������
		void rchr();
		char *strstr1(const char *str1, const char *str2);  //�����ַ���
		void str();
		int atoi1(const char *str1);                        //�ַ���ת����int���� 
		void atoi();
		double atof1(const char *str1);                     //���ַ���ת����double������
		void atof();
	private:
		char *str1;
		char *str2;
		int n;
};

#endif//������Ҫ����work3class.h 
