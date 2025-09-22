#include <iostream>
using namespace std;

int main() {
    float n1, n2, ans;
    cout << "Enter values of numbers 1 & 2: ";
    cin >> n1 >> n2;

    try {
        if (n2 == 0) {
            throw n2;   // throw exception if denominator is 0
        } else {
            ans = n1 / n2;
            cout << "Answer = " << ans << endl;
        }
    } 
    catch (float num) {
        cout << "\nERROR: Division by " << num << " is not allowed!" << endl;
    }

    return 0;
}

/*
Output:
Enter values of numbers 1 & 2: 3
11
Answer = 0.272727
*/
