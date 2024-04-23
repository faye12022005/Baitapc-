//combination Problem.
//Backtracking technique that uses recursive
#include<iostream>
using namespace std;
int x[1000];
int n,m,d=0;
void output()
{
	for (int i=1;i<=m;i++)
	cout<<x[i]<<" ";
		cout<<endl;
	d++;
}
void combination(int i)
{
	for (int j=x[i-1]+1;j<=n-m+i;j++)
	{
	    x[i]=j;
		if (i==m)  	
		    output();
		else           
		    combination(i+1);
	}
}
int main()
{
	cout<<"\nEnter the number n= ";cin>>n;
	cout<<"\nEnter the number m= ";cin>>m;
	combination(1);
	cout<<"\nTotal number of solutions:"<<d;
}