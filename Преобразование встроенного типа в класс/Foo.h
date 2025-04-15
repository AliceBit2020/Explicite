#pragma once
#include <iostream>

using namespace std;

class Foo
{
	int a;

public:

	explicit Foo(int aa) { a = aa; }
	void Show() { cout << "Foo a= " << a << endl; }


};
