// Queue-da elementləri tərsinə göstərin

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    cout << "Tərsinə göstərilən elementlər: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
