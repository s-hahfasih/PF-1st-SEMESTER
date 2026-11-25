#include <iostream>
using namespace std; // BUG 1: missing ; after std

int main()
{
    cout << "Welcome to the lab!" << endl; // BUG 2: missing ; at end 
    cout << "Today we learn \"C++.\" " << endl; // BUG 3: Cout -> cout, capital C was wrong
    cout << "Files are in C:\\Lab01" << endl; // BUG 4: single \ -> double \\ for path
    cout << "Bye!" << endl; // BUG 5: missing closing " before <<
    return 0;
