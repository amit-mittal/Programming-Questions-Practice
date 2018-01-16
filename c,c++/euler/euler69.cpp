#include<iostream>

using namespace std;

int main()
{
unsigned long long int i,j,f,k;
float ratio,f1=0,f2=0,ratio1=0;

for(i=2;i<1000001;++i)
	{
	f1=0;
	for(j=2;j<i;++j)
		{
		f=0;
		for(k=j;k>1;--k)
			{
			if((i%k==0)&&(j%k==0))
				{
				++f;
				break;
				}
			}
		if(f==0)
			{
			++f1;
			
			}
		}
	++f1;
//	if(f>0)
		ratio=i/f1;
	cout<<i<<" "<<f1<<" "<<ratio<<endl;
	if(ratio>ratio1)
		{
		ratio1=ratio;
		f2=i;
		}
	}

cout<<f2<<" "<<ratio1;//algorithm is correct but check this link as it is very slow
//http://www.mathblog.dk/2011/project-euler-69-find-the-value-of-n-%E2%89%A4-1000000-for-which-n%CF%86n-is-a-maximum/

return 0;
}
