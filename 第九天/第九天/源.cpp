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
//
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