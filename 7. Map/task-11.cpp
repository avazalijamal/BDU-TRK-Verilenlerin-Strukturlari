// Map-də aralıqda olan açarları göstərin

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Apple"}, {2, "Banana"}, {3, "Cherry"}, {4, "Date"}};

    int low = 2, high = 3;
    cout << "Açar aralığı [" << low << ", " << high << "] daxilində olan elementlər:" << endl;

    for (auto it = m.lower_bound(low); it != m.upper_bound(high); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
