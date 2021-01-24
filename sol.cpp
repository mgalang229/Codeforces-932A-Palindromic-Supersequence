#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	// the answer is s + reverse(s) since this will create a palindrome
	// more importantly, the first half of the string (s) will be a valid subsequence
	cout << s;
	reverse(s.begin(), s.end());
	cout << s << '\n';
	return 0; 
}
