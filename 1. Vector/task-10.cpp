// Vektoru tamamilə təmizləyin

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};

    vec.clear();

    cout << "Vektorun ölçüsü təmizləndikdən sonra: " << vec.size() << endl;

    return 0;
}
