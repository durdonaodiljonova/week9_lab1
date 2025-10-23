#include <iostream>
using namespace std;

int product(int a, int b) {
    if (b==0) {
        return 0;
    }
    else if (b>0){
        return a+product(a,b-1);
        }
}
int main() {
    int a,b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << product(a,b) << endl;
    return 0;
}