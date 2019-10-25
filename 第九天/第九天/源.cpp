#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//最大的数分为三种情况
//1.全部为正，最右边两数相乘
//2.全部为负，最左边两数相乘
//3.一正一负，最左边的数相乘

//vector<int> fun(vector<int> v)//返回值为数组
//{
//	vector<int> v1;
//	sort(v.begin(), v.end());//进行排序
//	int j = v.size() - 1;
//	int a = v[j] * v[j - 1];
//	int b = v[0] * v[1];
//	if (a > b)//判断大小
//	{
//		v1.push_back(v[j]);
//		v1.push_back(v[j - 1]);
//	}
//	else
//	{
//		v1.push_back(v[0]);
//		v1.push_back(v[1]);
//	}
//
//	return v1;
//}
//
//int main()
//{
//
//	int n, j;
//	while (cin >> n)//输入数组个数
//	{
//		vector<int> v;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> j;//填充数组
//			v.push_back(j);
//		}
//		vector<int> v1;
//		v1 = fun(v);//进入函数
//		cout << v1[0] << " " << v1[1] << endl;
//
//	}
//	return 0;
//
//	return 0;
//}


void draw(vector<string>& vv,int M, int r, int g, int b)
{
	char* str = ""
}

int main()
{
	int M, N, r, g, b;

	while (cin >> M >> N >> r >> g >> b)
	{
		vector<string> vv(N);
		draw(vv, M, r, g, b);
	}

	return 0;
}