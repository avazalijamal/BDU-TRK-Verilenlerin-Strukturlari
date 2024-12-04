// Map-dən element silin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Silinmədən əvvəl map:" << endl;
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    m.erase(2); // 2 açarını sil

    cout << "\nSilinmədən sonra map:" << endl;
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
