#include<iostream>
using namespace std;
main()
{
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;

    for(int i=row;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }


}