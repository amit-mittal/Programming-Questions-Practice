#include<iostream>

using namespace std;

int two(unsigned long long int i)
{

unsigned long long int q,l,k,j,temp,b[10],m,s=0;

q=i;l=0;


	while(q>0)
	{
		b[l]=q%10;	
		++l;
		q=q/10;
	}


	for(int k=0; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(b[j] < b[j-1])
			{
				//Swaps the values
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
			
		}
	}

for(m=0;m<l;++m)
	s=10*s+b[m];
//cout<<s<<endl;
return s;
}

int three(unsigned long long int i)
{

unsigned long long int q,l,k,j,temp,b[10],m,s=0;

q=i;l=0;


	while(q>0)
	{
		b[l]=q%10;	
		++l;
		q=q/10;
	}


	for(int k=0; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(b[j] < b[j-1])
			{
				//Swaps the values
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
			
		}
	}

for(m=0;m<l;++m)
	s=10*s+b[m];
//cout<<s<<endl;
return s;
}

int four(unsigned long long int i)
{

unsigned long long int q,l,k,j,temp,b[10],m,s=0;

q=i;l=0;


	while(q>0)
	{
		b[l]=q%10;	
		++l;
		q=q/10;
	}


	for(int k=0; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(b[j] < b[j-1])
			{
				//Swaps the values
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
			
		}
	}

for(m=0;m<l;++m)
	s=10*s+b[m];
//cout<<s<<endl;
return s;
}

int five(unsigned long long int i)
{

unsigned long long int q,l,k,j,temp,b[10],m,s=0;

q=i;l=0;


	while(q>0)
	{
		b[l]=q%10;	
		++l;
		q=q/10;
	}


	for(int k=0; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(b[j] < b[j-1])
			{
				//Swaps the values
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
			
		}
	}

for(m=0;m<l;++m)
	s=10*s+b[m];
//cout<<s<<endl;
return s;
}

int six(unsigned long long int i)
{

unsigned long long int q,l,k,j,temp,b[10],m,s=0;

q=i;l=0;


	while(q>0)
	{
		b[l]=q%10;	
		++l;
		q=q/10;
	}


	for(int k=0; k<l ; ++k)  //to sort the array
	{
		for(int j = k + 1; j > 0; --j)
		{
			if(b[j] < b[j-1])
			{
				//Swaps the values
				temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
			
		}
	}

for(m=0;m<l;++m)
	s=10*s+b[m];
//cout<<s<<endl;
return s;
}

int main()
{
unsigned long long int i,q,l,k,j,temp,a[10],m,s=0,n,f=0,n1,n2,n3,n4,n5,n6;


for(i=125870;;++i)
{
q=i;l=0;s=0;


	while(q>0)
	{
		a[l]=q%10;	
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


for(m=0;m<l;++m)
	s=10*s+a[m];
//cout<<s<<endl;
n2=2*i;
n2=two(n2);

n3=3*i;
n3=three(n3);

n4=4*i;
n4=four(n4);

n5=5*i;
n5=five(n5);

n6=6*i;
n6=six(n6);

if((n2==s)&&(n3==s)&&(n4==s)&&(n5==s)&&(n6==s))
	{cout<<i;break;}

}

return 0;
}
