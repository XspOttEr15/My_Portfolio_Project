#include<iostream>
using namespace std;

int main() {
	char ask[] = "Enter your name : ";
	char name [100] ;
	char ans[] = "Student name : ";
 	char m,l,d,a,g;
	
	cout <<ask;
	cin >>name;
	
	cout <<"Subject"<<endl;
	cout<<"Do you want to register Math (y/n) "<<endl;
	cin >>m;
	cout<<"Do you want to register LNG (y/n)"<<endl;
	cin >>l;
	cout<<"Do you want to register Design (y/n)"<<endl;
	cin >>d;
	cout<<"Do you want to register Drawing (y/n)"<<endl;
	cin >>a;
	cout<<"Do you want to register Gen (y/n)"<<endl;
	cin >>g;
	cout <<endl;
	
	cout <<ans <<name<<endl;
	cout <<"Math : "<<m<<endl;
	cout <<"LNG : "<<l<<endl;
	cout <<"Design : "<<d<<endl;
	cout <<"Drawing : "<<a<<endl;
	cout <<"GEN : "<<g<<endl;
	
	 system ("pause");
	 return 0;
}
