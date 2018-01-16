#include <iostream>
#include <cstdio>
#include <cstring>

//int a[5005], len;

using namespace std;
/*
int func(char str[5005], int start){
	if(start == len-1){
		a[start]=1;
		return 1;
	}

	if(start>=len){
		 a[start]=0;
		 return 0;
	}

	if(str[start]>='3'){
		a[start]=func(str, start+1);
	}
	else{
		if(str[start]=='2'){
			if(str[start+1]<='6'){
				a[start] = func(str, start+1) + func(str, start+2);
			}
			else{
				a[start] = func(str, start+1);
			}
		}
		else{
			a[start] = func(str, start+1) + func(str, start+2);
		}
	}

	return a[start];
}
*/
int main(){
	char str[5005];
	int i, len;

	scanf("%s", str);

	while(str[0]!='0'){
		len= strlen(str);

		int a[5005];

//		a[0] = func(str, 0);

		for(i=0;i<=len+3;++i)
			a[i]=1;

		if(str[len-1]!='0')
			a[len-1]=1;
		else{
			a[len-1]=0;
		}

		for(i=len-2;i>=0;--i){
			if(str[i]>='3'){
				if(str[i+1]!='0')
					a[i]=a[i+1];
				else{
					a[0]=0;
					break;
				}
			}
			else if(str[i]=='0')
				a[i]=0;
			else{
				if(str[i]=='2'){
					if(str[i+1]<='6' && str[i+1]>'0'){
						a[i] = a[i+1] + a[i+2];
					}
					else if(str[i+1]<='6' && str[i+1]=='0'){
						a[i] = a[i+2];
					}
					else{
						a[i] = a[i+1];
					}
				}
				else{
					if(str[i+1]!='0')
						a[i] = a[i+1] + a[i+2];
					else
						a[i] = a[i+2];
				}
			}
		}

/*		for(i=0;i<len;++i)
			printf("%d ", a[i]);
*/
		printf("%d\n", a[0]);

		scanf("%s", str);
	}

	return 0;
}