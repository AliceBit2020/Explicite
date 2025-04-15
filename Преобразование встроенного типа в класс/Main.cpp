#include <iostream>
#include "Bar.h"
#include "Foo.h"



using namespace std;

void TestConvert( Bar br);
void TestConvert(Foo f);
Bar TestConvert();

Bar TestConvert()
{

	Bar var = 99;////  error
	return  99;  ////  error
}

int main()
{
	//int a = 2.5;/////////   implicit
	///int aa = (int)2.5;///   explicit

 
	//////  1.

	//Bar obj1(1); // перетворення типу int в тип Bar за рахунок конструктора Bar( int data);
	//
	/////TestConvert(8);///  not explicite, implicite


	//TestConvert(Bar(8));/// explicit Bar( int data)   не пропустить, очікується об'єкт Bar
	//TestConvert(Foo(8));


	///////2. explicit змушує використовувати більш безпечні явні перетворення

	Bar obj2 = Bar((int)2.5);// explicit Bar( int data)   не пропустить, очікується об'єкт Bar

	Bar obj3 = Bar(2.5);

	



    return 0;
}

void TestConvert( Bar br)
{
	br.Show();
}

Bar TestConvert()
{

	////return 99;  ///  implite
	return Bar(99); /// explicit Bar( int data)   не пропустить,очікується об'єкт Bar
}

void TestConvert(Foo f)
{
	cout << "TestConvert( Foo br)" << endl;
	f.Show();


}

//#include<iostream>
//#include<time.h>
//using namespace std;
//
//class Point
//{
//	//private:
//	int x;
//	int y;/////////////++++++++++++++++++++coord z
//	int z;
//	char* str = new  char[10] {"JJJ"};
//public:
//	
//	Point()
//	{
//		cout << "Construct\n";
//		x = y = z = 0;
//	}
//	Point(int x1)
//	{
//
//		x = x1;
//		y = x;
//		z = x;
//	}
//	Point(int x1, int y1)
//	{
//		x = x1;
//		y = y1;
//		z = 0;
//	}
//
//	Point(int x1, int y1, int z1) : Point(x1, y1)
//	{
//		z = z1;
//
//	}
//
//	void Output()
//	{
//		cout << "X: " << x << "\tY: " << y << endl;
//	}
//
//	//////  методы аксессоры
//
//	int GetX()const  // инспекторы
//	{
//		// x = -100; // ошибка 
//		return x;
//	}
//
//	int GetY()const
//	{
//		return y;
//	}
//
//
//	const char* const GetStr()
//	{
//		return str;
//	}
//
//
//	/////  Модификаторы 
//	void SetX(int X)
//	{
//		// X <100
//		if (X > 100)
//		{
//			cout << "Error\n";
//			x = 0;
//		}
//		else
//		{
//			x = X;
//		}
//	}
//};
///*
//Синтаксис делегирования:
//Имя_класса ( параметры (формальные) ) : имя_класса ( формальная передача параметров )
//{
//тело;
//};
//
//*/
//
//void main()
//{
//	Point obj1(10, 20);
//	cout << obj1.GetX() << endl;
//
//	obj1.SetX(1000);
//	cout << obj1.GetX() << endl;
//	obj1.SetX(25);
//	cout << obj1.GetX() << endl;
//
//	const char* const str = obj1.GetStr();
//	cout << str << endl;
//	delete[] str;
//	cout << obj1.GetStr() << endl;
//
//	system("pause");
//}