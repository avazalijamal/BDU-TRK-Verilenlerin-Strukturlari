// Map-i tərsinə göstərin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Map-i tərsinə:" << endl;
    for (auto it = m.rbegin(); it != m.rend(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
