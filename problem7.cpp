#include <iostream>
using namespace std;

double sum(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 1.0/(n*(n+2))+sum(n-1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout<<sum(num)<<endl;
    return 0;
}