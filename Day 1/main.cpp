#include <iostream>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin;
    string line;
    vector<int> vector;

    vector.push_back(0);
    int calories = 0;

    // read the file, insert the goods
    fin.open("elves.csv");

    while (getline(fin, line)) {
        if (line == "") {
            vector.push_back(calories);
            calories = 0;
            continue;
        }

        calories = calories + stoi(line);
    }

    calories = 0; // we are going to reuse this variable
    sort(vector.rbegin(), vector.rend());

    fin.close();

    // output the goods
    cout << "Biggest value:\n\t" << vector.front() << endl;
    cout << "\nThree biggest values: " << endl;

    for (int i = 0; i <= 2; i++) {
        calories += vector[i];
        cout << "\t" << vector[i] << endl;
    }

    cout << "\nSum of three biggest values:\n\t" << calories << endl;

    return 0;
}