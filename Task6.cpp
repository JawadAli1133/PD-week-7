#include<iostream>
using namespace std;
void Patient(int days);
main()
{
    int days;
    cout<<"Enter number of days: ";
    cin>>days;
    Patient(days);
}
  void Patient(int days)
  {
      int numP;
      int treatedP=0,untreatedP=0;
      int doctor=7;
      for(int i=1;i<=days;i++)
      {
          cout<<"Enter number of patients on day "<<i<<" : ";
          cin>>numP;      
          if(numP>doctor)
          {
            untreatedP = untreatedP+(numP-doctor);
            treatedP = treatedP+doctor;
          }
          if(numP<=doctor)
          {
             treatedP = treatedP+numP;
          }
          for(int k=1;k<=i;k++)
          { 
             if(k%2==0)
             {
               if(untreatedP>treatedP)
               {         
               doctor=doctor+1;
               }   
             }
          }
      }
      cout<<"Treated: "<<treatedP<<endl;
      cout<<"Untreated: "<<untreatedP<<endl;
  }