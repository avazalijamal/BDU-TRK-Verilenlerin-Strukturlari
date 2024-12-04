// Deque-dan elementləri silin

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    dq.pop_front();  // Əvvəldəki elementi sil
    dq.pop_back();   // Sondakı elementi sil

    cout << "Deque-dan sonra elementlər: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
