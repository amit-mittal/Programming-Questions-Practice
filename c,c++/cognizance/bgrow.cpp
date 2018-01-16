#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

#define s(n) scanf("%d",&n)

using namespace std;
 
struct Point {
	long long x, y;

	bool operator <(const Point &p) const {
			return x < p.x || (x == p.x && y < p.y);
	}
};
 
// 2D cross product of OA and OB vectors, i.e. z-component of their 3D cross product.
// Returns a positive value, if OAB makes a counter-clockwise turn,
// negative for clockwise turn, and zero if the points are collinear.
long long cross(const Point &O, const Point &A, const Point &B)
{
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}
 
// Returns a list of points on the convex hull in counter-clockwise order.
// Note: the last point in the returned list is the same as the first one.
vector<Point> convex_hull(vector<Point> P)
{
	int n = P.size(), k = 0;
	vector<Point> H(2*n);

	// Sort points lexicographically
	sort(P.begin(), P.end());

	// Build lower hull
	for (int i = 0; i < n; i++) {
			while (k >= 2 && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
			H[k++] = P[i];
	}

	// Build upper hull
	for (int i = n-2, t = k+1; i >= 0; i--) {
			while (k >= t && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
			H[k++] = P[i];
	}

	H.resize(k);
	return H;
}

long long int det(Point a, Point b){
	long long int val = a.x*b.y - a.y*b.x;
	return val;
}

int main(){
	int test, n, x, y;
	vector<Point> v;
	
	s(test);
	while(test--){
		v.clear();
		s(n);
		for(int i=0;i<n;++i){
			struct Point obj;
			s(x), s(y);
			obj.x = x;
			obj.y = y;
			v.push_back(obj);
		}

		vector<Point> ans = convex_hull(v);

		long long int final_ans = 0;
		if(ans.size()<4)
			final_ans = 0;
		else{
			for(int i=0;i<ans.size()-1;++i){
				final_ans+=det(ans[i], ans[i+1]);
			}
		}
		printf("%lld\n", final_ans);
	}

	return 0;
}