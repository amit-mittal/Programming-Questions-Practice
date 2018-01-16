#include<stdio.h>
#include<math.h>



int main()
{
	double w,i,tw,ti,heat_ice,heat_wat,ice,water,temp,latent,tempo;
	double ICE=2.09;
	double WAT=4.19;
	double LAT=335;

	scanf("%lf %lf %lf %lf",&w,&i,&tw,&ti);
	while(w!=0||i!=0)
	{
		if(ti<0.0)
			ti=(-1)*ti;
			
		if(tw<0.0)
			tw=(-1)*tw;
	
		heat_ice=i*ICE*ti;
		heat_wat=w*WAT*tw;
		
//		printf("%lf %lf\n",heat_ice,heat_wat);
		
		if(heat_ice==heat_wat)
		{
			ice=i;
			water=w;
			temp=0.0;
		}
		else if(heat_ice>heat_wat)
		{
			latent=w*LAT;
			if(latent>heat_ice-heat_wat)
			{
				tempo=(heat_ice-heat_wat)/LAT;
				water=w-tempo;
				ice=i+tempo;
				temp=0.0;
			}
			else if(latent==heat_ice-heat_wat)
			{
				ice=i+w;
				water=0.0;
				temp=0.0;
			}
			else
			{
				water=0.0;
				ice=i+w;
				temp=-(heat_ice-latent-heat_wat)/(ice*ICE);
			}
		}
		else
		{
//			printf("hi\n");
			latent=i*LAT;
			if(latent>(heat_wat-heat_ice))
			{
				tempo=(heat_wat-heat_ice)/LAT;
				water=w+tempo;
				ice=i-tempo;
				temp=0.0;
			}
			else if(latent==heat_wat-heat_ice)
			{
				temp=0.0;
				water=w+i;
				ice=0.0;
			}
			else
			{
//				printf("hihi\n");
				ice=0.0;
				water=i+w;
				temp=(heat_wat-latent-heat_ice)/(water*WAT);
			}
		}
		
		printf("%.1lf g of ice and %.1lf g of water at %.1lf C\n",ice,water,temp);
		
		scanf("%lf %lf %lf %lf",&w,&i,&tw,&ti);
	}
	
	return 0;
}
