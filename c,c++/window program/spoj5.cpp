#include<iostream.h>

//using numspace std;

int main()
{
	int t,a[10000],i,r,l,m,q=0;
	cin>>t;

	for(i=0;i<t;++i)
	{
		cin>>a[i];
	}

	for(i=0;i<t;++i)
	{
		for(l=a[i];;++l)
		{
			while(r>0)
			{
				m=l%10;
				q=q*10+m;
				r=l/10;
			}
			if(q==l)
			{
				cout<<l;
				break;
			}

		}



	}


return 0;
}