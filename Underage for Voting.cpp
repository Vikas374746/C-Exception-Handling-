#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age;  // throw exception if underage
        } else {
            cout << "Age: " << age << " -> APPROVED for voting" << endl;
        }
    }
    catch (int a) {
        cout << "\nERROR: Underage! (" << a << ")" << endl;
    }

    return 0;
}

/*
Output:
Enter age: 19
Age: 19 -> APPROVED for voting
*/
