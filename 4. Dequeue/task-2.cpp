// Deque-ya elementlər əlavə edin və göstərin

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);  // Sonuna əlavə et
    dq.push_back(20);
    dq.push_front(5);  // Əvvəlinə əlavə et

    cout << "Deque-nun elementləri: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
