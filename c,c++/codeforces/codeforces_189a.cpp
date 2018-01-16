#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    int *arr;
    arr = new int[n+1];
    arr[0] = 0;
    for(int i=1;i<=n;++i){
        arr[i] = -1;
        if(i>=a && arr[i-a]>=0)
            arr[i] = max(arr[i], arr[i-a]+1);
        if(i>=b && arr[i-b]>=0)
            arr[i] = max(arr[i], arr[i-b]+1);
        if(i>=c && arr[i-c]>=0)
            arr[i] = max(arr[i], arr[i-c]+1);
    }
    printf("%d\n", arr[n]);
    return 0;
}