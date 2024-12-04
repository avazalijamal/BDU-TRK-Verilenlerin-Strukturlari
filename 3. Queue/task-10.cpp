// İstifadəçinin daxil etdiyi string-ləri queue-ya əlavə edin və göstərin

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    int n;
    string value;

    cout << "Neçə string daxil edəcəksiniz? ";
    cin >> n;

    cout << "String-ləri daxil edin: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        q.push(value);
    }

    cout << "Queue-dakı string-lər: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
