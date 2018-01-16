	#include <new>
	#include <cmath>
	#include <iostream>
	#include <exception>
	#include <sys/time.h>
	 
	typedef unsigned long long ulong;
	 
	using namespace std;
	 
	class SieveOfAtkin
	{
	    private :
	        ulong Limit;
	        static bool *IsPrime;
	         
	    public :
	        SieveOfAtkin() { }
	        SieveOfAtkin(ulong Limit) : Limit(Limit)
	        {          
	            try
	            {
	                IsPrime = new bool[Limit];
	                 
	                for (ulong i = 0; i <= Limit; i++)
	                {
	                    IsPrime[i] = false;
	                }
	            }
	            catch(bad_alloc&)
	            {
	                cerr << "  Memory allocation unsuccessful." << endl;
	            }
	        }
	         
	        static long NoOfPrime;
	         
	        void PrimeGen();
	        void Display();
	         
	};
	 
	bool *SieveOfAtkin :: IsPrime;
	long SieveOfAtkin :: NoOfPrime = 0;
	 
	void SieveOfAtkin :: PrimeGen()
	{
	    ulong SqrtLimit = (ulong)ceil(sqrt((double)Limit));
	     
	    for (ulong x = 1; x <= SqrtLimit; x++)
	 
	        {
	            for (ulong y = 1; y <= SqrtLimit; y++)
	            {
	                ulong xsquared = x*x;
	                    ulong ysquared = y*y;
	 
	                    ulong n = (xsquared << 2) + ysquared; // n = 4*x*x + y*y
	 
	                    if (n <= Limit && (n % 12 == 1 || n % 12 == 5))
	                    {
	                        IsPrime[n] ^= true;
	                    }
	 
	                    n -= xsquared;  // n = 3*x*x + y*y
	             
	                    if (n <= Limit && n % 12 == 7)
	                    {
	                        IsPrime[n] ^= true;
	                    }
	 
	                    if (x > y)
	                    {
	                        n -= (ysquared << 1);  // n = 3*x*x - y*y
	                         
	                        if (n <= Limit && n % 12 == 11)
	                        {
	                                IsPrime[n] ^= true;
	                        }
	                    }
	 
	                }
	 
	        }
	         
	        for (ulong n = 5; n <= SqrtLimit; n++)
	 
	        {
	 
	        if (IsPrime[n])
	 
	                {
	 
	                    ulong s = n * n;
	 
	 
	 
	                    for (ulong k = s; k <= Limit; k += s)
	 
	                    {
	 
	                            IsPrime[k] = false;
	 
	                    }
	 
	                }
	 
	        }
	         
	        IsPrime[2] = true;
	        IsPrime[3] = true;
	}
	 
	void SieveOfAtkin :: Display()
	{  
	    int Counter = 0;
	     
	    for (ulong i = 2; i <= Limit; i++)
	    {
	        if (IsPrime[i])
	        {
	            cout << i <<endl;//from here to ouput primes
	             
	            Counter++;
	         
	            if (Counter == 19)
	            {
	                cout << endl;
	                Counter = 0;
	            }//till here to output primes
	             
	            NoOfPrime++;
	        }
	    }
	     
	    cout << endl << endl;
	}
	 
	unsigned GetTickCount()
	{
	        struct timeval tv;
	         
	        if (gettimeofday(&tv, NULL) != 0)
	        {
	                return 0;
	        }
	 
	        return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
	}
	 
	int main ()
	{
	    unsigned StartTime = GetTickCount();
	     
	    SieveOfAtkin Object = SieveOfAtkin(100);//no. upto which u want no. of prime no.
	     
	    Object.PrimeGen();
	     
	    Object.Display();
	 
	    cout << "  Number of Prime : " << Object.NoOfPrime << endl;
	//    cout << "  Execution time : " << (GetTickCount() - StartTime) << " ms." << endl << endl;
	     
	    return 0;
	}
