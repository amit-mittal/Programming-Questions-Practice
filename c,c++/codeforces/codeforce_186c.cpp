#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#define MOD 1000000007

using namespace std;

long long int func(int base,int exp)
{
	if(exp==1)
		return base;
	else if(exp==0)
		return 1;
	else
	{
		long long int val;
		if(exp&1)
		{
			val=func(base,(exp-1)/2)%MOD;
			val=(val*val)%MOD;
			val=(base*val)%MOD;
		}
		else
		{
			val=func(base,exp/2)%MOD;
			val=(val*val)%MOD;
		}
		return val;
	}
}

int main()
{
	long long int n,val;
	
	cin>>n;
	
	val=func(2,n-1)*(func(2,n)+1);
	val=val%MOD;
	cout<<val<<endl;
	
	return 0;
}

/*
#include <iostream>
#include <math.h>
#include <algorithm>
typedef unsigned long long lli; 
using namespace std;
const lli mod=1000000007;   

lli step(lli ch,lli st)
{
    if (st==0) return 1;
    if (st==1) return ch%mod;
    else
    {
        lli r=st%2==0? 1: ch;
        return ( step((ch*ch)%mod,st/2)*r)%mod;
    }
}
int main()
{
    lli n;
    cin>>n;
    if (n==0) cout<<"1"; else
    cout<<(step(2,2*n-1)+step(2,n-1))%mod;
    return 0;
}
*/
