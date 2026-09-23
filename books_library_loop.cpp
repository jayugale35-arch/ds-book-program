#include <iostream>
#include <string>
using namespace std;

int main() {
    const int totalBooks = 5;

    int id[totalBooks];
    string title[totalBooks];

    // Input using loop
    for (int i = 0; i < totalBooks; i++) {
        cout << "Enter Book id" << i + 1 << ": ";
        cin >> id[i];

        cin.ignore();
        cout << "Enter Book Title" << i + 1 << ": ";
        getline(cin, title[i]);
    }

    // Display using loop
    cout << "\n\n========================= Library Books ============================================\n";

    for (int i = 0; i < totalBooks; i++) {
        cout << "\n Book Id" << i + 1 << " = " << id[i];
        cout << "\t\t\t\t Book Title" << i + 1 << " = " << title[i];
    }

    cout << "\n\n====================================================================================\n";

    return 0;
}
