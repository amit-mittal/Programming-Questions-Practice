#include<iostream.h>
main()
{
	int i,s;
	s=0;
	for(i=0;i<334;++i)
	{
		
		s=s+3*i;
	}

	for(i=0;i<200;++i)
	{
		
		s=s+5*i;
	}

	for(i=0;i<67;++i)
	{
		s=s-15*i;
	}


	cout<<s;
}