//n queen problem: Backtracking technique that uses recursive
#include <iostream>
using namespace std;
const int n=8;
int a[n],b[2*n-1],c[2*n-1],x[n],d;
void result_solution()
{ 
	for (int i=1;i<=n;i++)
		cout<<x[i]<<" ";
	cout<<endl;
	d++;// The number of solutions
}
void  Queen(int i)
{
	if (i>n)
        result_solution();
	else
	for (int j=1;j<=n;j++)
   		if ((a[j]==0) && (b[i+j]==0) && (c[i-j+n]==0)){
            x[i]=j;
            a[j]=1;
            b[i+j]=1;
            c[i-j+n]=1;

            Queen(i+1);
            //Backtracking
            
            a[j]=0;
            b[i+j]=0;
            c[i-j+n]=0;
   		}
}
int main()
{
	d=0;
	Queen(1);
	cout<<"The total number of solutions: "<<d<<endl;
}