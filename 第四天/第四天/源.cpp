#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string>
using namespace std;

//class A {
//public:
//	class B {
//	public:
//		explicit B(void) :idx(3){}
//		B(const B&b)  {
//			idx = 4;    // 不被调用
//		}
//	private:
//		int idx = 0;
//	};
//	B getB()
//	{
//		return A::B();
//	}
//};
//void test2(){
//	A a;
//	A::B b = a.getB();  // b.idx 最终的值为 3
//}
//
//
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//
//}

//void func1()
//{
//
//}
//
//
//int mian()
//{
//	return 0;
//}

class String
{
public:
	String(char* str = "")
	{
		if (str == nullptr)
		{
			_str = "";
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	//String(const String& s)
	//	:_str(new char[strlen(s._str) + 1])
	//{
	//	strcpy(_str, s._str);
	//}

	//String& operator=(const String& s)
	//{
	//	if (this != &s)
	//	{
	//		char* Pstr = new char[strlen(s._str) + 1];
	//		strcpy(Pstr, s._str);
	//		delete[] _str;
	//		_str = Pstr;
	//	}
	//	return *this;
	//}

	//String(const String& s)
	//	:_str(new char[strlen(s._str) + 1])
	//{
	//	String s1(s._str);
	//	swap(_str, s1._str); 
	//}

	//String& operator=(String s)
	//{
	//	swap(_str, s._str);
	//	return *this;
	//}
	String(String&& s) :_str(s._str)
	{
		s._str = nullptr;
	}

	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}
private:
	char* _str;
};

String&& GetString(char* pStr)
{
	String strTemp(pStr);
	return strTemp;
}

int main()
{
	String s("111");
	String s1(GetString("world"));
	//string s1("111");
	//string s2(s1);

	//printf("%p\n", s1);
	//printf("%p\n", s2);
	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str1 = "hello world";
//	string str2 = str1;
//
//	printf("Sharing the memory:\n");
//	printf("/tstr1's address: %x\n", str1.c_str());
//	printf("/tstr2's address: %x\n", str2.c_str());
//
//	str1[1] = 'q';
//	str2[1] = 'w';
//
//	printf("After Copy-On-Write:\n");
//	printf("/tstr1's address: %x\n", str1.c_str());
//	printf("/tstr2's address: %x\n", str2.c_str());
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	string original = "hello";
//	char & ref = original[0];
//	string clone = original;
//	ref = 'y';
//	system("pause");
//}