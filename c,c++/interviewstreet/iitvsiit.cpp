/*
At InterviewStreet we have M machines to process the jobs(submissions). These machines work in parallel, so as to minimize the overall completion time of all jobs. 

N jobs arrive in some order and they need to be fed in these M machines. Jobs are assigned to machines in contiguous blocks i.e say first k1 jobs are fed to first machine , next k2 jobs to second machine, next k3 jobs to third machine and so on.

All the machines are equal in terms of their processing power and within a single machine all jobs are done serially, so the total time a machine takes to finish all the jobs assigned to it is the sum of processing time of these jobs.

Write a program that partitions the given sequence of jobs in M groups and assign them to M machines in a way that minimizes the time to complete all jobs.

Input Format :

First line of input contains two space separated integers N and M, N is the number of jobs and M is the number of machines.

Then follow N lines each containing an integer which is the processing time required to complete that job.

Output Format :

Output a single integer which is the minimum time at which all jobs can get completed.  

Sample Input :
5 3
3
6
7
5
3
Sample Output :
9
 
Explanation :
 
Some ways to partition these 5 tasks in 3 groups are (3 6) (7) (5 3) , (3) (6 7) (5 3), (3) (6 7 5) (3), (3 6 7) (5) (3) etc. In case of partition (3 6) (7) (5 3) first machine complete all the assigned jobs in 9 units of time, second machine does that in 7 units of time and the third machine complete all its jobs in 8 units of time. Since these machines work in parallel, the overall completion time of all jobs is 9 units of time and this this is also the minimum completion time one can achieve.
 
Constraints :
 
1 <= M <= N <= 100,000
0 <= T <= 100,000 , T is the time taken by any job to get processed in a machine.
*/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<numeric>

using namespace std;

int n;

int recur(int a[],int start,int m,int rem)
{
    int max,i;
    if(m==2)
        return accumulate(a+start,a+n,0);
    for(i=start+1;i<=rem-m-1;++i)
    {
        max=recur(a,i,m-1,n-i);
        if(accumulate(a+start,a+i,0)>max)
            return max;
    }

}

int main()
{
    int m,i,j,max,a[100005];
    
    scanf("%d %d",&n,&m);
    
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    
    for(i=1;i<=n-m;++i)
    {
        max=recur(a,i,m,n-i);
        if(accumulate(a,a+i,0)>max)
            break;
    }
    
    return 0;   
}
