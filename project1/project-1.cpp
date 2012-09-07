#include <iostream>
using namespace std;

void main(int argc, char *argv[])
{
    cout << "Paul Madsen" << endl;
    cout << "CS 3060-601" << endl;
    char nullCheck = *argv[0];
    int idx = 0;

    while (*argv[idx] != '\0')
    {
	
	cout << argv[idx] ;
	++idx;
	
    }
}
