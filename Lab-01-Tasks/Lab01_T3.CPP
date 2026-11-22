#include <iostream>
using namespace std; // BUG 1: missing ; after std
int main()
{
cout << "Welcome to the lab!" << endl; // BUG 2: missing ; after endl
cout << "Today we learn \"C++\"." << endl; // BUG 3: full stop was inside quotes, it prints "C++." instead of "C++".
cout << "Files are in C:\\Lab01" << endl; // BUG 4: single \ in C:\Lab01, need \\ to print one \
cout << "Bye!" << endl;
return 0; // BUG 5: missing ; after return 0
}
