// C++ Program to demonstrate that we can use memset() to
// set all values as boolean data types also
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int prime[5];
	// memset(prime, true, sizeof(prime));
	// // If you print without using boolalpha it will print
	// // like this
	// for (int i = 0; i < 5; i++)
	// 	cout << prime[i] << " ";
	// cout << "\n";



	// ******************** 
	bool prime[5];
	memset(prime, true, sizeof(prime));
	// If you print without using boolalpha it will print
	// like this
	for (int i = 0; i < 5; i++)
		cout << prime[i] << " ";
	cout << "\n";



	// If you use boolalpha it will print like this
	// for (int i = 0; i < 6; i++)
	// 	cout << boolalpha << prime[i] << " ";

	return 0;
}

