#include <iostream>
using namespace std;


// Budget Calc // 

int main ()
{

  float rent;
  float phone;
  float gas;
  float car_insurance;
  float gym;
  float food;
  float credit_card;
  float spotify;
  float lightroom;
  float sum;
  float sum_divide;
  

  cout<<"Enter rent amount: "<<endl;
  cin>>rent;
  cout<<"Enter phone amount: "<<endl;
  cin>>phone;
  cout<<"Enter gas amount: "<<endl;
  cin>>gas;
  cout<<"Enter car insurance amount: "<<endl;
  cin>>car_insurance;
  cout<<"Enter gym amount: "<<endl;
  cin>>gym;
  cout<<"Enter food amount: "<<endl;
  cin>>food;
  cout<<"Enter credit card amount: "<<endl;
  cin>>credit_card;
  cout<<"Enter spotify amount: "<<endl;
  cin>>spotify;
  cout<<"Enter lightroom amount: "<<endl;
  cin>>lightroom;
  sum = rent + phone + gas + car_insurance + gym + food + credit_card + spotify + lightroom;

  cout<<"Total bills are: "<<sum<<endl;

  sum_divide = sum / 4;
  cout<< "weekly amount bills: "<< sum_divide;
  








 
    






  return 0;
}