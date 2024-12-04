// İki set-in birləşməsini hesablayın

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1 = {10, 20, 30};
    set<int> s2 = {30, 40, 50};

    set<int> result = s1;
    result.insert(s2.begin(), s2.end());

    cout << "Birləşmə nəticəsi: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
