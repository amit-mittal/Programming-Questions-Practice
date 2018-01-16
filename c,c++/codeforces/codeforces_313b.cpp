#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char a[100005];int len;
    int b[100005] = {0};
    int q;int l;int r;
    
    scanf("%s",a);len = strlen(a);
    
    b[0] = 0;
    for(int i=1;i<len;++i){
        if(a[i-1]==a[i])
            b[i]=b[i-1]+1;
        else
            b[i]=b[i-1]; 
    }
    
    int ans;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&l,&r);
        l--;r--;
        if(l==0)
            ans = b[r];
        else
            ans = b[r]-b[l];
        printf("%d\n",ans);
    }
    return 0;
}