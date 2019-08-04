/*
SLOT: 4
Write a program to find the nth value in the series. 

Problem description 
here position starts at ( 0,0 ) and it will move in the direction right, top, left , bottom at the multiples of 10 . 
( consider a graph with origin and directions as x, y, -x, -y on moving in x, y it will be positive term and in -x 
and - y it will be in negative terms )



Example-1
Input: 1
Expected Output: (10,0)

Example-2
Input: 4
Expected Output: (-20 , -20 )

Example-3
Input: 3
Expected Output: (-20 , 20 )

PROGRAM IN C++ :
*/

#include <iostream>

using namespace std;

int values(int n){
    int x =0 , y = 0 , rem = 0;
    for (int i = 0 ; i < n ; i++)
    {
        rem = i % 4;
        if (rem == 0)
            x = x + 10*(i+1);
        else if (rem == 1)
            y = y + 10*(i+1);
        else if (rem == 2)
            x = x - 10*(i+1);
        else if (rem == 3)
            y = y - 10*(i+1);
    }
    cout<<x<<","<<y;

}
int main()
{
    int number;
    cin>>number;
    values(number);
    return 0;
}

