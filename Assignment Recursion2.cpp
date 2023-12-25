#include <iostream>
using namespace std;

int multiply(int a, int b) {
    if (b == 0) return 0;
    return a + multiply(a, b - 1);
}

int main() {
    int a, b;
    cin>>a>> b;

    int result = multiply(a, b);
    cout<<result<<endl;

    return 0;
}

// Time complexity => 0(b) recursive function calls itself b times
// space complexity => 0(b)
