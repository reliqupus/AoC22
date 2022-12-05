#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream input;
    string command;
    input.open("elves.txt");

    vector<vector<char>> containers = {
        { 'N', 'C', 'R', 'T', 'M', 'Z', 'P' } ,
        { 'D', 'N', 'T', 'S', 'B', 'Z' } ,
        { 'M', 'H', 'Q', 'R', 'F', 'C', 'T', 'G' },
        { 'G', 'R', 'Z' },
        { 'Z', 'N', 'R', 'H'},
        { 'F', 'H',  'S', 'W', 'P', 'Z', 'L', 'D'},
        { 'W', 'D', 'Z', 'R', 'C', 'G', 'M' },
        { 'S', 'J', 'F', 'L', 'H', 'W', 'Z', 'Q' },
        { 'S', 'Q', 'P', 'W', 'N' }
    };

    char _;
    int move, from, to;
    int line;

    while (getline(input, command)) {
        line++;
        if (line < 10) continue;

        input >> _ >> _ >> _ >> _ >> move >> _ >> _ >> _ >> _ >> from >> _ >> _ >> to;

        int iter = 0;
        for (auto it = containers[from - 1].rbegin(); it != containers[from - 1].rend(); ++it) {
            iter++;
            if (iter > move) break;
            containers[from - 1].pop_back(); containers[to - 1].push_back(*it);
        }
        continue;
    }

    input.close();

    for (auto v : containers) {
        cout << v.back();
    }
}