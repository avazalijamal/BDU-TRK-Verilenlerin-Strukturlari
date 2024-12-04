// Deque-da baş və son elementləri göstərin

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);

    cout << "Baş element: " << dq.front() << endl;
    cout << "Son element: " << dq.back() << endl;

    return 0;
}
