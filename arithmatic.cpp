#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()

{  //formatting output

   float num1, num2;
   cout<<setw(20);
   cout<< "Enter 2 numbers :";
   cin>> num1>> num2;
   cout<<setw(20);
   cout<< "Enter your result :"<< num1 << num2 << endl ;
   cout<< showpoint;
   cout<<fixed;
   cout<<setprecision(2);
   cout<<setw(20);
   float sum=num1+num2;
   cout<< "summation is :"<<sum<<endl;
   cout<<setw(20);
   float sub=num1-num2;
   cout<< "subtraction is :"<<sub<<endl;
   cout<<setw(20);
   float mul=num1*num2;
   cout<< "multiplication is :"<<mul<<endl;
   cout<<setw(20);
   double div=(float) num1/num2;//type casting
   cout<< "division is :"<<div<<endl;

   //int rem=num1%num2;
   //cout<< "remainder is :"<<rem;

    getch();
}

