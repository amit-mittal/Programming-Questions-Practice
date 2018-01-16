#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int t,i,j,index,len;
	char string[20005],min[10005],sub[10005];

	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%s",string);
		strcpy(min,string);
		strcat(string,min);
		
		len=strlen(min);
		
		for(i=1;i<len;++i)
		{
			for(j=i;j<len+i;++j)
			{
				sub[j-i]=string[j];
			}
			sub[j-i]='\0';
			
			if(strcmp(min,sub)>0)
			{
				index=i;
				strcpy(min,sub);
			}
		}
		++index;
		printf("%d\n",index);
	}

	return 0;
}
//alternate with same algo
/*
    #include <cstdio>
    #include <cstring>
    using namespace std;
    #define NN 32780
    char ans[NN], s[NN];
    int main(){
        int t; scanf("%d", &t);
        while(t-- && scanf("%s", s) == 1){
            int idx = 0, n = strlen(s);
            for(int i = 0; i < n; ++i) s[n + i] = s[i];
            s[2*n] = 0;
            strcpy(ans, s); ans[n] = 0;
            for(int i = 1; i < n; ++i){
                if(strcmp(ans, s + i) > 0){
                    strcpy(ans, s + i);
                    ans[n] = 0;
                    idx = i;
                }
            }
            printf("%d\n", idx + 1);
        }
        return 0;
    }
*/
