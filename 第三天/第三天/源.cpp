#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string>
using namespace std;

//class String
//{
//public:
//	String(const char* str = "")
//	{
//		if (str == nullptr)
//			return;
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//
//	String(const String& str)
//		:_str(new char[strlen(str._str) + 1])
//	{
//		strcpy(_str, str._str);
//	}
//
//	String& operator=(const String& str)
//	{
//		if (this != &str)
//		{
//
//			char* Pstr = new char[strlen(str._str) + 1];
//			strcpy(Pstr, str._str);
//			delete[] _str;
//			_str = Pstr;
//		}
//		return *this;
//
//	}
//
//	String(const String& str)
//		:_str(nullptr)
//	{
//		String Pstr(str._str);
//		swap(_str, Pstr._str);
//	}
//
//	String& operator= (String str)
//	{
//		swap(_str, str._str);
//		return *this;
//	}
//	~String()
//	{
//		if (_str)
//		{
//			delete[]_str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//
//int main()
//{
//	String s1("ÄãºÃ");
//	String s2("Õæ°ô");
//
//	s1 = s2;
//
//	printf("%p\n", s1);
//	printf("%p\n", s2);
//	
//	system("pause");
//	return 0;
//}
#include<mutex>
class Lazy
{
public:
	static Lazy* get_one()
	{
		m_mutex.lock();
		if (_one == nullptr)
		{
			if (_one == nullptr)
			{

				_one = new Lazy();
			}
			m_mutex.unlock();
		}
		return _one;
	}

	class GBarobo
	{
	public:
		~GBarobo()
		{
			delete _one;
		}
	};
private:
	Lazy(){};

	Lazy(const Lazy& d) = delete;
	Lazy& operator=(const Lazy& d) = delete;

	static Lazy* _one;
	static GBarobo GB;
	static mutex m_mutex;

};
Lazy* Lazy::_one = nullptr;
Lazy::GBarobo GB;
mutex Lazy::m_mutex;


int main()
{

	return 0;
}