#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int main()
{
	set<double> answer;
    for (double a = 2; a<=100;a++)
		for (double b = 2;b<=100;b++)
			answer.insert(pow(a,b));
	cout << answer.size();  
return 0;
}//set takes only distict values
