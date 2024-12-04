// Deque-da müəyyən mövqedə elementi silin

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40};

    dq.erase(dq.begin() + 2);  // Üçüncü elementi sil

    cout << "Deque-dan sonra elementlər: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
