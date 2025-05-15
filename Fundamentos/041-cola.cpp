#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> cola;
    cola.push("Quinto");
    cola.push("Sexto");
    cola.push("Sepitomo");

    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }

    return 0;
}

