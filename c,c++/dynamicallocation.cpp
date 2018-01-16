#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
int i;

scanf("%d",&i);

int *arr =(int *)malloc(sizeof(int)*i);

if(!arr){
// Check if you did get the memory you asked for
printf("No memory. Terminating program\n");
exit(1);
}
else{
printf("Sufficient memory found\n");
}

free(arr);
