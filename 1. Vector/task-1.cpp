// Bir tam ədədlərdən ibarət vektor yaradın, istifadəçidən 5 ədəd daxil etməsini tələb edin və daxil edilən ədədlərin cəmini hesablayın.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num, sum = 0;

    cout << "5 ədəd daxil edin: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    for (int n : numbers) {
        sum += n;
    }

    cout << "Ədədlərin cəmi: " << sum << endl;

    return 0;
}
