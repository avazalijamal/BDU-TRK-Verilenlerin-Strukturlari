// Set-də aralıqda olan elementləri tapın

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 10, 15, 20, 25, 30};
    int low = 10, high = 25;

    cout << "Aralıq [" << low << ", " << high << "] daxilində olan elementlər: ";
    for (auto it = s.lower_bound(low); it != s.upper_bound(high); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
