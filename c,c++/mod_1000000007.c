    #include<stdio.h>
    #include<string.h>
    #define MOD 1000000007
     
    long long po(int a,int b)
    {
    long long x=1,y=a;
    while(b > 0)
    {
    if(b%2 == 1)
    {
    x=(x*y);
    if(x>MOD) x%=MOD;
    }
    y = (y*y);
    if(y>MOD) y%=MOD;
    b /= 2;
    }
    return x;
     
    }
    int main()
    {
    int t,j;
    long long arr1[501];
    arr1[1]=1;
    for(j=2;j<=500;j++)
    {
    arr1[j]=(arr1[j-1]*j)%MOD;
    }
    scanf("%d",&t);
    while(t--)
    {
    char word[505];
    scanf("%s",word);
    int len=strlen(word);
    int i,arr[52]={0};
    for(i=0;i<len;i++)
    {
    if(word[i]>='a'&&word[i]<='z')
    arr[word[i]-'a']+=1;
    else if(word[i]>='A'&&word[i]<='Z')
    arr[word[i]+26-'A']+=1;
    }
    long long x=1;
    for(i=0;i<52;i++)
    {
    if(arr[i]>1)
    x=(x*arr1[arr[i]])%MOD;
    }
    long long y=(arr1[len]*po(x,MOD-2))%MOD;
    printf("%lld\n",y);
    }
    return 0;
    } 
