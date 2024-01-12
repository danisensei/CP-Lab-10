#include <iostream>
#include <string>
using namespace std;

void permute(string& str, int start, int end) {
    if (start == end) {
        cout << str << endl;
        return;
    }
    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]);
        permute(str, start + 1, end);
        swap(str[start], str[i]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int n = input.length();

    cout << "all permutations of the string are:\n";
    permute(input, 0, n - 1);
    return 0;
}
