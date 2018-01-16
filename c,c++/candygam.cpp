#include <iostream>
#include <cstdio>

#define ll long long 

using namespace std;

ll int sum(int a[][52],int fix,int start,int end,int type){
	ll int val=0;
	int i;

	if(type==0){//row sum
		for(i=start;i<=end;++i){
			val+=a[fix][i];
		}
	}
	else if(type==1){//col sum
		for(i=start;i<=end;++i){
			val+=a[i][fix];
		}
	}

	return val;
}

ll int func(int a[][52], int start_row,int start_col,int end_row,int end_col, ll int alice, ll int bob){
	int i,j,change_x1,change_x2,change_y1,change_y2;
	ll int val,val1,val2,val3,val4,temp1,temp,bob_max;


	if(start_row>end_row || start_col>end_col)
		return bob;

	if(start_row==end_row){
		if(a[start_row][start_col]>a[end_row][end_col]){
			alice+=a[end_row][end_col];
			bob+=sum(a,start_row,start_col,end_col-1,0);
		}
		else{
			alice+=a[start_row][start_col];
			bob+=sum(a,start_row,start_col+1,end_col,0);
		}

		return max(alice,bob);

	}
	else if(start_col==end_col){
		if(a[start_row][start_col]>a[end_row][end_col]){
			alice+=a[end_row][end_col];
			bob+=sum(a,start_col,start_row,end_row-1,1);
		}
		else{
			alice+=a[start_row][start_col];
			bob+=sum(a,start_col,start_row+1,end_row,1);
		}

		return max(alice,bob);
	}
	else{
		val=sum(a,start_row,start_col,end_col,0);
		change_x1=1;
		change_x2=0;
		change_y1=0;
		change_y2=0;

		temp=sum(a,end_row,start_col,end_col,0);
		if(temp<val){
			change_x1=0;
			change_x2=-1;
			change_y1=0;
			change_y2=0;
			val=temp;
		}

		temp=sum(a,start_col,start_row,end_row,1);
		if(temp<val){
			val=temp;
			change_x1=0;
			change_x2=0;
			change_y1=1;
			change_y2=0;
		}

		temp=sum(a,end_col,start_row,end_row,1);
		if(temp<val){
			val=temp;
			change_x1=0;
			change_x2=0;
			change_y1=0;
			change_y2=-1;
		}

		alice+=val;
//		cout<<alice<<endl;

		start_row+=change_x1;
		start_col+=change_y1;
		end_row+=change_x2;
		end_col+=change_y2;

		temp1=sum(a,start_row,start_col,end_col,0);
		val1=func(a,start_row+1,start_col,end_row,end_col,alice,bob+temp1);

		if(alice==val1)
			val1+=alice;

		temp1=sum(a,end_row,start_col,end_col,0);
		val2=func(a,start_row,start_col,end_row-1,end_col,alice,bob+temp1);

		if(alice==val2)
			val2+=alice;

		temp1=sum(a,start_col,start_row,end_row,1);
		val3=func(a,start_row,start_col+1,end_row,end_col,alice,bob+temp1);

		if(alice==val3)
			val3+=alice;

		temp1=sum(a,end_col,start_row,end_row,1);
		val4=func(a,start_row,start_col,end_row,end_col-1,alice,bob+temp1);

		if(alice==val4)
			val4+=alice;

		bob_max=max(val1,max(val2,max(val3,val4)));

//		cout<<bob_max<<endl;
//		cout<<val1<<endl<<val2<<endl<<val3<<endl<<val4<<endl;

		return max(alice,bob_max);
	}
}

int main(){
	int test,i,j,n,m,a[52][52];
	ll int ans;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&n,&m);

		for(i=0;i<n;++i){
			for(j=0;j<m;++j){
				scanf("%d",&a[i][j]);
			}
		}

		ans=func(a,0,0,n-1,m-1,0,0);

		printf("%lld\n", ans);
	}

	return 0;
}