// Deque-dakı tək və cüt elementləri ayırın

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1, 2, 3, 4, 5, 6};
    deque<int> even, odd;

    for (int i : dq) {
        if (i % 2 == 0) {
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }

    cout << "Cüt elementlər: ";
    for (int i : even) {
        cout << i << " ";
    }

    cout << "\nTək elementlər: ";
    for (int i : odd) {
        cout << i << " ";
    }

    return 0;
}
