// Deque-da elementlərin cəmini hesablayın

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int sum = 0;

    dq.push_back(5);
    dq.push_back(15);
    dq.push_back(25);

    for (int i : dq) {
        sum += i;
    }

    cout << "Deque-da olan elementlərin cəmi: " << sum << endl;

    return 0;
}
