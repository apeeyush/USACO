/*
ID: peeyush2
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
	string a, b;
	fin >> a >> b;
	int i=0;
	long long int proda=1, prodb=1 ;
	while ( a[i] != '\0' )
	{
		proda = proda * (int(a[i])-64);
		i++;
	}
	i=0;
	while ( b[i] != '\0' )
	{
		prodb = prodb * (int(b[i])-64);
		i++;
	}
	if (proda%47 == prodb%47)
		fout << "GO\n" ;
	else
		fout << "STAY\n" ;
	return 0;
}