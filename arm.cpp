#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    /*int marks[5];
    marks[0]=55;
    marks[1]=45;
    marks[2]=35;
    marks[3]=25;
    marks[4]=85;
    cout<<marks[0]<<" ";
    cout<<marks[1]<<" ";
    cout<<marks[2]<<" ";
    cout<<marks[3]<<" ";
    cout<<marks[4]<<" ";
    int marks[5]={85,45,35,25,55};

     cout<<marks[0]<<" ";
    cout<<marks[1]<<" ";
    cout<<marks[2]<<" ";
    cout<<marks[3]<<" ";
    cout<<marks[4]<<" ";

      int marks[5]={85,45,35,25,55};
      for(int i=0;i<5;i++)
      {
          cout<<marks [i] <<" ";
      }
      int marks[5];
    cin>>marks[0];
    cin>>marks[1];
    cin>>marks[2];
    cin>>marks[3];
    cin>>marks[4];
    cout<<"marks are:";
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }*/
    int marks[5];
    //input
    for(int i=0;i<=4;i++)
    {
        cout<<"marks for student:"<<i<<"=";
      cin>>marks[i];
    }
    //output
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }
    getch();
}

