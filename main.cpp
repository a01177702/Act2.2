#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Suffix {
    string suffix;
    int index;
};

bool compararSuffix(const Suffix &a, const Suffix &b) {
    return a.suffix < b.suffix;
}

int main() {
    string text;
    getline(cin, text);

    int n = text.size();

    vector<Suffix> suffixes;

    for (int i = 0; i < n; i++) {
        Suffix s;
        s.suffix = text.substr(i);
        s.index = i + 1;
        suffixes.push_back(s);
    }

    sort(suffixes.begin(), suffixes.end(), compararSuffix);

    for (int i = 0; i < n; i++) {
        cout << suffixes[i].index << endl;
    }

    return 0;
}
