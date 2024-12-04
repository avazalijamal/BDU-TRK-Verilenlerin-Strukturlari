// Stack-in boş olub olmadığını yoxlayın

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    if (s.empty()) {
        cout << "Stack boşdur." << endl;
    } else {
        cout << "Stack boş deyil." << endl;
    }

    s.push(10);

    if (s.empty()) {
        cout << "Stack boşdur." << endl;
    } else {
        cout << "Stack boş deyil." << endl;
    }

    return 0;
}
