#include<iostream>
using namespace std;
unsigned x;
unsigned f1(unsigned a,unsigned b){
        return !(a&b)?a^b:f1(a^b,(a&b)<<1);
}
unsigned f2(unsigned a,unsigned b){
        return a>=b?((b==0)?a:f2(a-1,b-1)):f2(a,0);
}
unsigned f3(unsigned a,unsigned b){
        return !a?-1:~f2(f1(~(f3(a>>1,b)<<1),-(~&1)),b);
}
unsigned f4(unsigned a,unsigned b,unsigned c){
        return (!((min(a,b)-c&1))?(~((!c)?(max(a,b)):((((f3(a,c&~x)==~x&((f3(b,c&~x)==~x))?c:f4(a,b,c-1)))):((!c)?(max(a,b)):((((f3(a,c)&~x)==~x)&((f3(b,c)&~x)==~x))?c:f4(a,b,c-1)));
}
unsigned f5(unsigned a,unsigned b,unsigned c){
        unsigned x=f4(a,c,c);
        return c?(((x>~x)?~x:x)<=b?f5(a,b,c-1)+1:f5(a,b,c-1)):0;
}
unsigned f6(unsigned a,unsigned b){
        return f5(a,b,a);
}
int main(){
        unsigned a,b;
        while(cin>>a>>b){
                cout<<f6(a,b)<<endl;
        }
}
