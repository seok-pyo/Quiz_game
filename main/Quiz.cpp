#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string question[] = {
        "1. What is the capital of France?",
        "2. Which planet is known as the Red Planet?",
        "3. Who wrote the play 'Romeo and Juliet'?"
    };
    string answer[] = {
        "Paris",
        "Mars",
        "Willian Shakespeare"
    };

    int score = 0;

    for (int i = 0; i < 3; i++){
        cout << question[i] << endl;
        string userAnswer;
        cout << "Your answer : ";
        getline(cin, userAnswer);

        // userAnswer.erase(std::remove_if(userAnswer.begin(), userAnswer.end(), ::isspace), userAnswer.end());

        if (userAnswer == answer[i]) {
            cout << "correct!" << endl;
            score++;
        } else {
            cout << "wrong, The correct answer is : " << answer[i] << endl;
        }

        cout << "Your score : " << score << " out of 3" << endl;
        cout << endl;

    }
    return 0;
}

