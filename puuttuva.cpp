#include <bits/stdc++.h>
using namespace std;

int main() {
    int big;
    cin >> big;
    vector<bool> is_present(big+1, false);
    for (int i = 1; i <= big-1; i++) {
        int num;
        cin >> num;
        is_present[num] = true;
    }
    for (int i = 1; i <= big; i++) {
        if (!is_present[i]) cout << i;
    }
}