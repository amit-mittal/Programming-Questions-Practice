#include<stdio.h>
#include<math.h>

int factnew(int fact)
{
	int num,ans[100000],i,temp,x,index,zero;
	index=1;
	ans[0]=1;
	temp=0;
	x=0;int q;
	num=1;int sum=0;
	zero=0;
	while(num<=fact)
	{
		for(i=0;i<index;i++)
		{
			x=ans[i]*num+temp;
			ans[i]=x%10000;
			temp=x/10000;
		}
		while(temp>0)
		{
			i=index;
			ans[i]=temp%10000;
			temp=temp/10000;
			index++;
		}
		num++;
	}
	for(i=index;i>0;i--)
	{
		if(ans[i-1]<1000&&i!=index)
		{
			++sum;
			if(ans[i-1]<100)
			{	++sum; if(ans[i-1]<10) ++sum;if(ans[i-1]==0)++sum;}
			
		}
		
//		printf("%d",ans[i-1]);
		q=ans[i-1];
		while(q>0)
		{
//			printf("%d\n",q);
			sum++;
			q/=10;
		}
	}
	return(sum);
}

int expnew(int fact,int val)
{
	int num,ans[100000],i,temp,x,index,zero;
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
			x=ans[i]*fact+temp;
			ans[i]=x%10000;
			temp=x/10000;
		}
		while(temp>0)
		{
			i=index;
			ans[i]=temp%10000;
			temp=temp/10000;
			index++;
		}
		num++;
	}
	for(i=index;i>0;i--)
	{
			if(ans[i-1]<1000&&i!=index)
		{
			++sum;
			if(ans[i-1]<100)
			{	++sum; if(ans[i-1]<10) ++sum;if(ans[i-1]==0)++sum;}
			
		}
		
//		printf("%d",ans[i-1]);
		q=ans[i-1];
		while(q>0)
		{
//			printf("%d\n",q);
			sum++;
			q/=10;
		}
	}
	return(sum);
}

int main()
{
	char string[20],op;
	int val1=0,val2=0,i=0,d=0,value,c1=0,c2=0;

	scanf("%s",string);
	
	while(((string[i]!='!')&&(string[i]!='*')&&(string[i]!='/')&&(string[i]!='^')))
	{
		if(string[i]!='-'){
		val1=val1*10+string[i]-'0';
		++i;}
		else{c1=1;
		++i;}
	}
	op=string[i];
	i+=1;
	
	if(c1==1)
		val1=(-1)*val1;
	
//	if(string[i])
	
	while(string[i]!='\0')
	{
		if(string[i]!='-'){
		val2=val2*10+string[i]-'0';
		++i;}
		else{c2=1;++i;}
	}
	
	if(c2==1)
		val2=(-1)*val2;
	
//		printf("%d %d\n",val1,val2);

	if(op=='*')
	{
		value=abs(val1*val2);
		if(value==0)
			++d;
		while(value>0)
		{
			d++;
			value/=10;
		}
		printf("%d",d);
	}
	else if(op=='/')
	{
		if(val2!=0){
		value=abs(val1/val2);
		while(value>0)
		{
			d++;
			value/=10;
		}
		printf("%d",d);}
	}
	else if(op=='^')
	{
		if(val2>=0)
		{
		d=expnew(abs(val1),val2);}
		else
			d=1;
		printf("%d",d);
	}
	else if(op=='!')
	{
		if(val1>=0){
		d=factnew(val1);
		printf("%d",d);}
	}
	
	return 0;
}
