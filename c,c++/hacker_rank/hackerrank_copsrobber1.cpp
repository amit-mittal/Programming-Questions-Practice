#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cstdlib>

#define INRANGE(i,a,b) (i>=a && i<b)

int coord_distance(int a, int b, int c, int d) {
    return abs(c-a)+abs(d-b);
}

int axis_distance(int a,int b){
	return abs(a-b);
}

int distance(int a,int b){
	return b-a;
}

using namespace std;

void calculate_move(char player, int dr[], int cop1[], int cop2[], int cop3[]){
	if(player=='R'){
		int i,j,x,y,prev_poss,temp,dist1,dist3,dist2,dist,prev_max,ans_x,ans_y,poss;
		vector< pair < int , int > > moves;


//		dist1=coord_distance(cop1[0],cop1[1],dr[0],dr[1]);
//		dist2=coord_distance(cop2[0],cop2[1],dr[0],dr[1]);
//		dist3=coord_distance(cop3[0],cop3[1],dr[0],dr[1]);

//		dist=dist1+dist2+dist3;

		ans_x=dr[0];
		ans_y=dr[1];
		
		prev_max=0;
		prev_poss=0;

		for(i=-1;i<2;i++) {
            for(j=-1;j<2;j++) {
                x = dr[0]+i;
                y = dr[1]+j;
                if(INRANGE(x,0,20) && INRANGE(y,0,20)) {
                	dist1=coord_distance(x,y,cop1[0],cop1[1]);
                	dist2=coord_distance(x,y,cop2[0],cop2[1]);
                	dist3=coord_distance(x,y,cop3[0],cop3[1]);

                    temp=dist1+dist2+dist3;

                    if(dist1==0 || dist2==0 || dist3==0)
                    	temp=0;

                    if(x>0 && x<19 && y>0 && y<19)
                    	poss=8;
                    else if((x==0||x==19)&&(y>0 && y<19))
                    	poss=5;
                    else if((y==0||y==19)&&(x>0 && x<19))
                    	poss=5;
                    else if((x==0||x==19)&&(y==0 || y==19))
                    	poss=3;
                    else
                    	poss=0;

                    if ((poss*temp)>prev_max){
                    	ans_x=x;
                    	ans_y=y;
                    	prev_poss=poss;
                    }
                    else if(poss*temp==prev_max){
                    	if(poss>prev_poss){
                    		ans_x=x;
           	        		ans_y=y;
                    		prev_poss=poss;
                    	}
                    }
                }
            }
        }
        printf("%d %d\n",ans_x,ans_y);
	}
	else if(player=='C'){
		int i,j,x,y,temp,dist1,dist3,dist2,dist,cop1_x,cop1_y,cop3_x,cop3_y,cop2_y,cop2_x;

		x=dr[0];
		y=dr[1];

		dist1=coord_distance(x,y,cop1[0],cop1[1]);
    	dist2=coord_distance(x,y,cop2[0],cop2[1]);
    	dist3=coord_distance(x,y,cop3[0],cop3[1]);

		if(axis_distance(x,cop1[0])>axis_distance(y,cop1[1]))
		{
			if(cop1[0]<x){
				cop1_x=cop1[0]+1;
			}
			else if(cop1[0]>x){
				cop1_x=cop1[0]-1;
			}
			else{
				cop1_x=cop1[0];
			}
			cop1_y=cop1[1];
		}
		else if(axis_distance(x,cop1[0])<axis_distance(y,cop1[1]))
		{
			if(cop1[1]<y){
				cop1_y=cop1[1]+1;
			}
			else if(cop1[1]>y){
				cop1_y=cop1[1]-1;
			}
			else{
				cop1_y=cop1[1];
			}
			cop1_x=cop1[0];
		}
		else{
			if(cop1[1]<y){
				cop1_y=cop1[1]+1;
			}
			else if(cop1[1]>y){
				cop1_y=cop1[1]-1;
			}
			else{
				cop1_y=cop1[1];
			}
			cop1_x=cop1[0];
		}


		if(axis_distance(x,cop3[0])>axis_distance(y,cop3[1]))
		{
			if(cop3[0]<x){
				cop3_x=cop3[0]+1;
			}
			else if(cop3[0]>x){
				cop3_x=cop3[0]-1;
			}
			else{
				cop3_x=cop3[0];
			}
			cop3_y=cop3[1];
		}
		else if(axis_distance(x,cop3[0])<axis_distance(y,cop3[1]))
		{
			if(cop3[1]<y){
				cop3_y=cop3[1]+1;
			}
			else if(cop3[1]>y){
				cop3_y=cop3[1]-1;
			}
			else{
				cop3_y=cop3[1];
			}
			cop3_x=cop3[0];
		}
		else{
			if(cop3[0]<x){
				cop3_x=cop3[0]+1;
			}
			else if(cop3[0]>x){
				cop3_x=cop3[0]-1;
			}
			else{
				cop3_x=cop3[0];
			}
			cop3_y=cop3[1];
		}

		cop2_y=cop2[1];
		cop2_x=cop2[0];

		if(coord_distance(cop2[0],cop2[1],cop1[0],cop1[1])>coord_distance(cop2[0],cop2[1],cop3[0],cop3[1])){
			if(axis_distance(cop1_x,cop2[0])>axis_distance(cop1_y,cop2[1]))
			{
				if(cop2[0]<cop1_x){
					cop2_x=cop2[0]+1;
				}
				else if(cop2[0]>cop1_x){
					cop2_x=cop2[0]-1;
				}
				else{
					cop2_x=cop2[0];
				}
				cop2_y=cop2[1];
			}
			else if(axis_distance(cop1_x,cop2[0])<axis_distance(cop1_y,cop2[1]))
			{
				if(cop2[1]<cop1_y){
					cop2_y=cop2[1]+1;
				}
				else if(cop2[1]>cop1_y){
					cop2_y=cop2[1]-1;
				}
				else{
					cop2_y=cop2[1];
				}
				cop2_x=cop2[0];
			}
			else{
				if(INRANGE(cop2[1]+1,0,20))
				{
					cop2_y=cop2[1]+1;
					cop2_x=cop2[0];
				}
				else{
					cop2_x=cop2[0];
					cop2_y=cop2[1];
				}
			}
		}
		else if(coord_distance(cop2[0],cop2[1],cop1[0],cop1[1])<coord_distance(cop2[0],cop2[1],cop3[0],cop3[1])){
			if(axis_distance(cop3_x,cop2[0])>axis_distance(cop3_y,cop2[1]))
			{
				if(cop2[0]<cop3_x){
					cop2_x=cop2[0]+1;
				}
				else if(cop2[0]>cop3_x){
					cop2_x=cop2[0]-1;
				}
				else{
					cop2_x=cop2[0];
				}
				cop2_y=cop2[1];
			}
			else if(axis_distance(cop3_x,cop2[0])<axis_distance(cop3_y,cop2[1]))
			{
				if(cop2[1]<cop3_y){
					cop2_y=cop2[1]+1;
				}
				else if(cop2[1]>cop3_y){
					cop2_y=cop2[1]-1;
				}
				else{
					cop2_y=cop2[1];
				}
				cop2_x=cop2[0];
			}
			else{
				if(INRANGE(cop2[0]+1,0,20))
				{
					cop2_y=cop2[1];
					cop2_x=cop2[0]+1;
				}
				else{
					cop2_x=cop2[0];
					cop2_y=cop2[1];
				}
			}
		}
		else{
			if(axis_distance(x,cop2[0])>axis_distance(y,cop2[1]))
			{
				if(cop2[0]<x){
					cop2_x=cop2[0]+1;
				}
				else if(cop2[0]>x){
					cop2_x=cop2[0]-1;
				}
				else{
					cop2_x=cop2[0];
				}
				cop2_y=cop2[1];
			}
			else if(axis_distance(x,cop2[0])<axis_distance(y,cop2[1]))
			{
				if(cop2[1]<y){
					cop2_y=cop2[1]+1;
				}
				else if(cop2[1]>y){
					cop2_y=cop2[1]-1;
				}
				else{
					cop2_y=cop2[1];
				}
				cop2_x=cop2[0];
			}
			else{
				int value=rand()%3;

				if(value==0){
					if(INRANGE(cop2[1]+1,0,20))
					{
						cop2_y=cop2[1]+1;
						cop2_x=cop2[0];
					}
					else{
						cop2_x=cop2[0];
						cop2_y=cop2[1];
					}
				}
				else if(value==1){
					cop2_x=cop2[0];
					cop2_y=cop2[1];
				}
				else if(value==2){
					if(INRANGE(cop2[0]+1,0,20))
					{
						cop2_y=cop2[1];
						cop2_x=cop2[0]+1;
					}
					else{
						cop2_x=cop2[0];
						cop2_y=cop2[1];
					}
				}
			}
		}
/*
		if(axis_distance(x,cop2[0])>axis_distance(y,cop2[1]))
		{
			if(cop2[0]<x){
				cop2_x=cop2[0]+1;
			}
			else if(cop2[0]>x){
				cop2_x=cop2[0]-1;
			}
			else{
				cop2_x=cop2[0];
			}
			cop2_y=cop2[1];
		}
		else if(axis_distance(x,cop2[0])<axis_distance(y,cop2[1]))
		{
			if(cop2[1]<y){
				cop2_y=cop2[1]+1;
			}
			else if(cop2[1]>y){
				cop2_y=cop2[1]-1;
			}
			else{
				cop2_y=cop2[1];
			}
			cop2_x=cop2[0];
		}
		else{
			if(cop2[1]<y){
				cop2_y=cop2[1]+1;
			}
			else if(cop2[1]>y){
				cop2_y=cop2[1]-1;
			}
			else{
				cop2_y=cop2[1];
			}
			cop2_x=cop2[0];
		}

		if(cop2_x==cop3_x || cop2_x==cop1_x)
			cop2_x=cop2[0];

		if(cop2_y==cop3_y || cop2_x==cop1_y)
			cop2_y=cop2[1];
*/
		if(dist1==0 || dist2==0 || dist3==0)
    	{
    		printf("%d %d %d %d %d %d\n", cop1[0],cop1[1],cop2[0],cop2[1],cop3[0],cop3[1]);
    	}
    	else
    	{
    		printf("%d %d %d %d %d %d\n", cop1_x,cop1_y,cop2_x,cop2_y,cop3_x,cop3_y);	
    	}
	}

}

int main(){
	srand(time(NULL));
	int dr[2],cop1[2],cop2[2],cop3[2],i;
    char player;

    scanf("%c",&player);
    
    for(i=0;i<2;i++) scanf("%d",&dr[i]);
    for(i=0;i<2;i++) scanf("%d",&cop1[i]);
    for(i=0;i<2;i++) scanf("%d",&cop2[i]);
    for(i=0;i<2;i++) scanf("%d",&cop3[i]);
    
    calculate_move(player,dr,cop1,cop2,cop3);
	
	return 0;
}