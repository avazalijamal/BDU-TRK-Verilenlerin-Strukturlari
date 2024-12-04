// Deque-da müəyyən mövqedə element əlavə edin

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};

    dq.insert(dq.begin() + 1, 15);  // İkinci mövqeyə 15 əlavə et

    cout << "Deque-dan sonra elementlər: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
