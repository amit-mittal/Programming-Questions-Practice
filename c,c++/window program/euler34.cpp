#include<iostream.h>


int fac(int f)
{

	int p=1,i;
	if(f>0)
	{
	for(i=f;i>0;--i)
		{
		p=p*i;
		}
	return p;
	}
	else
		return 0;
//	cout<<p<<endl;
	

}

int main()
{

	int f,a,b,c,a1,b1,c1,s1=0,s;


//	cin>>a>>b>>c;
	for(a=0;a<6;++a)
	{
		a1=fac(a);
		f=100*a;
		s=a1;

		for(b=0;b<6;++b)
		{
			b1=fac(b);
			f=10*b+f;
			s=s+b1;

			for(c=0;c<6;++c)
			{
				
				
				c1=fac(c);
				f=f+c;
				s=s+c1;

				if(f==s)
				
					s1=s1+s;
//					cout<<s1<<endl;
				

			}

		}
	}
cout<<s1;


return 0;
}