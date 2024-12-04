// Set-də elementin olub-olmadığını yoxlayın

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};

    int x = 20;
    if (s.find(x) != s.end()) {
        cout << x << " elementi set-də mövcuddur." << endl;
    } else {
        cout << x << " elementi set-də yoxdur." << endl;
    }

    return 0;
}
