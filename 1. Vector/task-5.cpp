// Vektorda müəyyən bir elementi tapın

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int key;

    cout << "Axtarış üçün bir ədəd daxil edin: ";
    cin >> key;

    if (find(vec.begin(), vec.end(), key) != vec.end()) {
        cout << key << " vektorda mövcuddur." << endl;
    } else {
        cout << key << " vektorda mövcud deyil." << endl;
    }

    return 0;
}
