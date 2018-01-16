#include<iostream.h>
#include<math.h>


int main()
{
float a,b,c;

for(a=1;a<800;++a)
	{
	for(b=1;b<800;++b)
		{
		c=sqrt(pow(a,2)+pow(b,2));	
			if(a+b+c==1000)
			{
				cout<<a<<','<<b<<','<<c<<endl;
				
			}
		}
	}

return 0;
}