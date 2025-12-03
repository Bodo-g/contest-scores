#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int g, c, l;

    cout << "Enter Gemini score: ";
    cin >> g;

    cout << "Enter ChatGPT score: ";
    cin >> c;

    cout << "Enter Claude score: ";
    cin >> l;

    int arr[3] = {g, c, l};

    sort(arr, arr + 3);

    int mn = arr[0];   
    int md = arr[1];   
    int mx = arr[2];   


    if (mx - mn >= 10) {
        cout << "check again";
    } 

    else {
        cout << "final " << md;
    }

    return 0;
}
