//#include<stdio.h>
//
//int func();
//
//
//int main()
//{
//	func();
//	extern int num;
//	printf("%d\n", num);
//	return 0;
//}
//
//int num = 4;
//
//int func()
//{
//	printf("%d\n", num);
//	return num;
//}


//#include <stdio.h>
//
///* ȫ�ֱ������� */
//int a = 20;
//
//int main()
//{
//	/* ���������еľֲ��������� */
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int sum(int, int);
//
//	printf("value of a in main() = %d\n", a);
//	c = sum(a, b);
//	printf("value of c in main() = %d\n", c);
//
//	return 0;
//}
//
///* ������������ĺ��� */
//int sum(int a, int b)
//{
//	printf("value of a in sum() = %d\n", a);
//	printf("value of b in sum() = %d\n", b);
//
//	return a + b;
//}


//#include <iostream>
//using namespace std;
////return local array
//int* func1()
//{
//	int a[10] = { 1, 2, 3 };
//	return a;
//}
////return local object reference
//int &func2()
//{
//	int x = 666;
//	return x;
//}
//
//int main()
//{
//	int *p = func1();
//	int p2 = func2();
//	//�����crash����Ϊ�ڴ�ӡʱ���ֲ������������Ȼ�����ˡ�
//	cout << p2 << endl;
//	for (int i = 0; i < 10; i++)
//		cout << p[i] << " ";
//	cout << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>

using namespace std;

//void func1()
//{
//	int i = 0;
//	static int j = 100;
//}





int main()
{
	cout << j << endl;
	system("pause");
}