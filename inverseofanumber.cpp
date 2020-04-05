/*Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

Print the value returned.

Input Format
Integer

Constraints
0 < N < 1000000000

Output Format
Integer

Sample Input
32145
Sample Output
12543
Explanation
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. 
E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, “5” is at 1st place, 
therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.*/
#include<bits/stdc++.h>

using namespace std;

long check(int n)
{
     long int x=0,r=0;
     while(n>0)
     {
          int a=n%10;
          n/=10;
          x++;
          a--;
          if(a!=4)
               r+=(pow(10,a)*x);
          else
               r+=10000*x;
     }
     return r;
}

int main()
{
     long int n;
     cin>>n;

     cout<<check(n);
}
