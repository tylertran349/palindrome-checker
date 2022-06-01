#include <iostream>
using namespace std;

int main() {
	string text;
	string backwardsText = "";
	cout << "Enter text: ";
	getline(cin, text);
	for(int i = text.length() - 1; i >= 0; i--) {
		backwardsText += text[i];
	}
	if(text == backwardsText) {
		cout << text << " is a palindrome." << endl;
	} else {
		cout << text << " is not a palindrome." << endl;
	}
}
