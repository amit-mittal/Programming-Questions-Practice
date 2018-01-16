#include<iostream>
#include<cmath>

using namespace std;

int main()
{
unsigned long long int i,s,f,j,sum,f1=0,i1,c,loop;

for(i=2;i<1000000;++i)
	{
	s=0;f=0;c=0;
		
	sum=i;
	
	while((sum<1000000)&&(f<50))
		{s=sum;sum=1;
		/*for(j=1;j<=(int)s/2;++j)
			{
			if(s%j==0)
				sum=sum+j;
			
			}*/


		loop=(int)sqrt(s);

		for (j=2;j<=loop;j++)
		{
			if(s%j == 0)
			{
			sum+=j+(s/j);
			}

		}

			/*if(loop*loop==s)
			{
//			numOfDiv--;
			sum-=loop;
			}*/


		if(sum==i)
				{
				++c;
				//cout<<i<<endl;
				break;
				}
		++f;
		}
	if((f>f1)&&(c>0))
		{
		f1=f;
		i1=i;
		cout<<i1<<" "<<f1<<endl;
		}
	//cout<<i<<endl;
	}
cout<<i1;

return 0;
}
