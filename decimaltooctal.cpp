/*Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int a[n];
     int i=0;

     while(n>0)
     {
          a[i]=n%8;
          i++;
          n/=8;
     }
     for(n=i-1;n>=0;n--)
          cout<<a[n];
}
