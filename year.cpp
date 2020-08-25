#include <iostream>
using namespace std;

int main() 
{
  int year,temp,count;
  cout<<"enter year:";
  cin>>year;
  temp=year;
  count=0;
  while(temp!=0){
    count++;
    temp/=10;

  }
  if (count==4){
    cout<<"\nyear:"<<year;

  }
  else{
    cout<<"plese enter a valid 4 digit year\n";

  }
  if(year%4==0){
    cout<<"\nleap year";

  }
  else if (year%100==0&&year%400!=0){
    cout<<"\nnot leap year";

  }
  else if(year%400==0){
    cout<<"\nleap year";

  }
  else{
    cout<<"\nnot leap year";
  }
  
}
