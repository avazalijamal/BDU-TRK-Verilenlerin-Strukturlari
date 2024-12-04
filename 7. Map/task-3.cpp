// Map-də element axtarın

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    int key = 2;
    if (m.find(key) != m.end()) {
        cout << key << " açarı üçün dəyər: " << m[key] << endl;
    } else {
        cout << key << " açarı map-də yoxdur." << endl;
    }

    return 0;
}
