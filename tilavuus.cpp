#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float r;
    cin >> r;
    cout << setprecision(15) << (4*M_PI*powf(r, 3))/3;
}