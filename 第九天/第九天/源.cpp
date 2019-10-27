#include<iostream>
#include<vector>
#include<algorithm>
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
		:v1(3, 0),
		_n(n),
		_m(m)

	{
		v2.resize(_n);
		for (int i = 0; i < _n; i++)
		{
			for (int j = 0; j < _m; j++)
			{
				v2[i].push_back(v1);
			}
		}
	}

	void draw(int N, int M, int r, int g, int b)//���ص����
	{

		if ((M >= 0 && M < _m) || (N >= 0 && N < _n))
		{
			v2[N][M][0] = r;
			v2[N][M][1] = g;
			v2[N][M][2] = b;
			
		}
		else
		{
			cout << "�����������������" << endl;
		}

	}

	int drop(int N, int M, int r, int g, int b)//�˳�����
	{
		if (N == 'b' && M == 'i' && r == 'l' && g == 'i' && b == 'i')
			return 1;
		return 0;
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
						cout << v2[i][j][k] << ",";
					}
					else
					{
						cout << v2[i][j][k];
					}
				}
				cout << " ";
			}
			cout << endl;
		}
		
	}

private:
	vector<int> v1;
	vector<vector<vector<int>>> v2;
	int _n;
	int _m;
};

int main()
{
	int N, M;
	while (cin >> N >> M)//����ͼ��
	{
		Piexel p(N, M);
		p.PrintGraph();
		int n, m, r, g, b;
		printf("��������˳���������bilii\n");
		while (cin >> n >> m >> r >> g >> b)//ѭ������ͼ��
		{
			if (1 == p.drop(n, m, r, g, b))
				break;
			p.draw(n, m, r, g, b);
			p.PrintGraph();
		}


	}
	system("pause");
	return 0;
}