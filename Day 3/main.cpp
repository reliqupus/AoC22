#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin;
    string line;

    int total, total2;

    string previous[2];

    // read the file, insert the goods
    fin.open("elves.txt");
    int iteration = 0;

    while (getline(fin, line)) {
        iteration += 1;

        double length = line.size();
        string part1, part2;

        for (int i = 0; i <= length / 2; i++) part1 += line[i];
        for (int i = length / 2; i <= length; i++) part2 += line[i];

        for (char ch : part1) {
            if (part2.find(ch) != -1) {
                int priority = (int)ch - 64; // weeeeird
                if (priority <= 32) priority += 26;
                else priority -= 32;
                total += priority;
                break;
            }
        }

        // every three lines
        if (iteration % 3 == 0) {
            for (char ch : line) {
                int a = previous[0].find(ch) != -1;
                int b = previous[1].find(ch) != -1;

                if (a & b) {
                    cout << previous[0].find(ch) << ", " << previous[1].find(ch) << endl;
                    cout << "\n" << ch << ", line " << iteration << ": ";
                    cout << "\n\t" << previous[1];
                    cout << "\n\t" << previous[0];
                    cout << "\n\t" << line;
                    cout << endl;

                    int priority = (int)ch - 64; // weeeeird
                    if (priority <= 32) priority += 26;
                    else priority -= 32;

                    total2 += priority;

                    break;
                }
            }
        }

        previous[1] = previous[0];
        previous[0] = line;
    }

    fin.close();

    cout << "Answer to the first part - " << total;
    cout << "\nAnswer to the second part - " << total2 << endl;

    return 0;
}