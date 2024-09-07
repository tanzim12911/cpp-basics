#include <iostream>

int main() {

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invernted C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth Flat? "};
    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "1989"},
                               {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zukerberg"},
                               {"A. C", "B. C++", "C. C--", "D. B++"},
                               {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++) {
        std::cout << "************************\n";
        std::cout << questions[i] << "\n";
        std::cout << "************************\n";

        for(int j = 0; j < sizeof(options[i]) / sizeof(questions[i][0]); j++) {

            std::cout << options[i][j] << '\n';
        }
        
    }

    return 0;

}