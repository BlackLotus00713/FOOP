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
	MyClass() = default; //конструктор по умолчанию принудительный
	MyClass() :MyClass(4) {};


	MyClass(int e) : e(e), ref(ref) // если есть поля в виде ссылок
	{

	}

	int f0() const // конст не будет менять поля класса. Страховка для себя что ты не попортишь
	{
		return 1;
	}

	int f2() 
	{
		return 2;
	}

	friend void M00(const MyClass &a) // конст позволяет работать только с константными методом  пример
	{
		a.e;
		a.f0();
	}

	
	MyClass& operator= (const MyClass& a);// = delete как вариант

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

	// __int8   как чар
	//int a = 32;
	//static_cast<__int8>(a); // конвертация

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