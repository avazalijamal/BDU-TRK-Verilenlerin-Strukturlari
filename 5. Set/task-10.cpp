// Set-dəki elementlərin cəmini hesablayın

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};
    int sum = 0;

    for (int i : s) {
        sum += i;
    }

    cout << "Set-dəki elementlərin cəmi: " << sum << endl;

    return 0;
}
