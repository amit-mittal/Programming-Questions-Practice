#include<stdio.h>

int main()
{
	int test;
	double xe,xb,xc,xd,yb,yc,yd,ye,same,mbc,cbc,mde,cde,x,y;
	double xdemax,xdemin,xbcmax,xbcmin;

	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%lf %lf",&xb,&yb);//getting coordinates
		scanf("%lf %lf",&xc,&yc);
		scanf("%lf %lf",&xd,&yd);
		scanf("%lf %lf",&xe,&ye);
		
		if((xb!=xc)&&(xe!=xd))//if no x is same
		{
			mbc=(yb-yc)/(xb-xc);
			cbc=((xb*yc)-(xc*yb))/(xb-xc);
			
			mde=(yd-ye)/(xd-xe);
			cde=((xd*ye)-(xe*yd))/(xd-xe);
			
			if(mbc!=mde)
			{
				x=(cde-cbc)/(mbc-mde);
				y=((mbc*cde)-(mde*cbc))/(mbc-mde);
				
				if(xb>=xc)
				{
					xbcmax=xb;
					xbcmin=xc;
				}
				else
				{
					xbcmax=xc;
					xbcmin=xb;
				}
				
				if(xd>=xe)
				{
					xdemax=xd;
					xdemin=xe;
				}
				else
				{
					xdemax=xe;
					xdemin=xd;
				}
				
				if((x<xdemax)&&(x<xbcmax)&&(x>xdemin)&&(x>xbcmin))
					printf("yes\n");
				else
					printf("no\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else//some x same
		{
			if((xb==xc)&&(xe!=xd))
				same=xb;
			else if((xe==xd)&&(xb!=xc))
				same=xd;
			else if((xe==xd)&&(xb==xc))
				printf("yes\n");
				
			if(same==xb)
			{
				mde=(yd-ye)/(xd-xe);
				cde=((xd*ye)-(xe*yd))/(xd-xe);
				
				x=same;
				y=(mde*same)+cde;
				
				if(xb>=xc)
				{
					xbcmax=xb;
					xbcmin=xc;
				}
				else
				{
					xbcmax=xc;
					xbcmin=xb;
				}
				
				if(yb>=yc)
				{
					ybcmax=yb;
					ybcmin=yc;
				}
				else
				{
					ybcmax=yc;
					ybcmin=yb;
				}
				
				if((x<xbcmax)&&(x>xbcmin))
					printf("yes\n");
				else
					printf("no\n");
			}
			else if(same==xd)
			{
				mbc=(yb-yc)/(xb-xc);
				cbc=((xb*yc)-(xc*yb))/(xb-xc);
				
				if(xd>=xe)
				{
					xdemax=xd;
					xdemin=xe;
				}
				else
				{
					xdemax=xe;
					xdemin=xd;
				}
				
				if((x<xdemax)&&(x>xdemin))
					printf("yes\n");
				else
					printf("no\n");
			}
		}
	}

	return 0;
	
}
