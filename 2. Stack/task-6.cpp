// Stack-dəki ən yuxarı elementi göstərin

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(100);
    s.push(200);

    cout << "Stack-in ən yuxarı elementi: " << s.top() << endl;

    return 0;
}
