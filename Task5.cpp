#include<iostream>
using namespace std;
int Sequence(int range);
main()
{

    int range;
    cout<<"Enter the number of triangle: ";
    cin>>range;
    if(range==1)
    {
      cout<<"1";
    }
    else
    {
      int result = Sequence(range);
      cout<<result;
    }
    
}
   int Sequence(int range)
   {
      int i,j;
      for(i=1;i<=range;i=i)
      {
         for(j=i+1;j<=range;j++)
         {
           i = i+j;
         }      
      }
      return i;
   }