#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    int n = 2;
    if (s.find(n) != s.end()) {
        cout << n << " is present in the set" << endl;
    }

    s.erase(s.begin());
    cout << "Element after deleting the first element: " << endl;

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;

    if (!s.empty()) {
        cout << "The set is not empty" << endl;
    } else {
        cout << "The set is empty" << endl;
    }

    s.clear();

    cout << "The size of the set after clearing all the elements is: " << s.size();
}
