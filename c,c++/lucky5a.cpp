#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

using namespace std;

int main ()
{
char input[100000];
string line;
ofstream myfile;
int test,total,count,i;

scanf("%d",&test);
getchar();

while(test--)
{
count=0;
total=0;
i=0;

cin.get>>input;

cout<<"hi";
while(input[i]!='\0')
        { 
	        if ((input[i]=='4')||(input[i]=='7'))
		{
			count+=1;
		}
		total+=1; 
        }
cout<<total-count<<endl;

}

return 0;
}
