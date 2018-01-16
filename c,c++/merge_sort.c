#include<stdio.h>

int sort(int a[],int n)
{
        int i,j,k,b[10],c[10];
        if(n==1)
                return a[0];
        else
        {
                for(i=0;i<n/2;++i)
                        b[i]=a[i];
                        
                sort(b,n/2);
                        
                for(i=n/2;i<n;++i)
                        c[i-(n/2)]=a[i];
                        
                sort(c,n-n/2);
                
                i=0;
                j=0;
                k=0;
                while(i<n/2&&j<(n-(n/2)))
                {
                        if(b[i]>c[j])
                        {
                                a[k]=c[j];
                                ++j;
                        }
                        else
                        {
                                a[k]=b[i];
                                ++i;
                        }
                        ++k;
                }
                if(i==n/2)
                {
                        while(j<(n-(n/2)))
                        {
                                a[k]=c[j];
                                ++j;
                                ++k;
                        }
                }
                else if(j==(n-(n/2)))
                {
                        while(i<((n/2)))
                        {
                                a[k]=b[i];
                                ++i;
                                ++k;
                        }
                }
        }
}

int main()
{
        int n,i,a[10];
        scanf("%d",&n);
        
        for(i=0;i<n;++i)
                scanf("%d",&a[i]);
        
        sort(a,n);
        
        printf("\nThe sorted array is: \n");
        
        for(i=0;i<n;++i)
                printf("%d\n",a[i]);
        
        return 0;
}
