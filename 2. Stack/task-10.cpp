// Bir string-in tərsini stack vasitəsilə tapın

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string str = "Hello";
    
    for (char ch : str) {
        s.push(ch);
    }

    cout << "String-in tərsi: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}
