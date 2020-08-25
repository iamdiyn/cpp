#include <iostream>
using namespace std;

int main()
{
  float weight,a;
  int no;
  


  cout<<"enter weight\n";
  cin>>weight;

  cout<<"enter planet number\n";
  cin>>no;

  switch(no)
  {
    case 1:
      a=0.38*weight;
      cout<<"weight="<<a;
      break;
    case 2:
      a=0.91*weight;
      cout<<"weight="<<a;
      break;
    case 3:
      a=0.38*weight;
      cout<<"weight="<<a;
      break;
    case 4:
      a=2.34*weight;
      cout<<"weight="<<a;
      break;
    case 5:
      a=1.36*weight;
      cout<<"weight="<<a;
      break;
    case 6:
      a=0.92*weight;
      cout<<"weight="<<a;
      break;
    case 7:
      a=1.19*weight;
      cout<<"weight="<<a;
      break;
    default:
      cout<<"enter correct input";
      break;






  }


}
  
  
  
  
  
  
  
