#include <stdio.h>
#include <stdlib.h>

int n,k,m;
int ans_min=1000000000;

int min(int x,int y){
	if(x<y)
		return x;
	else
		return y;
}

int max(int x,int y){
	if(x>y)
		return x;
	else
		return y;
}

int compare (const void *pa,const void *pb ) {
    if ( *(int*)(pa) < *(int*)(pb) ) return -1;
  	if ( *(int*)(pa) > *(int*)(pb) ) return 1;
    return 0;
}

void func(int visit[],int a[][3],int index,int counter,int cost){
	int arr_1[2005],arr_2[2005];
	int i,check=1;

	if(index>=n || counter>k)
		return;

	for(i=0;i<n;++i)
		arr_1[i]=arr_2[i]=visit[i];

	for(i=0;i<n;++i){
		if(visit[i]==0){
			check=0;
			break;
		}
	}

	if(check==1){
		if(cost<ans_min)
			ans_min=cost;

		return;
	}

	for(i=index;i<m;++i){	
		if(arr_1[a[i][0]]==1 || arr_1[a[i][1]]==1){
			arr_1[a[i][0]]=1;
			arr_1[a[i][1]]=1;
			func(arr_1,a,i+1,counter,cost+a[i][2]);
		}
		else if(counter<k){
			arr_1[a[i][0]]=1;
			arr_1[a[i][1]]=1;
			func(arr_1,a,i+1,counter+1,cost+a[i][2]);
		}

		func(arr_2,a,i+1,counter,cost);

		printf("%d\n", cost);
	}
}

int main(){
	int test,i,j,a[2005][3],x,y;

	scanf("%d",&test);

	while(test--){
		int d[2005]={0};

		scanf("%d %d %d",&n,&m,&k);

		for(i=0;i<m;++i){
			scanf("%d %d %d",&x,&y,&a[i][2]);

			a[i][0]=min(x,y);
			a[i][1]=max(x,y);
		}
		
		qsort (a, m, sizeof(a[0]), compare);

//		func(a,d,0,n);
		int visit[2005]={0};
		func(visit,a,0,0,0);

		printf("%d\n", ans_min);
	}

	return 0;
}

/*


void func(int a[][3],int d[],int index,int n){
	if(index==n-1){//base case
		d[index]=a[index][2];
	}
	else{
		int val1,val2,i;

		if(d[index+1]==0)
			func(a,d,index+1,n);
			
		val1=d[index+1];

		i=index;
		while(a[i][0]<a[index][1] && i<n)
			++i;

		if(i==n){
			val2=a[index][2];
		}
		if(i<n){
			if(d[i]==0)
				func(a,d,i,n);

			val2=a[index][2]+d[i];
		}
		d[index]=(val1>val2)?val1:val2;
	}
}
*/