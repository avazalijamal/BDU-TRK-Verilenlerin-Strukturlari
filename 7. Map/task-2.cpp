// Map-ə elementlər əlavə edin və göstərin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";

    cout << "Map-dəki elementlər:" << endl;
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
