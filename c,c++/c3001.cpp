#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<math.h>

using namespace std;

int main()
{
	char a[10][10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
	char b[10][5]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001"};
	string s1,s2,s3,s4;
	long long v=0,i,index;
	cin>>s1>>s2>>s3>>s4;
	
	for(i=0;i<10;++i)
	{
		if(s1.compare(a[i])==0)
			v+=pow(2,15)*(int)(b[i][0]-'0')+pow(2,14)*(int)(b[i][1]-'0')+pow(2,13)*(int)(b[i][2]-'0')+pow(2,12)*(int)(b[i][3]-'0');
		if(s2.compare(a[i])==0)
			v+=pow(2,11)*(int)(b[i][0]-'0')+pow(2,10)*(int)(b[i][1]-'0')+pow(2,9)*(int)(b[i][2]-'0')+pow(2,8)*(int)(b[i][3]-'0');
		if(s3.compare(a[i])==0)
			v+=pow(2,7)*(int)(b[i][0]-'0')+pow(2,6)*(int)(b[i][1]-'0')+pow(2,5)*(int)(b[i][2]-'0')+pow(2,4)*(int)(b[i][3]-'0');
		if(s4.compare(a[i])==0)
			{v+=pow(2,3)*(int)(b[i][0]-'0')+pow(2,2)*(int)(b[i][1]-'0')+pow(2,1)*(int)(b[i][2]-'0')+pow(2,0)*(int)(b[i][3]-'0');index=i;}
			
		
	}
	
	v*=pow(10,index);
	
	printf("%lld Guntur\n",v);
	
	return 0;
}
