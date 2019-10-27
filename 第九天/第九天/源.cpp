#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;


//��������Ϊ�������
//1.ȫ��Ϊ�������ұ��������
//2.ȫ��Ϊ����������������
//3.һ��һ��������ߵ������
//vector<int> fun(vector<int> v)//����ֵΪ����
//{
//	vector<int> v1;
//	sort(v.begin(), v.end());//��������
//	int j = v.size() - 1;
//	int a = v[j] * v[j - 1];
//	int b = v[0] * v[1];
//	if (a > b)//�жϴ�С
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
//	while (cin >> n)//�����������
//	{
//		vector<int> v;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> j;//�������
//			v.push_back(j);
//		}
//		vector<int> v1;
//		v1 = fun(v);//���뺯��
//		cout << v1[0] << " " << v1[1] << endl;
//	}
//	return 0;
//}


struct Piexel
{
public:
	Piexel(int m, int n)//��ʼ��ͼ��
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

	void draw(int N, int M, int r, int g, int b)//���ص����
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
	void PrintGraph()//��ӡͼ��
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

	vector<int> Pixel;//�����������
	vector<vector<vector<int>>> Sketchpad;//����ͼ��
	int _n;
	int _m;
};

int main()
{
	int N, M, n, m, r, g, b;
	while (cin >> N >> M)//����ͼ��
	{
		Piexel Object(N, M);
		Object.PrintGraph();//��ӡ����
		cin >> n >> m >> r >> g >> b;
		{
			Object.draw(n, m, r, g, b);//�滭����
			Object.PrintGraph();
		}

	}
	system("pause");
	return 0;
}