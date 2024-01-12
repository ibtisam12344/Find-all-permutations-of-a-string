#include <iostream>
#include <algorithm>
using namespace std;
void generatePermutations(string& str, int left, int right) {
	if (left == right) {
		cout << str << endl;
		return;
	}
	for (int i = left; i <= right; i++) {
		swap(str[left], str[i]);
		generatePermutations(str, left + 1, right);
		swap(str[left], str[i]);
	}
}
int main() {
	string input;
	cout << "Enter a string: ";
	cin >> input;
	sort(input.begin(), input.end());
	generatePermutations(input, 0, input.length() - 1);
	return 0;
}
