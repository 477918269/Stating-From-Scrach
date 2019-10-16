//#include<iostream>
//
//using namespace std;



//int main()
//{
//	int* a = new int(10);
//	int* b = new int[100];
//
//	int c = *b;
//
//	cout << c << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};

//void func()
//{
//	int* c = new(nothrow) int[1000000000];
//
//}
//
//
//
//
//int main()
//{
//	func();
//	//A a(10);
//	//A* b = new A(10);
//	//int* c = new int;
//	//int* d = new int(10);
//	//int* e = new int[100];
//	//int f = *c;
//	//int g = *d;
//	//int h = *e;
//	//cout << f << " "<< g << " " << h << " "<< endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//char* mystrcpy(char* dest, const char* str)
//{
//	char* dst = dest;
//
//	while (*dest++ = *str++);
//
//	return dst;
//
//}
//
//int main()
//{
//	char* a = "nihao";
//	char* b = "haha";
//	char* s = mystrcpy(a, b);
//	cout << s << endl;
//	return 0;
//}

#include<iostream>

using namespace std;

class hungry
{
public:

	static hungry* get_one()
	{
		return &once;
	}
private:
	hungry(){};
	
	hungry(const hungry& h) = delete;
	hungry& operator=(const hungry& h) = delete;

	static hungry once;

};
hungry hungry::once;
int main()
{
	return 0;
}