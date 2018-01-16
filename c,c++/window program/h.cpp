#include<iostream.h>
void main()
{
	int i,s,a[5],b[5];
	s=0;
	for(i=0;i<5;++i)
		{
		cin>>a[i];
		}

	for(i=0;i<5;++i)
		{
		cin>>b[i];
		}


	for(i=0;i<5;++i)
		{
		cout<<a[i];
		}

	for(i=0;i<5;++i)
		{
		cout<<b[i];
		}

	for(i=0;i<5;++i)
		{
		if(a[i]==b[i])
			--s;
		else
		{
			++s;
		break;
		}
		}

	if(s>0)
		cout<<"not same";
	else
		cout<<"same";

	
}