#include <iostream>
#include <vector>
#include <algorithm>    //sort
using namespace std;

int main() {

    int t;
    cout << "Enter number of test cases: ";
    cin >> t;  

    while (t--) {
        int n;
        cout << "\nEnter number of elements: ";
        cin >> n;  

        vector<long long> a(n);
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }

        sort(a.begin(), a.end());

        long long x1 = a[0];
        long long x2 = a[1];

        long long y2 = a[n - 2];
        long long y1 = a[n - 1];

        long long result = 2 * ((y1 + y2) - (x1 + x2));

        cout << "Maximum Value = " << result << "\n";
    }

    return 0;
}
