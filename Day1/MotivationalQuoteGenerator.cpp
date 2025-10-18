#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){
    // Seed the random number generator witht he current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Store the motivational quotes in a vector
    std::vector<std::string> quotes = {
        "Stay consistent, the results will follow.",
        "Small progress is still progress.",
        "Discipline will take you places motivation can't.",
        "Push yourself, because nobody is going to do it for you.",
        "The body achieves what the mind believes.",
        "Don't wish for it, work for it.",
        "You can do anything you set your mind to.",
        "Every expert was once a beginner.",
        "Start where you are. Use what you have. Do what you can.",
        "You are capable of more than you know.",
    };

    // Generate a random index to pick a quote
    int randomIndex = std::rand() % quotes.size();

    // Display the quote
    
    /*You could go with this...
    std::cout << quotes[randomIndex] << std::endl;
    */  
    std::cout << "------------------------------------------\n";
    std::cout << "     MOTIVATIONAL QUOTE OF THE DAY   \n";
    std::cout << "------------------------------------------\n";
    std::cout << quotes[randomIndex] << "\n\n";
    std::cout << "------------------------------------------\n";
    std::cout << "Keep going Sydney!!! Consistency always wins.\n";
    std::cout << "------------------------------------------\n";

    return 0;
}