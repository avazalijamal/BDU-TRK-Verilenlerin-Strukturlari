// Map-də açarların sayını tapın

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}};

    cout << "Map-dəki açarların sayı: " << m.size() << endl;

    return 0;
}
