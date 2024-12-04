// Deque-nun boş olub olmadığını yoxlayın

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    if (dq.empty()) {
        cout << "Deque boşdur." << endl;
    } else {
        cout << "Deque boş deyil." << endl;
    }

    dq.push_back(10);

    if (dq.empty()) {
        cout << "Deque boşdur." << endl;
    } else {
        cout << "Deque boş deyil." << endl;
    }

    return 0;
}
