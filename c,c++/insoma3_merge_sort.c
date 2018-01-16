#include <cstdio>
 
int h[100001];
int g[100001];
 
int mergeSort(int a, int b) {
int ct = b-a;
if (ct == 1) return 0;
if (ct == 2) {
if (h[b-1] < h[a]) {
int s = h[b-1]; h[b-1] = h[a]; h[a] = s;
return 1;
}
return 0;
}
int mid = (a+b)/2;
int res = mergeSort(a, mid) + mergeSort(mid, b);
for (int i = a; i < b; i++) g[i] = h[i];
int p0 = a, p1 = mid, ph = a;
while (p0 < mid && p1 < b) {
if (g[p0] <= g[p1]) h[ph] = g[p0++];
else {
h[ph] = g[p1++];
res += mid-p0;
}
ph++;
}
while (p0 < mid) h[ph++] = g[p0++];
while (p1 < mid) h[ph++] = g[p1++];
return res;
}
 
int main() {
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++) scanf("%d", h+i);
int res = mergeSort(0, n);
printf("%d\n", res);
return 0;
}
