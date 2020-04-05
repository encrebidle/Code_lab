/*Take a number as input.

Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

Write a function which returns true if the number is mirror-inverse and false otherwise, where inverse and mirror-inverse are defined as follows:

Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place. A number is called mirror-inverse if its inverse is equal to itself.

Print the value returned.

Input Format
First line contains an integer t as number of test cases and next t lines contain an integer.

Constraints
0 < N < 1000000000

Output Format
Print either true or false.

Sample Input
2
12345
32145
Sample Output
true
false
Explanation
Use functions. Write a function to get inverse and then use it check mirror-inverse property.*/

#include<bits/stdc++.h>

using namespace std;

bool check(long n)
{
     long int qwerty=n;
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
     if(r==qwerty)
          return true;
     return false;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          long int n;
          cin>>n;

          if(check(n))
               cout<<"true\n";
          else
               cout<<"false\n";
     }
}
