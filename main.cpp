#include <iostream>

using namespace std;

int main()
{  

int quarters;
double total = 0;
cout << "Enter the number of quarters: "; 
cin >> quarters; 
total = total + quarters * 0.25; 
cout << "Total: " << total << endl;
if (cin.fail()) { cout << "Input error."; }


return 0;
}