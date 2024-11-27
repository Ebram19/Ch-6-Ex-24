// File Name: Chapter 6 Exercise 24
// Date: Nov 2024
// Programmer Name: Ebram Azer
// Requirments: Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows:
//If the number is 2, then the computer has chosen paper.If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
//1. When the program begins, a random number in the range of 1 through 3 is generated.If the number is 1, then the computer has chosen rock.
//2. The user enters his or her choice of “rock”, “paper”, or “scissors” at the keyboard. (You can use a menu if you prefer.)
//3. The computer’s choice is displayed
//4. A winner is selected according to the following rules :
//• If one player chooses rock and the other player chooses scissors, then rock wins. (The rock smashes the scissors.)
//• If one player chooses scissors and the other player chooses paper, then scissors wins. (Scissors cuts paper.)
//• If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)
//• If both players make the same choice, the game must be played again to determine the winner.


#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 3
    int randomChoice = rand() % 3 + 1;

    // Determine the computer's choice
    string computerChoice;
    if (randomChoice == 1) {
        computerChoice = "rock";
    }
    else if (randomChoice == 2) {
        computerChoice = "paper";
    }
    else if (randomChoice == 3) {
        computerChoice = "scissors";
    }

    // Display the computer's choice
    cout << "The computer has chosen: " << computerChoice << endl;

    return 0;
}

