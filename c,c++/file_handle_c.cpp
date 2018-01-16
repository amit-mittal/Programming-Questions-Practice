#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

using namespace std;

int main ()
{
char input[100000];
string line;
ofstream myfile;

myfile.open ("example.txt",ios::out);

gets(input);
myfile << input;

myfile.close();

ifstream file;

file.open("example.txt");

while(!file.eof()) // To get you all the lines.
        {
	        getline(file,line); // Saves the line in STRING.
	        cout<<line; // Prints our STRING.
        }

file.close();

return 0;
}
