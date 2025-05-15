#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {50, 60, 70};
    numeros.push_back(80);

    for (int num : numeros) {
        cout << num << " ";
    }

    return 0;
}

