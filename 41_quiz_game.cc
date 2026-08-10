#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string questins[] = {"what year was cpp created?: ",
                         "who invented cpp?: ",
                         "whats it the predecesser of cpp?: ",
                         "am i gay?: "};

    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 2001"},
                           {"A. Guido ize", "B. Bjarne stroustrup", "C. John carmack", "D. Elon musk"},
                           {"A. C", "B. C+", "C. C--", "D. B++"},
                           {"A. yes", "B. no", "C. sometimes", "D. im gay"}};

    char answerkey[] = {'C', 'B', 'A', 'D'};

    int size = sizeof(questins) / sizeof(questins[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        cout << questins[i] << '\n';

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << '\n';
        }
        cin >> guess;
        guess = toupper(guess);

        if (guess == answerkey[i])
        {
            cout << "correct\n";
            cout << '\n';
            score++;
        }
        else
        {
            cout << "incorrect\n";
            cout << "answer: " << answerkey[i] << '\n';
            cout << '\n';
        }
    }

    cout << "your score is " << score << " out of " << size << '\n';
    cout << (score / (double)size) * 100 << "%";

    return 0;
}