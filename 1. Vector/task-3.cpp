// İstifadəçinin daxil etdiyi ədədləri vektora əlavə edin

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int n, value;

    cout << "Neçə ədəd daxil edəcəksiniz? ";
    cin >> n;

    cout << "Ədədləri daxil edin: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        vec.push_back(value);
    }

    cout << "Daxil edilən ədədlər: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
