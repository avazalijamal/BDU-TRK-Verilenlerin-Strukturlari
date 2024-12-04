// Vektorda maksimum və minimum elementləri tapın

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 5, 30, 15};

    int maxElement = *max_element(vec.begin(), vec.end());
    int minElement = *min_element(vec.begin(), vec.end());

    cout << "Maksimum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}
