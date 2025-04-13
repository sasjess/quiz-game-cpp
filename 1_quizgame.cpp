#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int score = 0;
    char ans;
    string questions[5] = {"2 + 2 = ?"," 5/2 = ?","10 * 8 =?","9 * 6 + 3 = ?","2 + 9 + 3 x 2 =?"};
    string options[5][5] = {
        {"a. 2  ","b. 0  ","c. 4  ","d. 1  ","e. 5  "},
        {"a. 10   ","b. 7  ","c. 2.5  ","d. 4.12  ","e. 5.2  "},
        {"a. 42  ","b. 80  ","c. 18  ","d. 12  ","e. 9   "},
        {"a. 57  ","b. 62   ","c. 85   ","d. 48  ","e. 79   "},
        {"a. 18  ","b. 23  ","c. 0  ","d. 10  ","e. 17  "},
        };
    char answers[5] = { 'c' , 'c' , 'b' , 'a' , 'e'};

    cout << "Enter the correct answer to the given questions," << endl;
        for(int i = 0; i < 5 ; i++){
            cout << i+1 << ". " << questions[i] << endl;
            for(int j = 0; j < 5 ; j++){
            cout << options[i][j] << "  ";
            }

            cout << endl << "Your answer(a,b,c,d,e)? ";
            cin >> ans;
            ans = tolower(ans);

            if(ans == answers[i]){
                cout << "Your answer is correct." << endl;
                score = score +1;

            }else{
                cout << "Wrong answer.The correct answer is " << answers[i]<< endl;

            }
            cout << endl;


            }
            cout << endl << "You finished the quiz...";
            cout << "You got " << score << " out of 5. " << endl;
            cout << endl << "Score: " <<( score * 100)/ 5<< endl;

            return 0;

}
