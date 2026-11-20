#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while (n != 0) {
        int bit = n & 1;

        ans = ans + (bit * place);
        place = place * 10;

        n = n >> 1;
    }

    cout << "Binary is: " << ans << endl;
    return 0;
}
