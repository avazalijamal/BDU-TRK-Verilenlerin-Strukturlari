// Map-də bütün açarları göstərin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Map-dəki açarlar: ";
    for (const auto& pair : m) {
        cout << pair.first << " ";
    }
    cout << endl;

    return 0;
}
