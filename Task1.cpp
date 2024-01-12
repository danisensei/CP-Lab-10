#include <iostream>
#include <string>
using namespace std;
string reversestring(string& str, int size);

int main()
{
    string Original,reversed;
    cout << "Enter A Word: ";
    cin >> Original;
    cout << endl;
    reversed=reversestring(Original, Original.length() - 1);
    cout <<reversed;
    


}
string reversestring(string& str, int size)
{
    if (size < 0) {
        return "";
    }
    else {
        return str[size] + reversestring(str, size - 1);
    }

}
