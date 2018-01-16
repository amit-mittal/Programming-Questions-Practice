    #include<stdio.h>
     
    void factnew(int);
     
    int main(void)
    {
    int num,fact,val ;
    long int ans;
    scanf("%d",&fact);
    while(fact--)
    {
    	scanf("%d",&val);
    	factnew(val);
    }
    return 0;
    }
    void factnew(int val)
    {
    int num,ans[2500],i,temp,x,index,zero;
    index=1;
    ans[0]=1;
    temp=0;
    x=0;int q;
    num=1;int sum=0;
    zero=0;
    while(num<=val)
    {
    for(i=0;i<index;i++)
    {
    x=ans[i]*2+temp;
    ans[i]=x%1000;
    temp=x/1000;
    }
    while(temp>0)
    {
    i=index;
    ans[i]=temp%1000;
    temp=temp/1000;
    index++;
    }
    num++;
    }
    for(i=index;i>0;i--)
    {
    if(ans[i-1]<100&&i!=index)
    {
//    printf("%d",zero);
 //   if(ans[i-1]<10)
//    printf("%d",zero);
    }
//    printf("%d",ans[i-1]);
    q=ans[i-1];
    while(q>0)
    {
    sum+=q%10;
    q=q/10;
    }
    }
    printf("%d",sum);
    printf("\n");
    } 
