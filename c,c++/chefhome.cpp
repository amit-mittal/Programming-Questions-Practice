#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	int test,i,n;
	long long int count1,count2;
	int morex,lessx,samex,morey,lessy,samey;
	long long int sumx,sumy;
	double a,b,comx,comy,fracx,fracy,intpart,x[1005],y[1005],minx,miny,maxx,maxy;
	
	scanf("%d",&test);
	
	while(test--)
	{
		morex=lessx=samex=morey=lessy=samey=0;
		sumx=0;
		sumy=0;
		
		scanf("%d",&n);
		
		for(i=0;i<n;++i)
			scanf("%lf %lf",&x[i],&y[i]);

		a=*min_element(x,x+n);
		b=*min_element(y,y+n);

		for(i=0;i<n;++i)
		{
			sumx+=fabs(x[i]-a);
			sumy+=fabs(b-y[i]);
		}

		comx=a+((double)(sumx/n));
		comy=b+((double)(sumy/n));

		minx=miny=110000001.0;
		maxx=maxy=-110000001.0;

		for(i=0;i<n;++i)
		{
			if(x[i]>comx)
			{
				if(x[i]<minx)
					minx=x[i];
				++morex;
			}
			else if(x[i]<comx)
			{
				if(x[i]>maxx)
					maxx=x[i];
				++lessx;
			}
			else
				++samex;
				
			if(y[i]>comy)
			{
				if(y[i]<miny)
					miny=y[i];
				++morey;
			}
			else if(y[i]<comy)
			{
				if(y[i]>maxy)
					maxy=y[i];
				++lessy;
			}
			else
				++samey;
		}

		if(samex==0)
		{
			if(morex==lessx)
			{
				count1=minx-maxx+1;
			}
			else
			{
				count1=1;
			}
		}
		else
		{
			if(morex==samex+lessx)
			{
				count1=minx-comx+1;
			}
			else if(morex+samex==lessx)
			{
				count1=comx-maxx+1;
			}
			else
				count1=1;	
		}
		
		if(samey==0)
		{
			if(morey==lessy)
			{
				count2=miny-maxy+1;
			}
			else
			{
				count2=1;
			}
		}
		else
		{
			if(morey==samey+lessy)
			{
				count2=miny-comy+1;
			}
			else if(morey+samey==lessy)
			{
				count2=comy-maxy+1;
			}
			else
				count2=1;
		}

		printf("%lld\n",count2*count1);
	}
	
	return 0;
}
