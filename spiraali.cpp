#include <bits/stdc++.h>
using namespace std;

int main () {
    cin.tie(0) -> sync_with_stdio(0);
    uint64_t y, x;
    cin >> y >> x;
    if (x >= y) {
    	uint64_t startpos;
    	if (x%2!=0) {
    		// X^2 muodostaa nelion, jonka oikea yläkulma on aloituspiste
    	   	startpos = x*x;
    		cout << startpos-y+1 << endl;
    	} else {
    		startpos = (x-1)*(x-1)+1;
    		cout << startpos+y-1 << endl;
    	}
    } else {
    	uint64_t startpos;
    	if (y%2==0) {
    		startpos = y*y;
    		cout << startpos-x+1 << endl;
    	} else {
			startpos = (y-1)*(y-1)+1;
			cout << startpos+x-1 << endl;
    	}
    }
}
