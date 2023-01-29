#include<iostream>
using namespace std;
void Cargo(int range);
main()
{
    int range;
    cout<<"Enter range: ";
    cin>>range;
    Cargo(range);
}

   void Cargo(int range)
   {
      float tonn,sumT=0,sum1=0,sum2=0,sum3=0;
      float Average;
      float Perc1,Perc2,Perc3;
      for(int i=1;i<=range;i++)
      {
         cout<<"Enter number of tonns for cargo "<<i<<" : ";
         cin>>tonn;
         sumT = sumT+tonn;
         if(tonn>=1 && tonn<=3)
         {
             sum1 = sum1+tonn;
         }
         if(tonn>3 && tonn<=11)
         {
             sum2 = sum2+tonn;
         }
         if(tonn>11)
         {
             sum3 = sum3+tonn;
         }
      }
      Average = ((sum1*200)+(sum2*175)+(sum3*120))/sumT;
      Perc1 = (sum1/sumT)*100;
      Perc2 = (sum2/sumT)*100;
      Perc3 = (sum3/sumT)*100;
      cout<<"Average price per tonn is: "<<Average<<endl;
      cout<<"Percentage by minibus is: "<<Perc1<<"%"<<endl;
      cout<<"Percentage by truck is: "<<Perc2<<"%"<<endl;
      cout<<"Percentage by train is: "<<Perc3<<"%"<<endl;
   }