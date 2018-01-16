#include<stdio.h>
#include<stdlib.h>
#define BUFFERSIZE 30000006
int q[2000],l,s,a1[105],n,comp[105],c;
char a[105][105];
 
char *ipos, InpFile[BUFFERSIZE];
inline int in() {
while(*ipos <= 32) ++ipos;
int x=0;char c;
while( 1 ) {
c=*ipos++;
if (c<=32) return x;
x=(x<<1)+(x<<3)+c-48;
}
}
inline void InitFASTIO() {
ipos = InpFile;
fread(InpFile,30000000,1,stdin);
}
inline void push(int i){
q[l]=i;
l++;
}
inline int pop(){
s++;
return q[s-1];
}
inline void bfs(int i){
l=0;s=0;memset(q,0,sizeof(q));
push(i);
int k,j;
while(l!=s){
k=pop();
a1[k]=1;
comp[k]=c;
for(j=0;j<n;j++){if(a[k][j]&&!a1[j]){ push(j);}}
}
}
 
int main()
{InitFASTIO();int t,m,x,y,i,j,k,q1,z,p,q;
t=in();
while(t--){memset(comp,0,sizeof(comp));c=1; memset(a1,0,sizeof(a1));memset(a,0,sizeof(a));
n=in();m=in();for(i=0;i<m;i++){x=in();y=in();a[x][y]=a[y][x]=1;}
for(i=0;i<n;i++) { a[i][i]=1;if(!a1[i]){bfs(i);++c;}}
q1=in();
for(i=0;i<q1;i++){x=in();y=in();if(comp[x]==comp[y])printf("YO\n");else printf("NO\n");
}
 
}
return 0;}
