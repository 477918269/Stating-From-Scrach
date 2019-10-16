#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
//int main()
//{
//	int* n = new int(10);
//
//	int* b = new(n) int (1999);
//
//	int c = *n;
//	int d = *b;
//	cout << d << c << endl;
//	system("pause");
//	return 0;
////}
//
//class hungry
//{
//public:
//	static hungry* my_once()
//	{
//		cout << 1 << endl;
//		return &_one;
//	}
//	
//
//private:
//	hungry(){};
//
//	hungry(const hungry &d) = delete;
//	hungry& operator=(const hungry& d) = delete;
//
//	static hungry _one;
//};
//
//hungry hungry::_one;
//
//int main()
//{
//	hungry* s1 = hungry::my_once();
//	system("pause");
//	return 0;
//}

//class hungry
//{
//public:
//	static hungry* get_one()
//	{
//		return &a;
//	}
//
//private:
//	hungry(){};
//
//	hungry(const hungry& h) = delete;
//	hungry& operator=(const hungry& h) = delete;
//
//	static hungry a;
//};
//
//hungry hungry::a;
//
//
//void func1()
//{
//	hungry* once = hungry::get_one();
//	hungry* twice = hungry::get_one();
//}
//
//class Lazy
//{
//public:
//	static Lazy* get_one()
//	{
//		if (_one == nullptr)
//			_one = new Lazy();
//		return _one;
//	}
//
//
//private:
//	Lazy(){};
//
//	Lazy(const Lazy& L) = delete;
//	Lazy& operator=(const Lazy& L) = delete;
//
//	static Lazy* _one;
//};
//
//Lazy* Lazy::_one = nullptr;
//
//void func2()
//{
//	Lazy* once = Lazy::get_one();
//	Lazy* twice = Lazy::get_one();
//}
//
//int main()
//{
//	func1();
//	return 0;
//}


//class hungry
//{
//public:
//	static hungry* get_one()
//	{
//		return &_one;
//	}
//
//private:
//	hungry(){};
//
//	hungry(const hungry& d) = delete;
//	hungry& operator=(const hungry& d) = delete;
//
//	static hungry _one;
//};
//
//hungry hungry::_one;
//
//void func1()
//{
//	hungry* a = hungry::get_one();
//	hungry* b = hungry::get_one();
//}
//
//
//class Lazy
//{
//public:
//	static Lazy* get_one()
//	{
//		if (nullptr == _one)
//		{
//			m_mtx.lock();
//			if (nullptr == _one)
//			{
//				_one = new Lazy();
//			}
//
//		}
//		m_mtx.unlock();
//		return _one;
//	}
//
//	class CGarbo
//	{
//		~CGarbo()
//		{
//			if (Lazy::_one)
//			{
//				delete Lazy::_one;
//			}
//		}
//
//	};
//private:
//	Lazy(){};
//
//	Lazy(const Lazy& h) = delete;
//	Lazy& operator=(const Lazy& h) = delete;
//
//	static Lazy* _one;
//	static CGarbo CG;
//	
//	static mutex m_mtx;
//};
//
//Lazy* Lazy::_one = nullptr;
//Lazy::CGarbo CG;
//mutex Lazy::m_mtx;



class Lazy
{
public:
	static Lazy* get_one()
	{
		m_mut.lock();
		if (_one == nullptr)
		{
			if (_one == nullptr)
			{

				_one = new Lazy;
			}
			m_mut.unlock();
		}
		return _one;
	}
	class CGarbo
	{
	public:
		~CGarbo()
		{
			delete Lazy::_one;
		}
	};
	
private:
	Lazy(){};


	Lazy(const Lazy& L) = delete;
	Lazy& operator=(const Lazy& L) = delete;

	static Lazy* _one;
	static CGarbo CG;
	static mutex m_mut;
};

Lazy* Lazy::_one = nullptr;
Lazy::CGarbo CG;
mutex Lazy::m_mut;

void func()
{
	Lazy* l = Lazy::get_one();
}

int main()
{
	func();
	return 0;
}