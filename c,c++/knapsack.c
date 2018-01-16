/*
in these type of problems, basically some constraint is there on one parameter and it has one corresponding parameter whose sum we have to maximise.
*/ 

//in this question 1st param=constraint on money 2nd param=no. of options and then 2nd param no. of lines are there
// 1st entry=money and 2nd entry=fun from that money and we have to maximise fun

#include<stdio.h>

knapsack(int a[][2],int n,int lim)
{
	int m[51][11];//51 is lim+1 and 11 is n+1
	for(i=0;i<=lim;++i)
		m[0][i]=0;
		
	for(i=1;i<=n;++i)
	{
		for(w=0;w<=lim;++w)
		{
			if(a[i][0]<=w)
				m[i][w]=max()
		}
	}
}

int main()
{
	int lim,n,i,a[10][2];
//	scanf("%d %d",&lim,&n);
	lim=50;
	n=10;
	for(i=0;i<n;++i)
		scanf("%d %d",&a[i][0],&a[i][1]);
		
	knapsack(a,n,lim);
}

//one other approach is to sort according to the fun/money ratio, now maximise fum with less money. But due to float points, it is sometimes wrong
