#include<iostream>
#include<string>
using namespace std;
int main() {
	int eggtom=0;
	int totaltom=0;
	int eggjian=0;
	int totaljian=0;
	int eggtun=0;
	int totaltun=0;
	int total=0;
	int i=0;
	do{
	cout<<"--please choose menu--"<<endl;
	cout<<"eggtom = 5 Baht"<<endl;
	cout<<"eggjian= 10 Baht"<<endl;
	cout<<"eggtun = 15 baht"<<endl;
	
	cout<<"Number of eggtom to buy:";
	cin>>eggtom;
	if(eggtom>0){
     totaltom=eggtom*5;
     cout<<"you must pay eggtom "<<totaltom<<" Baht "<<endl;
     total=total+totaltom;
	}
	else {
		totaltom=eggtom*0;
		total=total+totaltom;	
	}
	cout<<"Number of eggjian to buy:";
	cin>>eggjian;
	if(eggjian>0){
     totaljian=eggjian*10;
     cout<<"you must pay eggjian "<<totaljian<<" Baht "<<endl;
     total=total+totaljian;
	}
	else {
		totaljian=eggjian*0;
		total=total+totaljian;	
	}
	cout<<"Number of eggjian to buy:";
	cin>>eggtun;
	if(eggtun>0){
     totaltun=eggtun*15;
     cout<<"you must pay eggjian "<<totaltun<<" Baht "<<endl;
     total=total+totaltun;
	}
	else {
		totaljian=eggtun*0;
		total=total+totaltun;	
	}
	total=totaltom+totaljian+totaltun;
	cout<<"you total pay : "<<total<<" Baht "<<endl;
	cout<<"do you want to try again pass 1 to loop :";
	cin>>i;
	}while(i==1);
	system("pause");
	return 0;
}

