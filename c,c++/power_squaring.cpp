typedef unsigned long long lli; 
lli step(lli ch,lli st)
{
    if (st==0) return 1;
    if (st==1) return ch%mod;
    else
    {
        lli r=st%2==0? 1: ch;
        return ( step((ch*ch)%mod,st/2)*r)%mod;
    }
}
