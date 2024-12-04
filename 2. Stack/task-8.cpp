// Tək və cüt elementləri ayrı-ayrı stack-lərə ayırın

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> original, even, odd;

    original.push(1);
    original.push(2);
    original.push(3);
    original.push(4);
    original.push(5);

    while (!original.empty()) {
        int val = original.top();
        if (val % 2 == 0) {
            even.push(val);
        } else {
            odd.push(val);
        }
        original.pop();
    }

    cout << "Cüt ədədlər stack-i: ";
    while (!even.empty()) {
        cout << even.top() << " ";
        even.pop();
    }

    cout << "\nTək ədədlər stack-i: ";
    while (!odd.empty()) {
        cout << odd.top() << " ";
        odd.pop();
    }

    return 0;
}
