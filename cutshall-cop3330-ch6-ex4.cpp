#include <iostream>
#include <vector>
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Chase Cutshall
 */
using namespace std;

class Pair {
    public:
 
        string name;
        int value;

        Pair(string basicString, int i) {
        this->name = basicString;
        this->value = i;
        }

};

int main() {

    string str;
    int val;
    vector<Pair> pairs;

    cout << "Enter names followed by integer values. Press enter to enter more names and values, and enter NoName and 0 to end.\n";

    while (cin >> str >> val) {
        if (str == "NoName" && val == 0)
            break;

        for (int i = 0; i < pairs.size(); i++) {
            if (str == pairs[i].name) {
                cout << "The name entered is a duplicate.";
                return 0; 
            }
        }
        pairs.push_back(Pair(str, val));
    }

    cout << "\nYou entered:\n";

    for (Pair p : pairs)
        cout << "(" << p.name << ", " << p.value << ")\n";

    return 0;
}