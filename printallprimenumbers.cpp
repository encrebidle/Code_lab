/*Take as input a Number N and Print all the prime numbers from 2 to N

Input Format
Input a number N

Constraints
Output Format
All prime numbers separated by Commas

Sample Input
18
Sample Output
2, 3, 5, 7, 11, 13, 17*/

#include<iostream>
#include<math.h>

using namespace std;

int isprime(int n)
{
     bool flag=true;

     for(long i=2;i<=sqrt(n);i++)
     {
          if(n%i==0)
          {
               flag=false;
               break;
          }
     }
     if(flag)
          return 1;
     else
          return 0;
}

int main()
{
     int n;
     cin>>n;

     int i=2;
     cout<<"2";
     for(i=3;i<=n;i++)
     {
          if(isprime(i)==1)
               cout<<", "<<i;
     }
}
