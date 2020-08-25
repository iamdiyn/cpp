#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int j;
	int n=1;
	int add=0;
	int mul=1;
	
	vector<int>array={2,1,2,3,5,6,};

	for(int i=0;i<array.size();i++)
	{
		j=array[i];
		if(j==2*n)
		{
			add+=array[i];

		}
		else
		{
			mul=array[i]*mul;

		}

	}
	cout<<"sum:"<<add<<"\n";
	cout<<"multi:"<<mul<<"\n";
	
}
