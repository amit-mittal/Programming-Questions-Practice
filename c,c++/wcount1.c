    #include<stdio.h>
    #define M 1000000007
    char a[1009];
    int b[60];long long f[509],inf[15],d,z;
     
    int main()
    {
    int t,n,i,j,k,max;
    
    f[0]=f[1]=1ll;
    long long inf[]= {1ll,1ll,500000004ll, 166666668ll ,41666667ll, 808333339ll, 301388891ll ,900198419ll ,487524805ll ,831947206ll, 283194722ll};
    for(i=2;i<501;i++)
    	f[i]=(f[i-1]*i)%M;
    
    scanf("%d",&t);
    
    while(t--)
    {
    	max=0;
    	//memset(b,0,sizeof(b));
    	scanf("%s",a);
    	
    	for(i=0;a[i];i++)
    		{
    		b[a[i]-65]++;
    		}
    		
  		max=f[i];
  		
    	for(i=0;i<60;i++)
    	if(b[i]&&1-b[i])
    		max=(max*inf[b[i]])%M;
    		
    printf("%d\n",max);
    }
    
    return 0;
}
