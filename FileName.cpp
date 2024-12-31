#include <iostream>
#include "String.h"
using namespace std;
int String::objectCount(0);


int main()
{
	String k = "Misha";
	String l = k;
	cout << l.getStr() << endl;
	cout << k.getStr() << endl;

	return 0;
}