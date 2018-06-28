#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class Sequence
{public:
Sequence(string);
~Sequence();
int length();
int numberOf(char);
string longestConsecutive();
string longestRepeated();
int num;
int len;
int comlen(char *,char *);
string str;
string stt;
string s[11704];
string ss;
};

#endif
