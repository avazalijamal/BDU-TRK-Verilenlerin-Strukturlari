// Set-ə elementlər əlavə edin və göstərin

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10); // Dublikat əlavə etməyə çalışırıq
    s.insert(30);

    cout << "Set-dəki elementlər: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
