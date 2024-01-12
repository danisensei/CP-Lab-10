#include <iostream>
#include <string>
using namespace std;
string reversestring(string& str, int size);
string tolowercase(const string& str);
string tolowercase(const string& str)
{
    string result;
    for (char c : str)
    {
        result += tolower(c);
    }
    return result;
}

int main()
{
    string Original,reversed;
    cout << "Enter A  Palindrome Word: ";
    cin >> Original;
    reversed=reversestring(Original, Original.length() - 1);
    cout << "Is this Word  a Palindrome? : ";
        if (Original == reversed)
            cout << "Yes";
        else if (Original != reversed)
            cout << "Nope";
        

        return 0;

}
string reversestring(string& str, int size)
{
    str = tolowercase(str);
    if (size < 0) {
        return "";
    }
    else {
        return str[size] + reversestring(str, size - 1);
    }

}
