#include<iostream>
#include<stdio.h>

using namespace std;

int num(int n)
{
int r=0;
while(n>0)
	{
	n=n/10;
	++r;
	}
return r;
}

int main()
{
    int x,y,z,n1,t,n2,n3,i,r1,r2,r3;
    string a,b,c;

scanf("%d",&t);

while(t-->0)
{
    cin>>a>>b>>c;
    for(x=0;x<10;++x)
    {
        for(y=0;y<10;++y)
        {
            for(z=0;z<10;++z)
            {
                i=0;n1=0;n2=0;n3=0;

            while(i<5)
            {
                if(a[i]=='A')
                {
                   n1=10*n1+x;
                }
                else if(a[i]=='B')
                {
                 n1=10*n1+y;
                
                }
                else if(a[i]=='C')
                {
                
                    n1=10*n1+z;
                }
                else
                {

                    n1=10*n1+a[i]-48;
                }
               
                 if(b[i]=='A')
                {
                    n2=10*n2+x;
                }
                else if(b[i]=='B')
                {
                    n2=10*n2+y;
                }
                else if(b[i]=='C')
                {
                    n2=10*n2+z;
                }
                else
                {
                    n2=10*n2+b[i]-48;
                }


                 if(c[i]=='A')
                {
                    n3=10*n3+x;
                }
                else if(c[i]=='B')
                {
                    n3=10*n3+y;
                }
                else if(c[i]=='C')
                {
                    n3=10*n3+z;
                }
                else
                {
                    n3=10*n3+c[i]-48;
                }
                ++i;
            }
		r1=num(n1);
		r2=num(n2);
		r3=num(n3);

            if((n1+n2==n3)&&(r1==5)&&(r2==5)&&(r3==5))
            {
                printf("%d\n",n1);
                printf("%d\n",n2);
                printf("%d\n",n3);
            }
            }
        }
    }
}
return 0;
}
