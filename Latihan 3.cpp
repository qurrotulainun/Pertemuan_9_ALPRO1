#include <iostream>
using namespace std;
int main ()
{
	int bilangan [2][3],a,b;
	for(a = 0; a < 2; a++)
	{
		for(b = 0; b < 3; b++)
		{
			cout<<"Masukkan index ke - "<<a<<", "<<b<<" adalah ";
			cin>>bilangan[a][b];
		}
	}
	cout<< "\nMencetak hasil dari inputan "<<endl;
	cout<< "============================ "<<endl;
	for(a = 0; a < 2; a++)
	{
		for(b = 0; b < 3; b++)
		{
			cout<<"Pada index ke - "<<a<<", "<<b<<" adalah "<<bilangan[a][b]<<endl;
		}
	}
	return 0;
}
