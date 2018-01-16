/*
Chef has decided to retire and settle near a peaceful beach. He had always been interested in literature & linguistics. Now when he has leisure time, he plans to read a lot of novels and understand structure of languages. Today he has decided to learn a difficult language called Smeagolese. Smeagolese is an exotic language whose alphabet is lowercase and uppercase roman letters. Also every word on this alphabet is a meaningful word in Smeagolese. Chef, we all know is a fierce learner - he has given himself a tough exercise. He has taken a word and wants to determine all possible anagrams of the word which mean something in Smeagolese. Can you help him ?
Input

Input begins with a single integer T, denoting the number of test cases. After that T lines follow each containing a single string S - the word chef has chosen. You can assume that 1 <= T <= 500 and 1 <= |S| <= 500. You can also assume that no character repeats more than 10 times in the string.
Output

Output one line per test case - the number of different words that are anagrams of the word that chef has chosen. As answer can get huge, print it modulo 10^9 + 7
Example

Input:
4
ab
aa
aA
AAbaz

Output:
2
1
2
60

Description: In first case "ab" & "ba" are two different words. In third case, note that A & a are different alphabets and hence "Aa" & "aA" are different words.
*/

#include<iostream>
#include<stdio.h>

using namespace std;

unsigned long long int factorial(unsigned long long int n)
{
unsigned long long int p=1;
while(n>0)
	{
	p*=n;
	n--;
	if(p>1000000007)
		p=p%1000000007;
	}
return p;
}

int main()
{
unsigned long long int test,num,i;
char string[505];

scanf("%lld",&test);

while(test--)
{
	int array[140]={0};
	scanf("%s",string);
	for(i=0;string[i]!='\0';++i)
	{
		++array[(int)string[i]];
	}

	num=factorial(i);

	for(i=0;i<130;++i)
	{
		if(array[i]>1)
		{
			num=num/factorial(array[i]);
		}
	}	
	printf("%lld\n",num);
}

return 0;
}
