#include <iostream>
#include <Windows.h>
#include <memory>
#include "LinkedList.hpp"



//constexpr
// __forceinline 

/*

class MyClass
{
public:
	MyClass() = default; //����������� �� ��������� ��������������
	MyClass() :MyClass(4) {};


	MyClass(int e) : e(e), ref(ref) // ���� ���� ���� � ���� ������
	{

	}

	int f0() const // ����� �� ����� ������ ���� ������. ��������� ��� ���� ��� �� �� ���������
	{
		return 1;
	}

	int f2() 
	{
		return 2;
	}

	friend void M00(const MyClass &a) // ����� ��������� �������� ������ � ������������ �������  ������
	{
		a.e;
		a.f0();
	}

	
	MyClass& operator= (const MyClass& a);// = delete ��� �������

	friend MyClass operator +(const MyClass& a, const MyClass& b);

	

	~MyClass()
	{

	}
	float one;

private:
	int e;
	int& ref;
};

*/
//-----------------------------------------------------







int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// __int8   ��� ���
	//int a = 32;
	//static_cast<__int8>(a); // �����������

	//auto newObj = std::make_unique<MyClass>();
	//newObj->one;


	LinkedList<int> myCont;
	myCont.push_back(3);
	myCont.push_back(4);
	myCont.push_back(6);
	int a = myCont.at(1);
	std::cout << a;
	
	return 0;
}