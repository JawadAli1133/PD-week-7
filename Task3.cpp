#include<iostream>
using namespace std;
void Shape1(int range);
void Shape2(int range);
main()
{
    int range;
    cout<<"Enter number of rows: ";
    cin>>range;
    Shape1(range);
    Shape2(range);  
}
   void Shape1(int range)
   {
       for(int i=1;i<=range/2;i++)
       {
             int j,k;
             for( j=range/2;j>=i;j--)
             {
              cout<<" ";
             } 
             for(k=1;k<=j;k++)
             {
                 cout<<"*";
             }
             cout<<endl;   
       }
   }
   void Shape2(int range)
   {
       for(int i=1;i<=range/2;i++)
       {
             int j,k;
             for( j=1;j<=i;j++)
             {
              cout<<" ";
             } 
             for(k=range/2;k>=j;k--)
             {
                 cout<<"*";
             }
             cout<<endl;   
       }
   }