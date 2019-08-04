/*

SLOT: 1
NOTE: Time is 30 minutes to solve this problem using any of these programming languages c, c+ +, java, Perl, python 2.7

Problem statement 

One programming language has the following keywords that cannot be used as identifiers:
break, case, continue, default, defer else, for, func, goto, if, map, range, return, Struct, type, var

Write a program to find if the given word is keyword or not

Example-1
Input: defer
Expected Output: defer is a keyword

Example-2
Input: While
Expected Output: while is not a keyword

PROGRAM IN C++ :
*/

#include <iostream>

using namespace std;

int main()
{
    string data;
    cin>>data;

    if(data == "break"    || data == "case" 
    ||data == "continue"  ||data == "default"
    ||data == "defer"     ||data == "else" 
    ||data == "for"       ||data == "func" 
    ||data == "goto"      ||data == "if"
    ||data == "map"       ||data == "range"
    ||data == "return"    ||data == "struct" 
    ||data == "type"      ||data == "var")
    
    cout<<data<<" is a keyword";
    else
    cout<<data<<" is not a keyword";


    return 0;
}

