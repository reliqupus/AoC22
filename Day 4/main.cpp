#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    fstream input("elves.txt");
    char _;

    int a, b, c, d;

    int contains = 0;
    int overlaps = 0;

    while (input >> a >> _ >> b >> _ >> c >> _ >> d) {
        if (a >= c && b <= d || c >= a && d <= b) contains++;
        if (a >= c && a <= d || b >= c && b <= d || c >= a && d <= b) overlaps++;
    }

    cout << "Contains: " << contains << endl;
    cout << "Overlaps: " << overlaps << endl;
}