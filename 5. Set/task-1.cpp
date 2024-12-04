// Bir set yaradaraq təkrarlanan ədədlər əlavə edin və unikal elementləri göstərin.

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numbers = {1, 2, 2, 3, 4, 4, 5};

    cout << "Set-dəki unikal elementlər: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
