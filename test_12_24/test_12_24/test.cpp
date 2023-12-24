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

//引用
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
	return a;//不要返回局部变量的引用
}
int& test4()
{
	//函数的调用作为左值
	static int a = 10;
	return a;
}
void test5()
{
	//常量引用
	int a = 10;
	//int& ret = 10;//wrong
	const int& ret = 10;//correct  加上const后，编译器将代码修改  int tmp=10;  int&ret=tmp;
	//ret = 20;//加上const不可修改
}
void show(const int &val)
{
	cout << val<<endl;
	//val = 1000;//加上const不可修改了
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
	cout << "交换前：\n";
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a, b);
	cout << "交换后：\n";
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;*/
	//int &ret = test3();
	//cout << ret << endl;//第一次结果正确，编译器做了保留
	//cout << ret << endl;//第二次错误，a的内存已经释放
	return 0;
}