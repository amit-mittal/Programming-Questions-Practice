#include<iostream>
#include<stdio.h>

using namespace std;

int ans=0;

int recur(int a[][1011],int n,int i,int j,int count,int b[][1011]){
	if(i<0 || i>=n || j<0 || j>=n)
		return 0;

//	cout<<i<<" "<<j<<" "<<count<<endl;
	if(b[i][j]==0)
	{
		if(a[i][j]==1){
			if(count==0){
				++ans;
				
//				cout<<i<<" "<<j<<endl;
				
				a[i][j]=0;
				b[i][j]=1;
				
				recur(a,n,i-1,j-1,count+1,b);
				recur(a,n,i-1,j,count+1,b);
				recur(a,n,i-1,j+1,count+1,b);
				recur(a,n,i,j-1,count+1,b);
				recur(a,n,i,j+1,count+1,b);
				recur(a,n,i+1,j-1,count+1,b);
				recur(a,n,i+1,j,count+1,b);
				recur(a,n,i+1,j+1,count+1,b);
				count=0;
			}
			else{
				a[i][j]=0;
				b[i][j]=1;

				recur(a,n,i-1,j-1,count+1,b);
				recur(a,n,i-1,j,count+1,b);
				recur(a,n,i-1,j+1,count+1,b);
				recur(a,n,i,j-1,count+1,b);
				recur(a,n,i,j+1,count+1,b);
				recur(a,n,i+1,j-1,count+1,b);
				recur(a,n,i+1,j,count+1,b);
				recur(a,n,i+1,j+1,count+1,b);
				count=0;
			}
		}		
	}
}

int main()
{
	int a[1011][1011],t,i,j,n;

	cin>>t;

	while(t--){
		scanf("%d",&n);

		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				cin>>a[i][j];

		int b[1011][1011]={0};

		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				recur(a,n,i,j,0,b);

		cout<<ans<<endl;
		ans=0;
/*
		for(i=0;i<n;++i){
			for(j=0;j<n;++j)
				cout<<b[i][j]<<" ";
			cout<<endl;
		}
*/	}

	return 0;
}