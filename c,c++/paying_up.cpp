#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std; 
 
int fn ( int *, int ) ;
 
int main ( )
{
	int t, n, m, a[21], i ;
	scanf ( "%d", &t ) ;
	while ( t-- )
	{
		scanf ( "%d%d", &n, &m ) ;
		if ( n == 0 )
			printf ( "No\n" ) ;
		for ( i = 0 ; i < n ; i++ )
			scanf ( "%d", a+i ) ;
		sort(a,a+n);
		reverse(a,a+n);
 
		a[n] = -1 ;
		if ( fn ( a, m ) )
			printf ( "Yes\n" ) ;
		else
			printf ( "No\n" ) ;
	}
	return 0 ;
}
 
int fn ( int *a, int m )
{
	int i ;
	if ( *a == -1 )
		return 0 ;
	for ( ; *a != -1 ; a++ )
	{
		if ( *a == m )
			return 1 ;
		if ( *a < m )
			return (fn (a+1, m-(*a)) || fn (a+1, m));
	}
	return 0 ;
}
