#include <bits/stdc++.h>
using namespace std;

// Checks if kth bit of x is set (1) or (0)
int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}

// Prints the positions of all set (1) bits in binary representation of x
void print_on_bits(int x)
{
    for (int k = 0; k < 32; k++)
    {
        if (check_kth_bit(x, k))
            cout << k << " "; // prints the position of the set bit
    }
    cout << '\n';
}

// Returns the count of set (1) bits in binary representation of x
int cout_on_bits(int x)
{
    int ans = 0;
    for (int k = 0; k < 32; k++)
    {
        if (check_kth_bit(x, k))
            ans++;
    }
    return ans;
}

// Check if x is even or odd
bool is_even(int x)
{
    if (x & 1)
        return false;
    else
        return true;
}

// Sets the kth bit of x to 1 and returns the result
int set_kth_bit(int x, int k)
{
    return x | (1 << k);
}

// Sets the kth bit of x to 1 and returns the result
int unset_kth_bit(int x, int k)
{
    return x & (~(1 << k));
}

// Toggles the kth bit of x and returns the result
int toggle_kth_bit(int x, int k)
{
    return x ^ (1 << k);
}

// Checks if x is a power of 2
bool check_power_of_2(int x)
{
    return cout_on_bits(x) == 1;
}

int main()
{
    // Bitwise AND (&)
    cout << (12 & 25) << '\n'; // output: 8

    // Bitwise OR (|)
    cout << (12 | 25) << '\n'; // output: 29

    // Bitwise XOR(^)
    cout << (12^25) << '\n'; // output: 21

    // Bitwise NOT (~)
    cout << ~12 << '\n'; // output: -13

    // Left Shit (<<)
    cout << (3 << 2) << '\n'; // output: 12

    // Right Shit (>>)
    cout << (12 >> 2) << '\n'; // output: 3

    // Difference between 1 << x and 1LL << x
    int x = 31;
    cout << (1 << x) << '\n'; // output: -2147483648 (due to overflow)
    cout << (1LL << x) << '\n'; // output: 2147483648 (correct value)

    x = 11; // binary representation: 1011

    cout << "Check 2nd bit of 11: " << check_kth_bit(x, 2) << '\n'; // output: 0
    cout << "Set bits in 11 are at positions: ";
    print_on_bits(x); // output: 0 1 3
    cout << "Number of set bits in 11: " << cout_on_bits(x) << '\n'; // output: 3
    cout << "Is 11 even? " << is_even(x) << '\n'; // output: 0 (false)
    cout << "11 after setting 2nd bit: " << set_kth_bit(x, 2) << '\n'; // output: 15
    cout << "15 after unsetting 2nd bit: " << unset_kth_bit(15, 2) << '\n'; // output: 11
    cout << "11 after toggling 3rd bit: " << toggle_kth_bit(x, 3) << '\n'; // output: 3
    cout << "Is 8 a power of 2: " << check_power_of_2(8) << '\n';  // output: 1 (true)

    return 0;
}