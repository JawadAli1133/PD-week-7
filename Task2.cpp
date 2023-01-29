#include<iostream>
using namespace std;
void Upper(int row);
void Lower(int row);
main()
{
     
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    Upper(row);
    Lower(row);
}
      void Upper(int row)
      {
        for(int i=row;i>0;i++)
        {
            for(int j=1;j<i;j++)
            {
              cout<<"*";
            }
            cout<<endl;

       }
      }
    void Lower(int row)
    {
     for(int i=row;i>0;i--)
     {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
     }

    }
    