#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<stdio.h>
#include<iostream>
#include<string>
#using namespace std;

class Sequence
{public:
Sequence(string);
~Sequence();
int length();
int numberOf(char);
string longestConsecutive();
string longestRepeated();
int A;
int T;
int C;
int G;
int len;
string longestc;
string longestr;
string str;
}

#endif
