// Bir map yaradaraq tələbə adlarını və onların ballarını saxlayın, sonra tələbələrin adlarını və ballarını göstərin.

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> students;

    // Məlumat əlavə edin
    students["Ali"] = 90;
    students["Aysel"] = 85;
    students["Murad"] = 88;

    cout << "Tələbələr və onların balları: " << endl;
    for (auto &entry : students) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
