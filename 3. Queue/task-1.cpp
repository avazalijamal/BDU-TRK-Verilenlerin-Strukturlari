// Bir queue yaradaraq 5 ədəd əlavə edin və onları çıxararaq göstərin.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;

    // Ədədləri növbəyə əlavə et
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);
    numbers.push(5);

    // Ədədləri çıxararaq göstərin
    cout << "Queue-dan çıxarılan ədədlər: ";
    while (!numbers.empty()) {
        cout << numbers.front() << " ";
        numbers.pop();
    }
    cout << endl;

    return 0;
}
