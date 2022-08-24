#include <iostream>
#include<conio.h>
using namespace std;

int getMaxValue(int x, int y)
{
 if(x>y)
 {
 return x;
 }

 else
 return y;
}

void knapsack(int v[], int wt[], int n, int M)
{
 int K[n+1][M+1];
 int i,w;

 for(w=0;w<=M;w++)
 {
 K[0][w]=0;
 }

 for(i=0;i<=n;i++)
 {
 K[i][0]=0;
 }

 for(i=1;i<=n;i++)
 {
 for(w=1;w<=M;w++)
 {
 if(wt[i]<=w)
 {
 K[i][w] = getMaxValue(K[i-1][w], v[i] + K[i-1][w - wt[i]]);
 }

 else
 K[i][w]= K[i-1][w];
 }
 }

 int p,q;

 for(p=0;p<=n;p++)
 {
     for(q=0;q<=M;q++)
     {
         cout<<K[p][q]<<"\t";
     }
     cout<<endl;
 }

 cout<<endl;
 cout<<"Maximum profit: "<<K[n][M]<<endl;
}

int main()
{
 int n,i,M;
 cout<<"Enter number of items: ";
 cin>>n;
 cout<<endl;
 int wt[n+1], v[n+1];
 for(i=1;i<=n;i++)
 {
 cout<<"Enter weight for item "<<i<<": ";
 cin>>wt[i];
 cout<<"Enter value for item "<<i<<": ";
 cin>>v[i];
 }
 cout<<endl;
 cout<<"Enter Knapsack Capacity: ";
 cin>>M;
 knapsack(v,wt,n,M);

 getch();
 return 0;
}


