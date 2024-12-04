// İki vektoru birləşdirin

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    vec1.insert(vec1.end(), vec2.begin(), vec2.end());

    cout << "Birləşdirilmiş vektor: ";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
