#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> edad;
    edad["Maria"] = 22;
    edad["Leonardo"] = 40;

    for (auto& par : edad) {
        cout << par.first << ": " << par.second << endl;
    }

    return 0;
}

