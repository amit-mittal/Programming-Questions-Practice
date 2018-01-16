#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
int i,a[30],temp;

cin>>i;
int q=i;
int l=0;
int s1=0,s2=0;

while(q>0)
	{
	a[l]=q%10;
	
	s1=s1+a[l];	
	++l;
	q=q/10;
	
	}

for(int k=0; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(a[j] < a[j-1])
			{
				//Swaps the values
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
			
		}
	}



q=2*i;
int z=l;
while(q>0)
	{
	a[l]=q%10;
	s2=s2+a[l];
	++l;
	q=q/10;
	}

for(int k=z; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(a[j] < a[j-1])
			{
				//Swaps the values
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
			
		}
	}


/*if(s1==s2)
	cout<<"same";
else
	cout<<"not same";

*/
return 0;
}
