#include<iostream>
using namespace std;
int main() {
float i = 0;	
float watt,n,hour,m;
float unit,f,unitAll,Electricitybill;
float b,a,water,unitW,waterF;
float total=0,totalpay=0;
cout <<"======================================================================Program For Calculate Electricity charge/n======================================================================\n\n";
while (i==0){
cout<<"Power(watt) : ";
cin >> watt;
cout<< "Number of Electric appliance : ";
cin>>n;
cout<<"Hour of using in one day :";
cin>>hour;
unit=(watt*n*hour)/1000;
cout<< "Unit in one day : ";
cout<<unit<<endl;
cout<< "Days for month : ";
cin>>m;
unitAll=(unit*m);
cout<< "Unit in one month : ";
cout<<unitAll<<endl;
cout<<"Float time : ";
cin>>f;
Electricitybill=f*unitAll;
cout<<"you must pay Electricity bill = "<<Electricitybill<< "Baht/month"<<endl;
total=total+Electricitybill;
cout<<"enter 0 for run again."<<endl; 	
cin>>i;
}
cout<<"total = "<<total<<" Baht/month"<<endl; 
cout <<"======================================================================Program For Water calculation /n======================================================================\n\n";
cout<<"Before use water : ";
cin>>b;
cout<<"After use water : ";
cin>>a;
water=a-b;
cout<<"You have used water = "<<water<<" cubic millimetre"<<endl;
cout<<"Water charge per unit : ";
cin>>unitW;
waterF=water*unitW;
cout<<"you must pay Water bill = "<<waterF<<" Baht"<<endl;
totalpay=total+waterF;
cout<<"======================================================================Items to be paid/n======================================================================\n\n";
cout<<"you must pay Electricity bill = "<<total<< " Baht/month"<<endl;
cout<<"you must pay Water bill = "<<waterF<<" Baht"<<endl;
cout<<"Total amount due ="<<totalpay<<" Baht"<<endl;
cout <<"======================================================================Thank you for using the program see you later/n======================================================================\n\n";
 system("pause");
 return 0;
}
