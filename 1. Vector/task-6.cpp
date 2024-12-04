// Vektorun ölçüsünü və tutumunu göstərin

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};

    cout << "Vektorun ölçüsü: " << vec.size() << endl;
    cout << "Vektorun tutumu: " << vec.capacity() << endl;

    return 0;
}
