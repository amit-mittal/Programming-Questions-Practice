#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main(){
	int test,ans,t;
	char ch;

	scanf("%d",&test);
	getchar();
	for(t=1;t<=test;++t){
		ans = 1;
		stack<char> s;
		stack<char> temp;
		
		while(1){
			ch = getchar();

			if(ch=='\n' || ch==EOF)
				break;

			if(ch==':'){
				if(!temp.empty() && temp.top()!=':')
					temp.push(ch);
				else if(temp.empty())
					temp.push(ch);
				else if(!temp.empty() && temp.top()==':')
					continue;
			}
			else if(ch=='('){
				if(!temp.empty() && temp.top()==':'){
					temp.pop();
					temp.push(ch);
				}
				else
					s.push(ch);
			}
			else if(ch==')'){
				if(!temp.empty() && (temp.top()==':' || temp.top()=='(')){
					if(!s.empty() && s.top()=='(' ){
						s.pop();
						temp.pop();
						temp.push('(');
					}
					else {
						temp.pop();
					}
				}
				else if(temp.empty()){
					if(!s.empty() && s.top()=='(' ){
						s.pop();
					}
					else {
						ans=0;
					}
				}
			}
			else{
				if(!temp.empty() && temp.top()==':')
					temp.pop();
			}
		}

		if(!s.empty())
			ans = 0;

		if(ans==0)
			printf("Case #%d: NO\n",t);
		else
			printf("Case #%d: YES\n",t);
	}

	return 0;
}