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
		int i,j,x,y,prev_poss,temp1,temp,dist1,dist3,dist2,dist,prev_max,ans_x,ans_y,poss,prev_poss1,prev_max1,avg_x,avg_y,prev_max2;
		vector< pair < int , int > > moves;


//		dist1=coord_distance(cop1[0],cop1[1],dr[0],dr[1]);
//		dist2=coord_distance(cop2[0],cop2[1],dr[0],dr[1]);
//		dist3=coord_distance(cop3[0],cop3[1],dr[0],dr[1]);

//		dist=dist1+dist2+dist3;

		int temp2;
		ans_x=dr[0];
		ans_y=dr[1];
		
		prev_max2=0;
		prev_max1=0;
		prev_max=0;
		prev_poss=0;
		prev_poss1=0;

		for(i=-1;i<2;i++) {
            for(j=-1;j<2;j++) {
                x = dr[0]+i;
                y = dr[1]+j;
                if(INRANGE(x,0,20) && INRANGE(y,0,20)) {
                	dist1=coord_distance(x,y,cop1[0],cop1[1]);
                	dist2=coord_distance(x,y,cop2[0],cop2[1]);
                	dist3=coord_distance(x,y,cop3[0],cop3[1]);

                    temp=min(dist1,min(dist2,dist3));
                	temp1=dist1+dist2+dist3;

                	if(dist1>dist2 && dist1<dist3){
                		temp2=dist1;
                	}
                	else if(dist2>dist1 && dist2<dist3){
                		temp2=dist2;
                	}
                	else{
                		temp2=dist3;
                	}

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
                    	prev_poss=temp;
                    	prev_max=poss*temp;
                    	prev_poss1=poss;
                    	prev_max1=temp1;
                    	prev_max2=temp2;
                    }
                    else if(poss*temp==prev_max){
                    	if(temp>prev_poss){//change temp to poss
                    		ans_x=x;
           	        		ans_y=y;
                    		prev_poss=temp;
                    		prev_max=poss*temp;
                    		prev_poss1=poss;
                    		prev_max1=temp1;
                    		prev_max2=temp2;
                    	}
                    	else if(temp2>prev_max2){
                    		ans_x=x;
           	        		ans_y=y;
                    		prev_poss=temp;
                    		prev_max=poss*temp;
                    		prev_poss1=poss;
                    		prev_max1=temp1;
                    		prev_max2=temp2;	
                    	}
                    	else if(temp1>prev_max1)
                    	{
                    		ans_x=x;
           	        		ans_y=y;
                    		prev_poss=temp;
                    		prev_max=poss*temp;
                    		prev_poss1=poss;
                    		prev_max1=temp1;
                    		prev_max2=temp2;
                    	}
                    	else if(poss>prev_poss1)
                    	{
                    		ans_x=x;
           	        		ans_y=y;
                    		prev_poss=temp;
                    		prev_max=poss*temp;
                    		prev_poss1=poss;
                    		prev_max1=temp1;
                    		prev_max2=temp2;
                    	}//new else if added
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

			//new code starts

			if((cop2_x==cop3_x && cop2_y==cop3_y)||(cop2_y==cop1_y && cop2_x==cop1_x)){
				if(cop2[1]<x){
					cop2_x=cop2[0]+1;
				}
				else if(cop2[1]>x){
					cop2_x=cop2[0]-1;
				}
				else{
					cop2_x=cop2[0];
				}
				cop2_y=cop2[1];
			}

			//code ends
		}

		if((cop2_x==cop3_x && cop2_x==cop3_y)||(cop2_y==cop1_y && cop2_x==cop1_x)){
			cop2_x=cop2[0];
			cop2_y=cop2[1];
		}
/*
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

/*
for(i=-1;i<2;i++) {
            for(j=-1;j<2;j++) {
                if(i!=0 && j!=0)
                	continue;
                
                if(INRANGE(cop1[0]+i,0,20) && INRANGE(cop1[1]+j,0,20)){
	                if(axis_distance(cop1[0]+i,x)<axis_distance(cop1[1]+j,y)){
                		cop1_x=cop1[0]+i;
                		cop1_y=cop1[1];      	
	                }
	                else if(axis_distance(cop1[0]+i,x)>axis_distance(cop1[1]+j,y)){
	                	cop1_x=cop1[0];
	                	cop1_y=cop1[1]+j;
	                }
	                else{
	                	cop1_x=cop1[0];
	                	cop1_y=cop1[1]+j;	
	                }
            	}

            	if(INRANGE(cop2[0]+i,0,20) && INRANGE(cop2[1]+j,0,20)){
	                if(axis_distance(cop2[0]+i,x)>axis_distance(cop2[1]+j,y)){
	                	cop2_x=cop2[0]+i;
	                	cop2_y=cop2[1];
	                }
	                else if(axis_distance(cop2[0]+i,x)<axis_distance(cop2[1]+j,y)){
	                	cop2_x=cop2[0];
	                	cop2_y=cop2[1]+j;
	                }
	                else{
	                	cop2_x=cop2[0];
	                	cop2_y=cop2[1]+j;	
	                }
            	}

            	if(INRANGE(cop3[0]+i,0,20) && INRANGE(cop3[1]+j,0,20)){
	                if(axis_distance(cop3[0]+i,x)>axis_distance(cop3[1]+j,y)){
	                	cop3_x=cop3[0]+i;
	                	cop3_y=cop3[1];
	                }
	                else if(axis_distance(cop3[0]+i,x)<axis_distance(cop3[1]+j,y)){
	                	cop3_x=cop3[0];
	                	cop3_y=cop3[1]+j;
	                }
	                else{
	                	cop3_x=cop3[0]+i;
	                	cop3_y=cop3[1];	
	                }
            	}
            }
        }*/



            /*
avg_x=cop1[0]+cop2[0]+cop3[0];
                    avg_x=(int)avg_x/3;

                    avg_y=cop1[1]+cop2[1]+cop3[1];
                    avg_y=(int)avg_y/3;

                    if(ans_x==dr[0] && ans_y==dr[1]){
                    	if(axis_distance(x,avg_x)>axis_distance(y,avg_y)){
                    		if(avg_y<y){
                    			if(INRANGE(y+1,0,20))
									ans_y=dr[1]+1;
								else
									ans_y=dr[1];
							}
							else if(avg_y>y){
								if(INRANGE(y-1,0,20))
									ans_y=dr[1]-1;
								else
									ans_y=dr[1];
							}
							else{
								ans_y=dr[1];
							}
							ans_x=dr[0];
                    	}
                    	else if(axis_distance(x,avg_x)<axis_distance(y,avg_y)){
                    		if(avg_x<x){
                    			if(INRANGE(x+1,0,20))
									ans_x=dr[0]+1;
								else
									ans_x=dr[0];
							}
							else if(avg_x>x){
								if(INRANGE(x-1,0,20))
									ans_x=dr[0]-1;
								else
									ans_x=dr[0];
							}
							else{
								ans_x=dr[0];
							}
							ans_y=dr[1];
                    	}
                    	else{
                    		if(avg_x<x){
                    			if(INRANGE(x+1,0,20))
									ans_x=dr[0]+1;
								else
									ans_x=dr[0];
							}
							else if(avg_x>x){
								if(INRANGE(x-1,0,20))
									ans_x=dr[0]-1;
								else
									ans_x=dr[0];
							}
							else{
								ans_x=dr[0];
							}
							ans_y=dr[1];
                    	}
                    }
            */