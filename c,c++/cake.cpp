#include<stdio.h>
#include<string.h>
int main()
{
 
int t,k,len,i,j,flag;
 
char s[101],s1[101];
i=j=flag=len=0;
scanf("%d", &t);
 
 
        while (t--)
                {flag=0;
                        scanf("%d", &k);
                        scanf("%s", s);
                        strcpy(s1,s);
                        for(i=0;s[i];i++);
                        len=i;  
        
                        if (s[0]==s[len-1] && len>1 && s[0]!='?'){flag=1;}
                        i=1;
                        while(flag==0 && i<=len-1 )
                        {
                                if((s[i]==s[i-1] && s[i]!='?')  )
                                { ;flag=1; break; }
                                i++;
 
                        }
 
                        if(flag==1)
                        printf("NO\n");
                        
                        
                        else 
                                {
                                        i=0;
                                        for(i=0; i<len && flag==0; i++)
                                        {
                                                if(s[i]=='?')
                                                {
                                                  for(j=0; j<=k; j++)
                                                        {
                                                                if(j==k){flag=1;break;}
                                                        
                                                                else if(i==0)
                                                                {
                                                                        if(s[1]!=48+j && s[len-1]!=48+j)
                                                                        {s[0]=48+j; break;}
                                                                }
 
                                                                else if(i==len-1)
                                                                {
                                        
                                                                if(s[0]!=48+j && s[len-2]!=48+j)
                                                                {s[i]=48+j; break;}
                                                                }
                                
                                                                else if(s[i-1]!=48+j && s[i+1]!=48+j)
                                                                {
                                                                s[i]=48+j;
                                                                 break;           
                                                                }
                                                
                                                        }
                                                        
                                                } 
                                        
 
                                        }    
                                
                                if(k==2 && flag==1)
                                {flag=0;
                                        for(i=0; i<len && flag==0; i++)
                                        {
                                                if(s1[i]=='?')
                                                for(j=k-1; j>=-1; j--)
                                                {
                                                        if(j==-1){flag=1;break;}
                                                        
                                                                else if(i==0)
                                                                {
                                                                        if(s1[1]!=48+j && s1[len-1]!=48+j)
                                                                        {s1[0]=48+j; break;}
                                                                }
 
                                                                else if(i==len-1)
                                                                {
                                        
                                                                if(s1[0]!=48+j && s1[len-2]!=48+j)
                                                                {s1[i]=48+j; break;}
                                                                }
                                
                                                                else if(s1[i-1]!=48+j && s1[i+1]!=48+j)
                                                                {
                                                                s1[i]=48+j;
                                                                 break;           
                                                                }
                                                        
 
                                                }
                                                
                                                
                                        }
                                        if (flag==0)strcpy(s,s1);
                                        
                                }
 
                                if(flag==0)printf("%s\n" , s);
 
                                else printf("NO\n");
                                                                
                                }
                }
 
 
return 0;
} 

http://ideone.com/Ss2Jz