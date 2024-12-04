// Queue-nun boş olub olmadığını yoxlayın

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    if (q.empty()) {
        cout << "Queue boşdur." << endl;
    } else {
        cout << "Queue boş deyil." << endl;
    }

    q.push(100);

    if (q.empty()) {
        cout << "Queue boşdur." << endl;
    } else {
        cout << "Queue boş deyil." << endl;
    }

    return 0;
}
