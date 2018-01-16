#include <new>
002	#include <cmath>
003	#include <iostream>
004	#include <exception>
005	#include <sys/time.h>
006	 
007	typedef unsigned long long ulong;
008	 
009	using namespace std;
010	 
011	class SieveOfEratosthenes
012	{
013	    private :
014	        ulong Limit;
015	        static bool *IsPrime;
016	     
017	    public :
018	        SieveOfEratosthenes() { }
019	        SieveOfEratosthenes(ulong Limit) : Limit(Limit)
020	        {          
021	            try
022	            {
023	                IsPrime = new bool[Limit + 1];
024	                 
025	                for (ulong i = 0; i <= Limit; i++)
026	                {
027	                    IsPrime[i] = true;
028	                }
029	            }
030	            catch(bad_alloc&)
031	            {
032	                cerr << "  Memory allocation unsuccessful." << endl;
033	            }
034	        }
035	         
036	        static long NoOfPrime;
037	         
038	        void PrimeGen();
039	        void Display();
040	};
041	 
042	bool *SieveOfEratosthenes :: IsPrime;
043	long SieveOfEratosthenes :: NoOfPrime = 0;
044	 
045	void SieveOfEratosthenes :: PrimeGen()
046	{
047	    for (ulong i = 2; i*i <= Limit; i++)
048	        {
049	            if (IsPrime[i])
050	                {
051	                    for (ulong j = i * 2; j <= Limit; j += i)
052	                    {
053	                        IsPrime[j] = false;
054	                    }
055	                }
056	        }
057	}
058	 
059	void SieveOfEratosthenes :: Display()
060	{
061	    int Counter = 0;
062	     
063	    for (ulong i = 2; i <= Limit; i++)
064	    {
065	        if (IsPrime[i])
066	        {
067	            /*cout << i << "\t";
068	             
069	            Counter++;
070	         
071	            if (Counter == 19)
072	            {
073	                cout << endl;
074	                Counter = 0;
075	            }*/
076	             
077	            NoOfPrime++;
078	        }
079	    }
080	     
081	    cout << endl << endl;
082	}
083	 
084	unsigned GetTickCount()
085	{
086	        struct timeval tv;
087	         
088	        if (gettimeofday(&tv, NULL) != 0)
089	        {
090	                return 0;
091	        }
092	 
093	        return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
094	}
095	 
096	int main ()
097	{
098	    unsigned StartTime = GetTickCount();
099	     
100	    SieveOfEratosthenes Object = SieveOfEratosthenes(10000000LLU);
101	     
102	    Object.PrimeGen();
103	     
104	    Object.Display();
105	 
106	    cout << "  Number of Prime : " << Object.NoOfPrime << endl;
107	    cout << "  Execution time : " << (GetTickCount() - StartTime) << " ms." << endl << endl;
108	     
109	    return 0;
110	}
