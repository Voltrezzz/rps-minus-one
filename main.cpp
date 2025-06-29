
// ROCK PAPER SCISSORS MINUS ONE

#include <iostream> // STL
#include <ctime> // To seed randomness at instant.
#include <cctype> // For tolower() functions

char compchoice();
void result(char comp, char play, int &sco);  // Passing a score reference.

int main() {
    srand(time(0));  // Seeding For Variation
    int score = 0;
    char playAgain = 'y';
    std::cout << "ROCK PAPER SCISSORS MINUS ONE\n";
    std::cout << "*****************************\n";
    // Loop until exit method
    while (tolower(playAgain) != 'q') { 
        char choice1, choice2, compch1, compch2, choice, compch;
        int num = 0;

        std::cout << "\n\nTwo choices pick (R,P,S)\nChoice 1 :: ";
        std::cin >> choice1;
        std::cout << "Choice 2 :: ";
        std::cin >> choice2;

        // Avoiding case sens errors

        choice1 = tolower(choice1);
        choice2 = tolower(choice2);

        std::cout << "Your Choices Are 1. " << choice1 << "  2. " << choice2 << "\n";

        compch1 = compchoice();
        compch2 = compchoice();

        std::cout << "Computer choices are 1. " << compch1 << "  2. " << compch2 << "\n";

        // Hand Selection

        std::cout << "Choose which choice to play (1 or 2) :: ";
        std::cin >> num;

        if (num == 1)
            choice = choice1;
        else if (num == 2)
            choice = choice2;
        else {
            std::cerr << "ERROR : Invalid choice.\nChoose 1 or 2.";
            continue;
        }

        //  Computer Hand Selection

        int randomfinal = rand() % 2 + 1;
        compch = (randomfinal == 1) ? compch1 : compch2;

        std::cout << "You chose :: " << choice << "\n";
        std::cout << "Comp chose :: " << compch << "\n";

        result(compch, choice, score);
        std::cout << "\nYour Score :: " << score << "\n";

        std::cout << "\nPlay again? (any key = yes, q = quit) :: ";
        std::cin >> playAgain;
    }
    std::cout << "*****************************\n";
    std::cout << "            RESULT           \n";
    std::cout << "*****************************\n";
    std::cout << "\nFinal Score :: " << score << "\nThanks for playing!\n";
    return 0;
}

char compchoice() {
    int random = rand() % 3 + 1;
    switch (random) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default: return 'r'; // fallback
    }
}

void result(char comp, char play, int &sco) {
    switch (play) {
        case 'r':
            if (comp == 'r') std::cout << "\nDRAW!";
            else if (comp == 's') { std::cout << "\nYou Win!"; sco++; }
            else { std::cout << "\nYou Lose"; sco = 0; }
            break;

        case 'p':
            if (comp == 'p') std::cout << "\nDRAW!";
            else if (comp == 'r') { std::cout << "\nYou Win!"; sco++; }
            else { std::cout << "\nYou Lose"; sco = 0; }
            break;

        case 's':
            if (comp == 's') std::cout << "\nDRAW!";
            else if (comp == 'p') { std::cout << "\nYou Win!"; sco++; }
            else { std::cout << "\nYou Lose"; sco = 0; }
            break;

        default:
            std::cerr << "ERROR : Runtime error."; // Using cerr from STL since it has no buffer
            break;
    }
}
