/*
#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;
    int result;
    for (int i = 0; i < n - 1; ++i) {
        result = (previous % 10) + (current % 10);
        previous = current;
        current = result;
    }

    return result % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }

*/