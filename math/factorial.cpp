// C++ program to find factorial of given number
#include<iostream>

unsigned int fact[num];
unsigned int factorial_dp(unsigned int n) {
    fact[0]=1;
    fact[1]=1;
    for(unsigned int i=2;i<=n;i++) {
        fact[i]=i*fact[i-1];
    }
    return fact[n];
}

// function to find factorial of given number
unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}


// Driver code
int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num)
              << std::endl;
    std::cout << "Factorial of " << num << " is " << factorial_dp(num) << std::endl;
    return 0;
}
