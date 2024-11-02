#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 444;
    if (isPrime(num)) {
        cout << num  << "  " << true;
    }
    else {
      cout << num  << "  " << false;
    }
    return 0;
}
