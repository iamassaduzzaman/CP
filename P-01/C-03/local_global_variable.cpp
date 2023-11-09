#include <bits/stdc++.h>
using namespace std;

// Global variable declaration
int global_var = 10;

// Function that uses local variables
void yo()
{
    // Local variable declaration
    int local_var = 5;

    cout << "Local variable: " << local_var << '\n';
    cout << "Global variable: " << global_var << '\n';

    // Modifying the local variable
    local_var = 20;

    cout << "Modified local variable: " << local_var << '\n';
}

int main()
{
    // Accessing the global variable
    cout << "Global variable: " << global_var << '\n';

    // Modifying the global variable
    global_var = 15;

    cout << "Modified global variable: " << global_var << '\n';

    // Calling the function that uses local variables
    yo();
    return 0;
}