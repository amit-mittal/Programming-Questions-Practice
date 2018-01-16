//header file is cstdlib for atoi

gets(s1);
	for(int z=0;z<8;z++)//8 is also after which you want to stop the loop
	{
		r=atoi(&s1[z]);z+=6;//6 is after that particular reading where the next integer is, this works for DD-MMM-YYYY
		cout<<r<<endl;
	
	}
//this program can be used to read ony integers from a string
