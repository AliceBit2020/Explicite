#include "Bar.h"

#include <iostream>

using namespace std;

Bar::Bar(const int data) : m_data(data)
{
	cout << "Bar Construct explicite\n\n ";
	
}

void Bar::Show() 
{
    cout << "m_data = " << m_data << endl;
}