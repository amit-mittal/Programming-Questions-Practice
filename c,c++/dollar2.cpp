#include<iostream>
#include<cstdio>
#include<algorithm>
#include<numeric>

using namespace std;

void sort(int s[][3],int n)
{
	int i,j;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(s[i][0]>s[j][0])
			{
				swap(s[i][0],s[j][0]);
				swap(s[i][1],s[j][1]);
				swap(s[i][2],s[j][2]);
			}
		}
	}
}

int main()
{
	int n,m[16],a[16][15],i,j,s[16][3],f[225],k,row,l;
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%d",&m[i]);
		
	for(i=0;i<n;++i)
	{
		for(j=0;j<m[i];++j)
		{
			scanf("%d",&a[i][j]);
		}
		s[i][0]=accumulate(a[i],a[i]+j,0);
		s[i][1]=m[i];
		s[i][2]=i;
//		printf("%d\n",s[i]);
	}
	sort(s,n);
	
/*	for(i=0;i<n;++i)
		printf("%d %d %d\n\n",s[i][0],s[i][1],s[i][2]);
*/	
	j=0;l=0;
	for(i=0;i<n;++i)
	{
		k=0;
		row=s[i][2];
//		printf("%d ",row);
		sort(a[row],a[row]+m[row]);
		
		for(l=0;l<m[row];++l)
		{
			a[row][l]=a[row][l]*(j+1);
		}
		
		while(k<m[row])//this is to make that array
		{
			f[j]=a[row][k];
			printf(" %d %d\n",row,f[j]);
			++k;
			++j;
		}
	}
	
	printf("\n");
	for(i=0;i<j;++i)
		printf("%d ",f[i]);

	printf("\n%d\n",j);

	int	r=1;
	long long int sum=0;
//	printf("\n");
	for(i=0;i<j;++i)
	{
		sum+=(i+1)*f[i];
//		printf("%lld ",sum);
	}
	
	printf("%lld\n",sum);

	return 0;
}
