// Queue-da baş və son elementləri göstərin

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Baş element: " << q.front() << endl;
    cout << "Son element: " << q.back() << endl;

    return 0;
}
