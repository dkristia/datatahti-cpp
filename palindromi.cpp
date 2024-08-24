#include <bits/stdc++.h>
using namespace std;

typedef uint64_t u64;
typedef int64_t i64;

int main() {
	u64 n;
	u64 k;
	cin >> n >> k;
	string palindrome = "p";
	for (i64 i = 0; i < (i64)k-2; i++) {
		palindrome += "a";
	}
	if (k != 1) {
		palindrome += "p";
	}
	for (u64 i = 0; i < n-k; i++) {
		palindrome += char(98+i % 10);
	}
	cout << palindrome << endl;
}
