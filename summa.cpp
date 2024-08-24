#include <stdio.h>
#include <string.h>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int main () {
    string line;
    getline(cin, line);
    stringstream input(line);
    string segment;
    long long summa = 0;
    while(getline(input, segment, ' ')) {
        summa += stoi(segment);
    };
    cout << summa;
    return 0;
}