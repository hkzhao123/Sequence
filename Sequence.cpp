#include"Sequence.h"
#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;

Sequence::Sequence(string filename)
{ifstream infile;
infile.open(filename.data());
for(int i=0;i<11703;i++)
{getline(infile,str);}
infile.close();
}
Sequence::~Sequence()
{
}
int Sequence::length()
{
len = str.length();
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
