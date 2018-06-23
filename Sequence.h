#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
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
string longestc;
string longestr;
string str;
};

#endif
