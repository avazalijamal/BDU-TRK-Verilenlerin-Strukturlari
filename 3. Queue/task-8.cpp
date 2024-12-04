// Queue-dan elementləri digər queue-ya köçürün

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q1, q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    while (!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
    }

    cout << "İkinci Queue-da elementlər: ";
    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;

    return 0;
}
