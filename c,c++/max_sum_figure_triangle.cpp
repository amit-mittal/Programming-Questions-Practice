/*
All submissions for this problem are available.

Let's consider a triangle of numbers in which a number appears in the first line, two numbers appear in the second line, three in the third line, etc. Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:

    on each path the next number is located on the row below, more precisely either directly below or below and one place to the right;
    the number of rows is strictly positive, but less than 100
    all numbers are positive integers between O and 99.

Input

In the first line integer n - the number of test cases (equal to about 1000).
Then n test cases follow. Each test case starts with the number of lines which is followed by their content.
Output

For each test case write the determined value in a separate line.
Example

Input:
2
3
1
2 1
1 2 3
4 
1 
1 2 
4 1 2
2 3 1 1 

Output:
5
9

*/

    #include <iostream>
    #include <algorithm>
    #include <cstdio>
    #include <cstdlib>
     
    using namespace std;
     
     
    int main(){
     
    int no_of_testcases;
    scanf("%d",&no_of_testcases);
    int rows;
    for(int i = 0;i < no_of_testcases;i++){
    scanf("%d",&rows);
    int triangle[rows][rows];
     
    for(int j=0;j<rows;j++){
    for(int k=0;k<j+1;k++)
    scanf("%d",&(triangle[j][k]));
    }
    //compute the maximum path distance ground up .. from bottom to the top
    for(int k=rows-2;k>=0;k--){
    for(int j=0;j<k+1;j++){
    triangle[k][j] = triangle[k][j]+max(triangle[k+1][j],triangle[k+1][j+1]);
    }
    }
    printf("%d \n",triangle[0][0]);
    }
    } 
