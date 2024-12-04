// Map-də açar və dəyəri dəyişdirin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    m[2] = "Blueberry"; // 2 açarının dəyərini dəyiş

    cout << "Map-dəki elementlər:" << endl;
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
