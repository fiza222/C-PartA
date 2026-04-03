
#include<iostream>
      using namespace std;

       int main(){

       int rate;
       int principle ;
        int time;
        int simple_interest;

        cout<<"enter the principle : ";
        cin>>principle;

         cout<<"enter the time : ";
        cin>>time;

         cout<<"enter the rate : ";
        cin>>rate;

        simple_interest=(principle*rate*time)/100;

        cout<<simple_interest;

         return 0;


       }
