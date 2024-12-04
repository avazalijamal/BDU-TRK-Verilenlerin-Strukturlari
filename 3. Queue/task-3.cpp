// İstifadəçinin daxil etdiyi elementləri queue-ya əlavə edin

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n, value;

    cout << "Neçə element daxil edəcəksiniz? ";
    cin >> n;

    cout << "Elementləri daxil edin: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        q.push(value);
    }

    cout << "Queue-da olan elementlər: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
