#include <stdio.h>

int main(){
	int test,i,j;
	char c;
	int less14,less17,less24,less27,same14,same17,same24,same27,count7,count4;

	scanf("%d",&test);

	getchar();
	while(test--){
	//	int a[10]={0},b[10]={0};
		less14=0,less17=0,less24=0,less27=0,same14=0,same17=0,same24=0,same27=0,count7=0,count4=0;

		c=getchar();
		while(c<='9'&&c>='0'){
		//	++a[s1[i]-'0'];
		//	++b[s2[i]-'0'];
			if(c=='0'||c=='1'||c=='2'||c=='3'){
				++less14;
			}
			else if(c=='4'){
				++same14;
			}
			else if(c=='5'||c=='6'){
				++less17;
			}
			else if(c=='7'){
				++same17;
			}
			c=getchar();
		}

		c=getchar();
		while(c<='9'&&c>='0'){
			if(c=='0'||c=='1'||c=='2'||c=='3'){
				++less24;
			}
			else if(c=='4'){
				++same24;
			}
			else if(c=='5'||c=='6'){
				++less27;
			}
			else if(c=='7'){
				++same27;
			}
			c=getchar();
		}

		if(same27<=less17){
			count7+=same27;
			same27=0;
		}
		else if(same27<=less17+less14){
			count7+=same27;

			less14=less14-(same27-less17);
			same27=0;
		}
		else if(same27<=less17+less14+same14){
			count7+=same27;

			same14=same14-(same27-less14-less17);
			same27=0;
			less14=0;
		}
		else{
			count7+=less17+less14+same14;
			less14=same14=0;
			same27-=count7;
		}

		if(same17<=less27+same27){
			count7+=same17;
		}
		else if(same17<=less27+less24+same27){
			count7+=same17;
			less24=less24-(same17-less27-same27);
		}
		else if(same17<=less27+less24+same24+same27){
			count7+=same17;

			same24=same24-(same17-less24-less27-same27);					
			less24=0;
		}
		else{
			count7+=less27+less24+same24+same27;
			same24=less24=0;
		}

		if(same24<=less14){
			count4+=same24;
			same24=0;			
		}
		else{
			count4+=less14;
			same24-=less14;
		}

		if(same14<=less24+same24){
			count4+=same14;
		}
		else{
			count4+=less24+same24;
		}
		

		while(count7--)
			putchar('7');

		while(count4--)
			putchar('4');

		putchar('\n');
	}

	return 0;
}