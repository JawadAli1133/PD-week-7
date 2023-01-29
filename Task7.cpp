#include<iostream>
using namespace std;
void Percentage(int range);
main()
{
    int range;
    cout<<"Enter range of number: ";
    cin>>range;
    Percentage(range);
}

  void Percentage(int range)
  {
    int num;
    float p1,p2,p3; 
    float count1=0,count2=0,count3=0;
    for(int i=1;i<=range;i++)
    {
        cout<<"Enter number "<<i<<" :";
        cin>>num;
        if(num%2==0)
        {
            count1++;
        }
        if(num%3==0)
        {
            count2++;
        }
        if(num%4==0)
        {
            count3++;
        }
    }
    p1 = (count1/range)*100;
    p2 = (count2/range)*100;
    p3 = (count3/range)*100;
    cout<<"Percentage of 2 is: "<<p1<<endl;
    cout<<"Percentage of 3 is: "<<p2<<endl;
    cout<<"Percentage of 4 is: "<<p3<<endl;
  }