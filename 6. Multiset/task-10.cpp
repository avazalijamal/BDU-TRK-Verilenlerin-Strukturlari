// Multiset-dən tək və cüt elementləri ayırın

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {1, 2, 3, 4, 5, 6};
    multiset<int> odd, even;

    for (int i : ms) {
        if (i % 2 == 0)
            even.insert(i);
        else
            odd.insert(i);
    }

    cout << "Cüt elementlər: ";
    for (int i : even) {
        cout << i << " ";
    }

    cout << "\nTək elementlər: ";
    for (int i : odd) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
