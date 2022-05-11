// C++ program to demonstrate
// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

void demo()
{
	// static variable
	static int count = 0;
	cout << count << " ";
	
	// value is updated and
	// will be carried to next
	// function calls
	count++;
}
//you can think it as a loop; works until the program is finished.
int main()
{
	for (int i=0; i<5; i++)	
		demo();
	return 0;
}
