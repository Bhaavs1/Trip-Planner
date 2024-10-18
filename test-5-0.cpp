#include <iostream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Please enter a filename: " << endl;
    cin >> filename;
    filename = filename + ".txt";

    cout << filename;
}