ll int modPow(ll int a, ll int x, ll int p) {
    //calculates a^x mod p in logarithmic time.
    ll int res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll int modInverse(ll int a, ll int p) {
    //calculates the modular multiplicative of a mod m.
    //(assuming p is prime).
    return modPow(a, p-2, p);
}

ll int modBinomial(ll int n, ll int k, ll int p) {
// calculates C(n,k) mod p (assuming p is prime).

    ll int numerator = 1; // n * (n-1) * ... * (n-k+1)
    for (ll int i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
    }
    
    ll int denominator = 1; // k!
    for (ll int i=1; i<=k; i++) {
        denominator = (denominator * i) % p;
    }
    
    // numerator / denominator mod p.
    return ( numerator* modInverse(denominator,p) ) % p;
}