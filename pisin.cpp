#include <iostream>
using namespace std;

int main () {
    string dna;
    cin >> dna;
    int longest = 0;
    int streak = 1;
    char prev;
    for (int i=0;i<dna.length();i++) {
        char current = dna[i];
        if (current==prev) streak++; else streak = 1;
        if (streak > longest) longest = streak;
        prev = current;
    }
    cout << longest;
}