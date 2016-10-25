#include <iostream>
#include<string>
#include "SodaSodaCan.hpp"
using namespace std ;

string brand;
int size ;
int contents ;
int option ;
SodaCan can ;

int main()
{
	cout<<"\t Welcome to Bangtan's' Vending Machine!" << endl << endl;

	cout<<"Please place your order and DO NOT put any spaces in brand name!!!";

	cout << "Please choose one of the option" << endl;
			cout << "1. Buy a drink" << endl;
			cout << "2. Exit" << endl;
			cout << "Your option: ";
			cin >> option;

	if(option == 1)
	{
		//Brand
		cout << "Type the soda type: ";
		cin >> brand;
		cout<<endl ;
		can.setBrand(brand);

		//Content
		cout << "Content? : ";
		cin >> contents;
		cout << endl;
		can.pourInSoda(contents);

		//Size
		cout << "Size" << endl;
		cout << "1. Small"<< endl;
		cout << "2. Large"<< endl;
		cout << "Your option: ";
		cin >> size;
		can.setSize(size);

		cout<<endl;

		// Final order
		cout << "Your order is";
		cout << can.getContents() << " mL of " << can.getBrand();
	}

	return 0;
}
