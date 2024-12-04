// Ədədləri stack-ə əlavə edib cəmini hesablayın

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int sum = 0;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << "Stack-dəki elementlərin cəmi: " << sum << endl;

    return 0;
}
