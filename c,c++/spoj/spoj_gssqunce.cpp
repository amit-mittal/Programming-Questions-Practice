#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;

int main()
{
	int test,n,a,seq;
	
	scanf("%d",&test);
	
	while(test--)
	{
		seq=1;
		map<int,int> mymap;
		map<int,int>::iterator it;
		
		scanf("%d",&n);
		
		if(n==1)
			seq=0;
		
		while(n--)
		{
			scanf("%d",&a);
			
			if(seq==1)
			{
				mymap[a]++;
			
				if(mymap[a]>2)
					seq=0;
			}
		}
		
		if(seq==0)
			printf("NO\n");
		else
			printf("YES\n");
			
		/*for ( it=mymap.begin() ; it != mymap.end(); it++ )
    cout << (*it).first << " => " << (*it).second << endl;
			*/
		mymap.clear();
	}
	
	return 0;
}
