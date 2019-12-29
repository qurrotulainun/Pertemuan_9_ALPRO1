#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int matA[2][2];
	int matB[2][2];
	int matC[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Data Matriks A ["<<i<<"]["<<j<<"] = ";cin>>matA[i][j];
		}
	}
	cout<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Data Matriks B ["<<i<<"]["<<j<<"] = ";cin>>matB[i][j];
		}
	}
	cout<<endl;
	cout<<"Matrik A + Matrik B : "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			matC[i][j]=matA[i][j]+matB[i][j];
			cout<<setw(3)<<matC[i][j];
		}
		cout<<endl;
	}
	return 0;
}
