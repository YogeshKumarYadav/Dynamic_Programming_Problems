#include<iostream>
using namespace std;

int coin_change(int coin[], int sum, int n)
{
    int t[n+1][sum+1];
    for(int i=0;i<=n;i++)
      t[i][0]=1;
    for(int j=1;j<=sum;j++)
         t[0][j]=0;

    for(int i=1;i<=n;i++)
      for(int j=1;j<=sum;j++)
          if(j>=coin[i-1])
             t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
          else
             t[i][j] = t[i-1][j];   
    
    for(int i=0;i<=n;i++)
    {  for(int j=0;j<=sum;j++)
         cout<<t[i][j]<<"  ";
    cout<<endl;
    }
    return t[n][sum]; 
}

int main()
{   
    int coin[]={3,5,10};
    int sum=20;
    int ways=coin_change(coin,sum,3);
    cout<<endl<<ways;
    return 0;
}