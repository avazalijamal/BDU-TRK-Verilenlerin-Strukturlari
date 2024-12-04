// Deque-nun ölçüsünü tapın

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(5);
    dq.push_back(10);

    cout << "Deque-da olan elementlərin sayı: " << dq.size() << endl;

    return 0;
}
