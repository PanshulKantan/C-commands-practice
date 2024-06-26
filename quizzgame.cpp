#include <iostream>
#include <string>

// &score in void basically is a memory address in which the data is stores, so if we change the value in different caller, we have to mention the memory storage too if we want to save the modified change in different callers too.
void answertalley(char input, char ans[], int i, int &score);
int main(){
    char input;
    using std::cout;
    using std::cin;
    int score = 0;
    std::string questions[]={"1) What year was c++ created?: ",
                             "2) Who invented c++?: ",
                             "3) What is the predecessor of c++?: ",
                             "4) Is earth flat?: "};
    std::string options[][4]= {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                              {"A. Guido Van rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                              {"A. C", "B. C+", "C. C--", "D. B++"},
                              {"A. Yes", "B. No", "C. Sometimes", "D. None of these"}};
    char ans[]={'C', 'B', 'A', 'B'};
    for(int i=0; i<4; i++){
        cout<< questions[i] << '\n';
            for(int k=0; k<4; k++){
              cout << options[i][k] << " ";

        }
        cout << '\n';
        cout << "Your answer: ";
        cin >> input;
        answertalley(input, ans, i, score);
    }
    cout << "CONGRATULATIONS FOR FINISHING THE TEST! YOU GOT " << score << " QUESTIONS CORRECT!"; 
}
// VERY IMPORTANT- if you only write score and not &score, void arguments are the COPY of the code and if you change it, you wont change the original value and it will print the value mentioned in the caller.
void answertalley(char input, char ans[], int i, int &score){
        if(input == ans[i]){
            score += 1;
        }else if (input != 'A' && input != 'B' && input != 'C' && input != 'D'){
            do{
                std::cout << "Enter a valid option in capital letter, only A, B, C, and D are valid. Try again: ";
                std::cin >> input;
            
            }while(input != 'A' && input != 'B' && input != 'C' && input != 'D');
            if(input == ans[i]){
                score += 1;
            }
        }else{
            score += 0;
        }
}