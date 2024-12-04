// Deque istifadə edərək həm əvvəldən, həm də sondan element əlavə edin və göstərin.

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> numbers;

    // Əvvəldən və sondan əlavə et
    numbers.push_front(10);
    numbers.push_back(20);
    numbers.push_front(30);
    numbers.push_back(40);

    cout << "Deque-dəki ədədlər: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
