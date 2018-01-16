#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>

using namespace std;

#define M 1003
#define N 1003

// A DFS based recursive function that returns true if a
// matching for vertex u is possible
bool bpm(bool bpGraph[M][N], int u, bool seen[], int matchR[])
{
    // Try every job one by one
    for (int v = 0; v < N; v++)
    {
        // If applicant u is interested in job v and v is
        // not visited
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true; // Mark v as visited
 
            // If job 'v' is not assigned to an applicant OR
            // previously assigned applicant for job v (which is matchR[v])
            // has an alternate job available.
            // Since v is marked as visited in the above line, matchR[v]
            // in the following recursive call will not get job 'v' again
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v], seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 
// Returns maximum number of matching from M to N
int maxBPM(bool bpGraph[M][N])
{
    // An array to keep track of the applicants assigned to
    // jobs. The value of matchR[i] is the applicant number
    // assigned to job i, the value -1 indicates nobody is
    // assigned.
    int matchR[N];
 
    // Initially all jobs are available
    memset(matchR, -1, sizeof(matchR));
 
    int result = 0; // Count of jobs assigned to applicants
    for (int u = 0; u < M; u++)
    {
        // Mark all jobs as not seen for next applicant.
        bool seen[N];
        memset(seen, 0, sizeof(seen));
 
        // Find if the applicant 'u' can get a job
        if (bpm(bpGraph, u, seen, matchR))
            result++;
    }
    return result;
}

int main() {
	int test, n;
	scanf("%d", &test);
	while(test--){
		int a[1005][2];
		map<int, int> x, y;
		bool bpGraph[M][N] = {0};
		
		scanf("%d", &n);
		int c1 = 0, c2 = 0;
		for(int i=0;i<n;++i){
			scanf("%d %d", &a[i][0], &a[i][1]);
			if(x.count(a[i][0])==0){
				x[a[i][0]] = c1;
				++c1;
			}
			if(y.count(a[i][1])==0){
				y[a[i][1]] = c2;
				++c2;
			}
		}
		
		for(int i=0;i<n;++i){
			int v1 = a[i][0], v2=a[i][1];
			int co1 = x[v1], co2 = y[v2];
			bpGraph[co1][co2] = 1;
		}
		
		cout<<maxBPM(bpGraph)<<endl;
	}
	return 0;
}