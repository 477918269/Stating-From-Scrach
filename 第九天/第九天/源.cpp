#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
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
//	}
//	return 0;
//}


struct Piexel
{
public:
	Piexel(int m, int n)//初始化图板
		:Pixel(3, 255),
		_n(n),
		_m(m)
	{
		Sketchpad.resize(_n);
		for (int i = 0; i < _n; i++)
		{
			for (int j = 0; j < _m; j++)
			{
				Sketchpad[i].push_back(Pixel);
			}
		}
	}

	void draw(int N, int M, int r, int g, int b)//像素的填充
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				Sketchpad[i][j][0] = r;
				Sketchpad[i][j][1] = g;
				Sketchpad[i][j][2] = b;
			}
		}
	}
	void PrintGraph()//打印图版
	{
		for (int i = 0; i < _n; i++)
		{
			for (int j = 0; j < _m; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					if (k != 2)
					{
						cout.width(5);
						cout << Sketchpad[i][j][k] << ",";
					}
					else
					{
						cout << Sketchpad[i][j][k];
					}
				}
				cout << " ";
			}
			cout << endl;
		}	
	}
private:
	Piexel& operator=(const Piexel&) = delete;
	Piexel(const Piexel&) = delete;

	vector<int> Pixel;//进行像素填充
	vector<vector<vector<int>>> Sketchpad;//构建图板
	int _n;
	int _m;
};

int main()
{
	int N, M, n, m, r, g, b;
	while (cin >> N >> M)//构建图版
	{
		Piexel Object(N, M);
		Object.PrintGraph();//打印画板
		cin >> n >> m >> r >> g >> b;
		{
			Object.draw(n, m, r, g, b);//绘画矩阵
			Object.PrintGraph();
		}

	}
	system("pause");
	return 0;
}