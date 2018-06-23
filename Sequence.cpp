#include"Sequence.h"
#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;

Sequence::Sequence(string filename)
{ifstream infile;
infile.open(filename.data());
int i=0;
while(getline(infile,str)&&i<11704)
{s[i]=str;
i++;
}
for(int j=0;j<=11703;j++)
ss=ss+s[j];
infile.close();
}
Sequence::~Sequence()
{
}
int Sequence::length()
{
len = ss.length();
cout<<len<<endl;
}
int Sequence::numberOf(char base)
{for(int i=0;i<len;i++)
{if(str[i]==base)
num++;
}
cout<<base<<"of the number is"<<num<<endl;
num=0;
}
string Sequence::longestConsecutive()
{
}
string Sequence::longestRepeated()
{
}
