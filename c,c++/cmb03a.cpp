    #include <iostream>
    #include <stdlib.h>
    #include <string>

    using namespace std;

    int main()
    {
    int testcase;
    string a,b;
    scanf("%d",&testcase);
 
   while(testcase>0)
    {

	    cin >> a;
	    cin >> b;

    int count = 0;
    int previouscount = 0;
  
    if(a.find(b,0)!= string::npos)
    	cout << "1" << endl;
    else
    	cout << "0" << endl;

--testcase;
    }

    return 0;
    } 
