#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

class Player {
    string playerName;
    int totalScore;
    int ballsPlayed;

public:
    Player() : totalScore(0), ballsPlayed(0) {}

    void setName(string name) {
        playerName = name;
    }
    string getName() const {
        return playerName;
    }

    void setScore(int score) {
        totalScore = score;
    }
    int getScore() const {
        return totalScore;
    }

    void setBalls(int balls) {
        ballsPlayed = balls;
    }
    int getBalls() const {
        return ballsPlayed;
    }
};

int generateRandomNumber() {
    int random_number = -1 + rand() % 7;
    if (random_number == 5) {
        random_number = 6;
    }
    return random_number;
}

int main() {
    srand(time(NULL));
    string playerNames[11] = {"Babar Azam", "Naseem Shah", "Agha Salman", "Mohammad Amir", "Shaheen Afridi", "Shadab Khan", "Imad Wasim", "Fakhar Zaman", "Haris Rauf", "Mohammad Rizwan", "Iftikhar Ahmed"};
    Player players[11];

    for (int i = 0; i < 11; i++) {
        players[i].setName(playerNames[i]);
        cout << i+1 << ". " << players[i].getName() << endl;
        cout << "Scores per Ball: ";
        while (true) {
            int run = generateRandomNumber();
            if (run == -1) {
                cout << "OUT" << endl;
                cout << "Total Score: " << players[i].getScore() << "       " << "Balls Played: " << players[i].getBalls() << endl << endl;
                break;
            } else {
                players[i].setScore(players[i].getScore() + run);
                players[i].setBalls(players[i].getBalls() + 1);
                cout << run << " ";
            }
        }
    }

    cout << endl << "<<<<<< Match Summary >>>>>>" << endl;
    cout << left << setw(20) << "Player Name" << setw(10) << "Score" << "Balls Played" << endl;
    for (int i = 0; i < 11; i++) {
        cout << left << setw(20) << players[i].getName() << setw(10) << players[i].getScore() << players[i].getBalls() << endl;
    }
    int highestScore = players[0].getScore();
    int playerIndex = 0;
    for (int i = 1; i < 11; i++) {
        if (players[i].getScore() > highestScore) {
            highestScore = players[i].getScore();
            playerIndex = i;
        }
    }
    cout << endl << "Player of the Match: " << players[playerIndex].getName() << endl;
    cout << "------------------------" << endl;
    return 0;
}
