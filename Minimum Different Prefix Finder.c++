#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of items on the table: ";
    cin >> n;  
    string s;
    cout << "Enter the sequence of items (L for loaf, O for onion): ";
    cin >> s;  

    int k = 1;

    if (s[0] != s[1]) {
        cout << "You can take " << k << " item(s)." << endl;
        return 0;
    }

    if (n >= 3 && s[1] != s[2]) {
        cout << "You can take 2 items." << endl;
        return 0;
    }

    cout << "No valid division possible." << endl;
    return 0;
}
