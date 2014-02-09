/*
ID: peeyush2
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
	int count, i, ia[10], fa[10], j, no, no_div;
	string a[10], name, tmp;
	fin >> count;
	for (i=0;i<count;i++)
	{
		fin >> a[i];
	}
	a[i] = '0';
	for (i=0;i<count;i++)
	{
		fin >> name;
		for (j=0;j<count;j++)
		{
			if ( name == a[j])
				no = j;
		}
		fin >> ia[no];
		fin >> no_div;
		for (int j = 0; j < no_div; j++)
		{
			fin >> tmp;
		}
		for (int j = 0; j < count; j++)
		{
			fout << ia[j];
		}
		fout << ia[j];
	}
	
	return 0;
}