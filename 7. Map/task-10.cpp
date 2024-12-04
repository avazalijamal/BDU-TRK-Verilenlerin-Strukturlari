// Map-də açar və dəyər üçün cütləri dəyişdirin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m = {{1, 10}, {2, 20}, {3, 30}};

    cout << "Dəyişmədən əvvəl map:" << endl;
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    map<int, int> reversed;
    for (const auto& pair : m) {
        reversed[pair.second] = pair.first; // Dəyər və açarı dəyiş
    }

    cout << "\nDəyişmədən sonra map:" << endl;
    for (const auto& pair : reversed) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
