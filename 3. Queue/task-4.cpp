// Queue-nun ölçüsünü tapın

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Queue-da olan elementlərin sayı: " << q.size() << endl;

    return 0;
}
