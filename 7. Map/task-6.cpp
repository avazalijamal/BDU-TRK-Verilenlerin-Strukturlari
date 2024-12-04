// Map-də bütün dəyərlərin cəmini hesablayın (integer dəyərlərlə)

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m = {{1, 10}, {2, 20}, {3, 30}};
    int sum = 0;

    for (const auto& pair : m) {
        sum += pair.second; // Dəyərləri topla
    }

    cout << "Dəyərlərin cəmi: " << sum << endl;

    return 0;
}
