#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

using namespace std;

int check(char s1[],char s2[]){//check if 2 strings are identical or not
	int i;
	for(i=0;i<strlen(s1);++i){
		if(!((s1[i]==s2[i]) || ((s1[i]+32)==s2[i]) || (s1[i]==(s2[i]+32))))
			return 0;
	}
	return 1;
}

int main(){
	char str[140000][18],string[18],str1[18],str2[18];
	int k,i=0,j=0,final,arr[140000]={0};//arr contains values assigned to the string if they have matched or not
	int a[140000]={0};//this contains all the values if the subsegment that we have considered has got its corresponding entry or not
	char ch;

	while(1)//to take input and remove all special chars
	{
		ch=getchar();

		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
			str[i][j++]=ch;
		}
		else if(ch=='\n')
			break;
		else{
			if(j>0)
			{
				str[i][j]='\0';
				++i;
				j=0;
			}
		}
	}
	final=i;

	scanf("%d",&k);

	while(k--){
		scanf("%s",string);

		for(i=0;i<final;++i)
		{
			if(strlen(string)==strlen(str[i]) && arr[i]==0){
				if (check(string,str[i])==1)
					arr[i]=k+1;
			}
		}
	}

	for(i=0;i<final;++i){
		if(arr[i]!=0){
			for(j=0;j<;++j)
		}
		else{

		}
	}

	for(i=0;i<final;++i)
		printf("%s\n",str[i]);

	for(i=0;i<final;++i)
		printf("%d\n",arr[i]);

	return 0;
}