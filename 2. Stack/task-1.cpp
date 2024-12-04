// Bir stack yaradaraq 5 tam ədəd əlavə edin və onları ardıcıl çıxarın.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> numbers;

    // Ədədləri staka əlavə et
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50);

    // Ədədləri çıxararaq göstərin
    cout << "Stackdəki ədədlər: ";
    while (!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    cout << endl;

    return 0;
}
