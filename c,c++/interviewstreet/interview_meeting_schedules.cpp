#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int m,k,a,b,c,d;
	int arr[25][61]={0},tim,hour,min,valid=0,start_hour,start_min,i,j;

	scanf("%d %d",&m,&k);

	for(i=0;i<m;++i)
	{
		scanf("%d %d %d %d", &a,&b,&c,&d);
		tim=(c-a)*60+(d-b);

		for(j=0;j<tim;++j){
			arr[a][b]=1;
			++b;

			if(b>=60){
				++a;
				a%=24;
				b=0;
			}	
		}
	}

	valid=0;
	for(hour=0;hour<24;++hour){
		for(min=0;min<60;++min){
			if(arr[hour][min]==0){
				if(valid==0){
					start_hour=hour;
					start_min=min;
					++valid;
				}
				else
					++valid;
			}
			else{
				if(valid>=k){
					printf("%02d %02d %02d %02d\n",start_hour,start_min,hour,min);
				}
				valid=0;
			}
		}
	}

	if(valid>=k){
		printf("%02d %02d %02d %02d\n",start_hour,start_min,00,00);
	}

	return 0;
}