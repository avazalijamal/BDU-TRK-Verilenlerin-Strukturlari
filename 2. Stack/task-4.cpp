// Stack-də neçə element olduğunu hesablayın

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Stack-dəki elementlərin sayı: " << s.size() << endl;

    return 0;
}
