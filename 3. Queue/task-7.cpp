// Queue-da olan elementlərin cəmini hesablayın

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int sum = 0;

    q.push(5);
    q.push(10);
    q.push(15);

    while (!q.empty()) {
        sum += q.front();
        q.pop();
    }

    cout << "Queue-da olan elementlərin cəmi: " << sum << endl;

    return 0;
}
