// Rules:
    // Rock beats scissors,
    // Paper beats rock,
    // Scissors beat paper.

    // Opponent's markings:
        // A for Rock,
        // B for Paper,
        // C for Scissors.

    // My markings, for the first part:
        // X for Rock,
        // Y for Paper,
        // Z for Scissors.

    // My markings, for the second part:
        // X for losing,
        // Y for draw,
        // Z for winning.

    // "Pricelist":
        // 1 for Rock,
        // 2 for Paper,
        // 3 for Scissors,
        // 6 for winning,
        // 3 for a draw,
        // 0 for a lose.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

using namespace std;

int winningPrice = 6;
int drawingPrice = 3;

// Im sure there is a better way to do this
int getScoreFirstPart(char OpponentsMove, char MyMove) {
    if (MyMove == 'X') {
        if (OpponentsMove == 'A') return 1 + drawingPrice;
        if (OpponentsMove == 'B') return 1;
        if (OpponentsMove == 'C') return 1 + winningPrice;
    }
    else if (MyMove == 'Y') {
        if (OpponentsMove == 'A') return 2 + winningPrice;
        if (OpponentsMove == 'B') return 2 + drawingPrice;
        if (OpponentsMove == 'C') return 2;
    }
    else if (MyMove == 'Z') {
        if (OpponentsMove == 'A') return 3;
        if (OpponentsMove == 'B') return 3 + winningPrice;
        if (OpponentsMove == 'C') return 3 + drawingPrice;
    }
    return 0;
}

int getScoreSecondPart(char OpponentsMove, char whatToDo) {
    if (whatToDo == 'X') { // lose
        if (OpponentsMove == 'A') return 3;
        if (OpponentsMove == 'B') return 1;
        if (OpponentsMove == 'C') return 2;
    }
    else if (whatToDo == 'Y') { // draw
        if (OpponentsMove == 'A') return 1 + drawingPrice;
        if (OpponentsMove == 'B') return 2 + drawingPrice;
        if (OpponentsMove == 'C') return 3 + drawingPrice;
    }
    else if (whatToDo == 'Z') { // win
        if (OpponentsMove == 'A') return 2 + winningPrice;
        if (OpponentsMove == 'B') return 3 + winningPrice;
        if (OpponentsMove == 'C') return 1 + winningPrice;
    }
    return 0;
}

int main() {
    ifstream fin;
    string line;
    int scoreFirstPart, scoreSecondPart;

    // read the file, insert the goods
    fin.open("elves.txt");

    while (getline(fin, line)) {
        char opponentsMove = line[0];
        char myMove = line[2];

        scoreFirstPart += getScoreFirstPart(opponentsMove, myMove);
        scoreSecondPart += getScoreSecondPart(opponentsMove, myMove);
    }

    cout << "First part score: " << scoreFirstPart << endl;
    cout << "Second part score: " << scoreSecondPart << endl;

    fin.close();

    return 0;
}