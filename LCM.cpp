/*Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format
Constraints
0 < N1 < 1000000000 0 < N2 < 1000000000

Output Format
Sample Input
4 
6
Sample Output
12
Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n1,n2,x=2,ans=1;
     cin>>n1>>n2;

     while(x<max(n1,n2))
     {
          if(n1%x==0&&n2%x==0)
          {
               ans*=x;
               n1/=x;
               n2/=x;
          }
          else
               x++;
     }
     ans*=n1*n2;
     cout<<ans;
}
