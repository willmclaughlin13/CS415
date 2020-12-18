#include <iostream>
using namespace std;

int main ()
{
	float v1, v2;
	cin >> v1 >> v2;
	cout.setf (ios::fixed);
	cout.setf (ios::showpoint);
	cout.precision (20);

	cout << v1 << endl << v2 << endl;
	return 0;
}
