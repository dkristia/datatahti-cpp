#include <iostream>
using namespace std;

const int M = 1000000007;

int main() {
    int n;
    cin >> n;
    int t = 1;
    for (int i=1; i<=n; i++) t = (t*2)%M;
    cout << t;
}