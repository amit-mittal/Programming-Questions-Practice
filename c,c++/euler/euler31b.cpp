#include <iostream>

using namespace std;

int main()
{
    int p1, p2, p5, p10, p20, p50, p100;
    int combinations=0;

    for (p100=0; p100<=1; p100++)
    for (p50=0; p50<=3; p50++)
    for (p20=0; p20<=9; p20++)
    for (p10=0; p10<=19; p10++)
    for (p5=0; p5<=39; p5++)
    for (p2=0; p2<=99; p2++)
    for (p1=0; p1<=198; p1++)
    {
        if (p1+p2*2+p5*5+p10*10+p20*20+p50*50+p100*100==200)
        {
            combinations++;
        }
    }

    cout<<endl<<combinations+8<<endl;
}
