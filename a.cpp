#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int c = 2 * b;
        int d = a / c;
        
        cout << d << endl;
    }

    return 0;
}
