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
{
for(int l=0;l<len;l++)
{if(ss[l]==base)
num++;
}
cout<<base<<" of the number is "<<num<<endl;
}
string Sequence::longestConsecutive()
{int f[len],max=0;
f[0]=1;
string atcg;
string sss="ATCG";
for(int j=0;j<4;j++)
{for(int i=1;i<len;i++)
{if(ss[i]==ss[i-1]&&ss[i]==sss[j])
f[i]=f[i-1]+1;
else f[i]=1;
if(f[i]>f[max])
max=i;
}
for(int k=0;k<f[max];k++)
{atcg=sss[j]+atcg;
}
cout<<atcg<<endl;
max=0;
f[len]=0;
f[0]=1;
atcg="";
}
}
string Sequence::longestRepeated()
{
}
