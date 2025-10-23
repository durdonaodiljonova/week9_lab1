#include <iostream>
#include <cmath>
using namespace std;

double sum (int n) {
    if (n == 0)
        return 1;
    else {
        return 1.0/(pow(n,2))+sum(n-1);

    }
}
int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"f("<< num <<") = "<<sum(num)<<endl;
    return 0;
}