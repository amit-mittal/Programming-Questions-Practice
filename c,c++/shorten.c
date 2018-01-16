#include<stdio.h>
#include<string.h>

int B[1000001],V;

int comp(void *a,void *b)
{
return((*(int*)a)>(*(int*)b));
}

int main()
{
int P[32000],F[32000],j,Z=0,i;

	memset(P,0,32000);//just to set all values of p to zero

	for(i=2;i<2000;i++)
		if(!P[i])//sets p[] 4,6,8,9,16 till 32000 to 1
			for(j=i*i;j<32000;j+=i)
				P[j]=1;

	for(i=2;i<16000;i++)
		if(!P[i])
			F[Z++]=i;

int Q[3000][2],PH[2000],M=0,A[3000][2],C=0,R[3000][2],K=0,k,ans;

	while(1)
	{
	scanf("%d%d",Q[C],Q[C]+1);
	if( Q[C][0]==0 && Q[C][1]==0 )
		break;
	A[C][0]=Q[C][0],A[C][1]=Q[C++][1];
	}

	R[0][0]=A[0][0],R[0][1]=A[0][1];

	for(i=1;i<C;++i)
	{
	if(A[i][0]>R[K][1])
		{
		if(R[K][0]+1000000<A[i][0])
			{
			R[++K][0]=A[i][0],R[K][1]=A[i][1];
			continue;
			}
		R[K][1]=A[K][1];
		
		if(A[K][1]<R[K][0]+1000000)
			continue;

		R[K+1][0]=R[K][1]+1,R[K+1][1]=A[K][1];
		K++;
		}

		if(A[i][1]<=R[K][1])
			continue;

		if(A[i][1]-R[K][0]<=1000000)
			R[K][1]=A[i][1];
		else
			R[K][1]=R[K][0]+1000000,R[K+1][0]=R[K][1]+1,R[++K][1]=A[i][1];
	}

	if(C>700)
		return 0;

	for(V=0;V<K+1;++V)
		{
		int I,last,arr[1000001];

		I=R[V][0];
		last=R[V][1];

		if(I<561)
			I=561;

		memset(B,-1,4*1000001);
		memset(arr,0,4*1000001);

		int S,fl=0,G[1000001]={0};

		for(i=1;i<Z;i++)
			{
			int tt=(I>F[i])?(I+F[i]-I%F[i]):F[i];

			if(tt==I+F[i])
				tt-=F[i];

			S=tt-I;

			int ll=last-I+1;

			for(j=S;j<ll;j+=F[i])
				{
				arr[j]+=((j+I-1)%(F[i]-1));
				B[j]*=F[i];
				if((j+I)!=F[i])
					G[j]=1;
				}
			}
		for(i=I;i<=last;i++)
			if(!(arr[i-I]) && G[i-I]==1 &&!( B[i-I]+i))
					PH[M++]=i;
		}

	for(i=0;i<C;++i)
		{
		k=0,ans=0;
		while(k<M&&PH[k]<Q[i][0])
			k++;
		
		while(k<M&&PH[k]<=Q[i][1])
			printf("%d\n",PH[k]),k++,ans++;
		
		if(!ans)
			printf("none\n");
						}
return 0;
}
