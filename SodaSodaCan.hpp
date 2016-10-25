#ifndef SodaSodaCan_hpp
#define SodaSodaCan_hpp
#include<string>
#include<iostream>
using namespace std;

class SodaCan
{
	string my_Brand;
	int my_Size;
	int my_Contents;

	public :
		SodaCan();
		SodaCan (string brand, int size, int contents);
		int contents ();
		int getContents();
		int getSize ();
		bool isEmpty();
		void pourInSoda(int amount);
		void drink(int amount);
		void setSize(int size);
		void setBrand(string brand);
		string getBrand ();



};

void SodaCan::pourInSoda(int amount)
{
	my_Contents = amount;
}

void SodaCan::setSize(int size)
{
	my_Size = size;
}

void SodaCan::setBrand(string brand)
{
	my_Brand = brand;
}

int SodaCan::getSize()
{
	return my_Size;
}

string SodaCan::getBrand()
{
	return my_Brand;
}


#endif
