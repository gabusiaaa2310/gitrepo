/*
 * petla_cw4.cxx
 */

#include <iostream>
using namespace std;
int main(int argc, char **argv)

{
	for (int i=10; i<100; i++)
	{
		if (i%3==0&&i%2==0)
		cout<<i<<" ";
	}
	system("pause");
	return 0;
}

