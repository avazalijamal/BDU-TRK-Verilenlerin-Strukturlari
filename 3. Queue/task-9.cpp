// Queue-da tək və cüt elementləri ayırın

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q, even, odd;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.empty()) {
        if (q.front() % 2 == 0) {
            even.push(q.front());
        } else {
            odd.push(q.front());
        }
        q.pop();
    }

    cout << "Cüt elementlər: ";
    while (!even.empty()) {
        cout << even.front() << " ";
        even.pop();
    }

    cout << "\nTək elementlər: ";
    while (!odd.empty()) {
        cout << odd.front() << " ";
        odd.pop();
    }

    return 0;
}
