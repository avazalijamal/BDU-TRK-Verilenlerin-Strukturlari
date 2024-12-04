// İki stack-in elementlərini birləşdirin

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1, s2, result;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    s2.push(4);
    s2.push(5);
    s2.push(6);

    while (!s2.empty()) {
        result.push(s2.top());
        s2.pop();
    }

    while (!s1.empty()) {
        result.push(s1.top());
        s1.pop();
    }

    cout << "Birləşdirilmiş stack: ";
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}
