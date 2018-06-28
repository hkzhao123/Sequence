#include"Sequence.h"
#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
#include<fstream>
#include<algorithm>
#include<time.h>
#include<bits/stdc++.h>
#define MAXCHAR 1200000
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
{ss.clear();
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
int Sequence::comlen( char *p, char *q ){
    int i = 0;
    while( *p && (*p++ == *q++) )
        ++i;
    return i;
}
 
int pstrcmp( const void *p1, const void *p2 ){
    return strcmp( *(char* const *)p1, *(char* const*)p2 );
}
string Sequence::longestRepeated()
{
const int len1 = ss.length();
char *a =  new char[MAXCHAR];
char** c = new char* [MAXCHAR];
int maxlen=99,maxi=0;
int i=0;
while(i<len1)
{c[i]=&a[i];
a[i]=ss[i++];
}
a[i]='\0';
qsort(c,len1,sizeof(char*),pstrcmp);
for(int i=0;i<len1-1;i++)
{if(comlen(c[i],c[i+1])>maxlen)
{maxlen = comlen(c[i],c[i+1]);
maxi=i;
}
}
stt.assign(c[maxi],maxlen);
delete []a;
delete []c;
cout<<stt<<endl;
}
