#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    int a[26] = {0};
    int count = 0;
    char b[1005];
    
    scanf("%s",b);
    int len = strlen(b);
    
    for(int i=0;i<len;++i){
        ++a[b[i]-'a'];
    }
    for(int i=0;i<26;++i){
        if(a[i]%2==1)
            ++count;
    }
    if(count%2==1 || count==0)
        printf("First\n");
    else
        printf("Second\n");
    
    return 0;
}