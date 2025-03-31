#include <iostream>
using namespace std;

// Function to calculate factorial recursively
long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

// Function to compute the number of ways to choose k from n
double computeWays(int n, int k) {
    return static_cast<double>(factorial(n)) / (factorial(k) * factorial(n - k));
}

// Function to get and validate user input
void getInfo(int& n, int& k) {
    cout << "How many balls (1-12) are in the pool to pick from? ";
    while (!(cin >> n) || n < 1 || n > 12) {
        cout << "Input Error! There must be between 1 and 12 balls.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "How many balls (1-12) are in the pool to pick from? ";
    }

    cout << "How many balls (1-" << n << ") will be drawn? ";
    while (!(cin >> k) || k < 1 || k > n) {
        cout << "Input Error! ";
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "How many balls (1-" << n << ") will be drawn? ";
    }
}
