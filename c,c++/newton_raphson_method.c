
#include<stdio.h>
#include<math.h>
#define e .00001
#define F(x) (x)*(x)-3*(x)+2
#define Fd(x) 2*(x)-3

int main(void){
    float x1,x2,f,fd,root;
    x1=2.333;
    f=F(x1);
    fd=Fd(x1);

    again: 
          printf("x1: %f\t",x1);
          x2 = x1-(f/fd);
          printf("x2: %f\n",x2);
          if(fabs(x2-x1)>e){
                  x1=x2;
                  f=F(x1);
                  fd=Fd(x1);
                  goto again;                 
          }else root = x2;
    printf("The root is: %f\n",root);

    float equvalue = F(root);
    printf("Value of F(root) is: %f",equvalue);
    return 0;

}

/* #include<stdio.h>
#include<math.h>
#define f(x) (x+log(x)-2)
#define d(x) (1+(1/x))

void main()
{
	float x,y,a,b,i;
	printf("\n Enter the values of a and b:");
	scanf("%f\t%f",&a,&b);
	x=(a+b)/2;
	for(i=1;i<=10;i++)
		{
			y=x-(f(x)/d(x));
			x=y;
		}
	printf("\n The required root is: %f",x);
	getch();
}                        */
