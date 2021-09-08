#include <iostream>
using namespace std;
int main() {
	int sayac1=0,sayac2=0;
	
	for(int i=500;i<=600;i++)
	{
		sayac1=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sayac1++;
				break; 
			}
		}
		if(sayac1==0)
		{
			 cout<<i<<" ";
			sayac2++;
		}
	}
 cout;
}
