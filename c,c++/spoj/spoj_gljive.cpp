#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
#include<numeric>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
	int i,a[10],n,sum=0,diff;

	for(i=0;i<10;++i)
		cin>>a[i];
		
	for(i=0;i<10;++i)
	{
		sum+=a[i];
		if(sum>100)
			break;
	}
	
	sum-=a[i];
	diff=100-sum;
	
	if(diff>=(sum+a[i]-100))
		printf("%d\n",sum+a[i]);
	else
		printf("%d\n",sum);
		
	return 0;
}

/*
#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int v[10] ;
int ret[10] , val ;
vector<int> diff_p , diff_n;
int main()
	{
		memset ( ret , 0 , sizeof ret );
		diff_p.clear() , diff_n.clear();

		for(int i=0;i<10;i++) scanf("%d",&v[i]);
		for(int i=0 ;i <10 ; i++) ret[i] = v[i];

		for(int i = 1 ; i < 10 ; i++) ret[i] += ret[i-1];
		for(int i=0 ; i<10 ; i++) if ( ret[i] < 100 ) diff_n.push_back( ret[i] - 100 ); else diff_p.push_back( ret[i] - 100 );
		
		sort( diff_n.rbegin() , diff_n.rend() );
		sort( diff_p.begin() , diff_p.end());
		if( diff_p.empty() ) cout << 100 + diff_n[0] <<endl;
		else if ( diff_n.empty() ) cout << 100 + diff_p[0] <<endl;
		else if ( diff_p[0] <= abs ( diff_n[0] ) ) cout<< 100 + diff_p[0] <<endl;
		else cout<<100 +  diff_n[0] <<endl;
		
	}

*/
