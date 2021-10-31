#include<iostream>
using namespace std;
class abs
{
  public:
  int P;
  virtual int price() = 0;
  virtual int processor() = 0;
};
class nokia: public abs
{
  public:

  int processor()
  {
    cout<<"\nNokia 5.3 =>"<<endl;
    cout<<"Processor : Qualcomm Snapdragon 665"<<endl;
    return true;
  }
  int price()
  {
    P = 12999;
    cout<<"Price=";
    return P;
  }
};
class apple: public abs
{
  public:
  int processor()
  {
    cout<<"\n\n\nApple iPhone 11 Pro =>"<<endl;
    cout<<"Processor : hexacore Apple A13 Bionic Processor"<<endl;
    return true;
  }
  int price()
  {
    P = 89999;
    cout<<"Price=";
    return P;
  }
};
int main()
{
  nokia n1;
  apple a1;
  
  cout<<n1.processor()<<endl;
  cout<<n1.price()<<endl;
  
  cout<<a1.processor()<<endl;
  cout<<a1.price()<<endl;

  if(a1.P > n1.P)
  {
    cout<<"\n\n\nApple is expensive"<<endl;
  }
  else
  {
    cout<<"\n\n\nNokia is expensive"<<endl;
  }
  cout<<"Apple processor is better than Nokia"<<endl;
}
