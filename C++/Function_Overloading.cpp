#include<iostream>
using namespace std;
class Sort
  {
    public:
    void sort(int list[])
    {
      
      int i,j,min;
      for(i = 0; i<10; i++)
      {
        for(j = 0; j<i; j++)
        {
          if(list[j]>list[j+1])
          {
          list[j] = list[j]+list[j+1];
          list[j+1] = list[j]-list[j+1];
          list[j] = list[j]-list[j+1];
      }
        }
      }
      //display
      cout<<"INT SORTED LIST"<<endl;
      for(int i = 0; i<10 ; i++)
      {
        cout<<list[i]<<endl;
      }
      cout<<endl;

    }
    void sort(double list[])
    {
      
    int i,j,min;
      for(i = 0; i<10; i++)
      {
        for(j = 0; j<i; j++)
        {
          if(list[j]>list[j+1])
          {
          list[j] = list[j]+list[j+1];
          list[j+1] = list[j]-list[j+1];
          list[j] = list[j]-list[j+1];
      }
        }
      }
      //display
      cout<<"DOUBLE SORTED LIST"<<endl;
      for(int i = 0; i<10 ; i++)
      {
        cout<<list[i]<<endl;
      }
      cout<<endl;

    }
    void sort(long double list[])
    {
     
        int i,j,min;
      for(i = 0; i<10; i++)
      {
        for(j = 0; j<i; j++)
        {
          if(list[j]>list[j+1])
          {
          list[j] = list[j]+list[j+1];
          list[j+1] = list[j]-list[j+1];
          list[j] = list[j]-list[j+1];
      }
        }
      }
      //display
      cout<<"LONG DOUBLE SORTED LIST"<<endl;
      for(int i = 0; i<10 ; i++)
      {
        cout<<list[i]<<endl;
      }
      cout<<endl;

    }
  };

int main()
{
  int list1[10] = {9,8,7,6,5,4,3,2,1,0};
  double list2[10] = {9,8,7,6,5,4,3,2,1,0};
  long double list3[10] = {9,8,7,6,5,4,3,2,1,0};

  Sort fxn;
  fxn.sort(list1);
  fxn.sort(list2);
  fxn.sort(list3);
}

