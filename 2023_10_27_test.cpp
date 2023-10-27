#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int Add(int x, int y)
{
	return x + y;
	#		
}
int arr[5][5];
int main()
{
	//int arr[] = { 1,2,3 };
	//cout << arr << endl;
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	//{
	//	cout << arr[i]<<" ";
	//}
	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			cout << arr[i][j] <<" ";
		}
		cout << '\n';
	}
	cout << sizeof(arr)<<endl;
	cout << arr << endl;//以下三个地址相同
	cout << arr[0] << endl;
	cout << &arr[0][0] << endl;
	//cout << endl;//会换行
	cout << Add(2, 3) << endl;
	int a=0, b=0;
	int* p = &a;
	cout << "指针大小：" << sizeof(p) << endl;//32位，4个字节，64位，8个字节
	cout << Add(a, b) << endl;
	return 0;
} 