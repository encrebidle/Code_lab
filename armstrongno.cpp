/*Take the following as input.

A number (N1)
A number (N2)
Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

Input Format
Constraints
0 < N1 < 100 N1 < N2 < 10000

Output Format
Sample Input
400
1000
Sample Output
407
Explanation
Each number in output is in separate line.*/


#include<bits/stdc++.h>

using namespace std;

bool check(long n)
{
     long qwerty=n,ans=0;
     while(n>0)
     {
          int digit = n%10;
          ans+=pow(digit,3);
          n/=10;
     }
     if(qwerty==ans)
          return true;
     return false;
}

int main()
{
     int n1,n2;
     cin>>n1>>n2;

     while(n1<=n2)
     {
          if(check(n1))
               cout<<n1<<"\n";
          n1++;
     }
}
