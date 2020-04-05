/*Take as input N, a number. Print the pattern as given in output section for corresponding input.

Input Format
Enter value of N

Constraints
Output Format
All numbers and stars are Space separated

Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * * */

#include<iostream>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int i,j;

     for(i=0;i<n;i++)
     {
          for(j=1;j<=n-i;j++)
               cout<<j<<" ";
          for(j=0;j<2*i-1;j++)
               cout<<"* ";
          cout<<"\n";
     }
}
