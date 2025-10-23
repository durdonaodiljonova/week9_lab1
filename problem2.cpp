#include <iostream>
using namespace std;

void print(int n) {
    if (n > 50)
        return;
    cout << n << " ";
    print(n + 1);
}

int main() {
    print(1);
    return 0;
}
