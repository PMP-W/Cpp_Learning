#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//new
//int main()
//{
//	int* num = new int(10);
//	cout << *num << "\n";
//	delete num;
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		cout << arr[i] <<" ";
//	}
//	delete[] arr;
//	return 0;
//}

//����
void test1()
{
	int a = 10;
	cout <<"a="<< a << endl;
	int& b = a;
	cout <<"b=" << b << endl;
	b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}
void test2()
{
	int a = 10;
	int c = 20;
	//int& b;  //wrong
	int& b = a;

}
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int& test3()
{
	int a = 10;
	return a;//��Ҫ���ؾֲ�����������
}
int& test4()
{
	//�����ĵ�����Ϊ��ֵ
	static int a = 10;
	return a;
}
void test5()
{
	//��������
	int a = 10;
	//int& ret = 10;//wrong
	const int& ret = 10;//correct  ����const�󣬱������������޸�  int tmp=10;  int&ret=tmp;
	//ret = 20;//����const�����޸�
}
void show(const int &val)
{
	cout << val<<endl;
	//val = 1000;//����const�����޸���
	cout << val<<endl;
}
int main()
{

	int a = 10;
	show(a);
	//int& ret = test4();
	//cout << ret << endl;
	//cout << ret << endl;
	//test4() = 1000;
	//cout << ret << endl;
	//cout << ret << endl;

	//test1();
	/*int a = 10;
	int b = 20;
	cout << "����ǰ��\n";
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a, b);
	cout << "������\n";
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;*/
	//int &ret = test3();
	//cout << ret << endl;//��һ�ν����ȷ�����������˱���
	//cout << ret << endl;//�ڶ��δ���a���ڴ��Ѿ��ͷ�
	return 0;
}