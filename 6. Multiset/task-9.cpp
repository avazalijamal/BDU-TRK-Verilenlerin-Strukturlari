// Multiset-dəki bütün elementlərin cəmini hesablayın

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {10, 20, 10, 30};
    int sum = 0;

    for (int i : ms) {
        sum += i;
    }

    cout << "Multiset-dəki elementlərin cəmi: " << sum << endl;

    return 0;
}
