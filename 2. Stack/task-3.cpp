// İstifadəçinin daxil etdiyi elementləri stack-ə əlavə edin

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n, val;

    cout << "Neçə ədəd daxil edəcəksiniz? ";
    cin >> n;

    cout << "Ədədləri daxil edin: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        s.push(val);
    }

    cout << "Stack-dəki elementlər: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
