#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

// Struct for storing typing mistakes (Linked List)
struct Mistake {
    char wrongChar;
    int position;
    Mistake* next;
};

// Function to add a mistake to the linked list
void addMistake(Mistake*& head, char wrongChar, int position) {
    Mistake* newMistake = new Mistake{wrongChar, position, head};
    head = newMistake;
}

// Function to display mistakes
void displayMistakes(Mistake* head) {
    if (!head) {
        cout << "No mistakes! Well done! 🎉\n";
        return;
    }
    cout << "Mistakes made:\n";
    Mistake* temp = head;
    while (temp) {
        cout << "Typed '" << temp->wrongChar << "' at position " << temp->position << endl;
        temp = temp->next;
    }
}

// Function to delete linked list (free memory)
void deleteMistakes(Mistake*& head) {
    while (head) {
        Mistake* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Original text for typing test
    const char* originalText = "Betty Botter bought some butter, But, she said, this butter's bitter; If I put it in my batter, It will make my batter bitter, But a bit of better butter Will make my batter better.";
    int totalChars = strlen(originalText);

    // Dynamically allocate memory for user input
    char* typedText = new char[totalChars + 1];

    cout << "Type the following text as fast and accurately as possible:\n";
    cout << "\"" << originalText << "\"\n\n";
    cout << "Press ENTER when done.\n";

    // Start the timer
    clock_t startTime = clock();
    
    // Take user input
    cin.getline(typedText, totalChars + 1);

    // Stop the timer
    clock_t endTime = clock();
    double timeTaken = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    // Compare input with original text using pointers
    char* tptr = typedText;
    const char* optr = originalText;
    int correctChars = 0, totalMistakes = 0, wordCount = 1;
    Mistake* mistakeList = nullptr;

    for (int i = 0; i < totalChars; i++) {
        if (*tptr == *optr) {
            correctChars++;
        } else {
            addMistake(mistakeList, *tptr, i);
            totalMistakes++;
        }
        if (*tptr == ' ') wordCount++; // Count words
        tptr++;
        optr++;
    }

    // Calculate WPM and accuracy
    double accuracy = ((double)correctChars / totalChars) * 100.0;
    double wpm = (wordCount / timeTaken) * 60.0;

    // Display Results
    cout << "\n--- Typing Test Results ---\n";
    cout << "Typing Speed: " << wpm << " WPM\n";
    cout << "Accuracy: " << accuracy << "%\n";
    displayMistakes(mistakeList);

    // Free dynamically allocated memory
    delete[] typedText;
    deleteMistakes(mistakeList);

    return 0;
} *#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

// Struct for storing typing mistakes (Linked List)
struct Mistake {
    char wrongChar;
    int position;
    Mistake* next;
};

// Function to add a mistake to the linked list
void addMistake(Mistake*& head, char wrongChar, int position) {
    Mistake* newMistake = new Mistake{wrongChar, position, head};
    head = newMistake;
}

// Function to display mistakes
void displayMistakes(Mistake* head) {
    if (!head) {
        cout << "No mistakes! Well done! 🎉\n";
        return;
    }
    cout << "Mistakes made:\n";
    Mistake* temp = head;
    while (temp) {
        cout << "Typed '" << temp->wrongChar << "' at position " << temp->position << endl;
        temp = temp->next;
    }
}

// Function to delete linked list (free memory)
void deleteMistakes(Mistake*& head) {
    while (head) {
        Mistake* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Original text for typing test
    const char* originalText = "Betty Botter bought some butter, But, she said, this butter's bitter; If I put it in my batter, It will make my batter bitter, But a bit of better butter Will make my batter better.";
    int totalChars = strlen(originalText);

    // Dynamically allocate memory for user input
    char* typedText = new char[totalChars + 1];

    cout << "Type the following text as fast and accurately as possible:\n";
    cout << "\"" << originalText << "\"\n\n";
    cout << "Press ENTER when done.\n";

    // Start the timer
    clock_t startTime = clock();
    
    // Take user input
    cin.getline(typedText, totalChars + 1);

    // Stop the timer
    clock_t endTime = clock();
    double timeTaken = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    // Compare input with original text using pointers
    char* tptr = typedText;
    const char* optr = originalText;
    int correctChars = 0, totalMistakes = 0, wordCount = 1;
    Mistake* mistakeList = nullptr;

    for (int i = 0; i < totalChars; i++) {
        if (*tptr == *optr) {
            correctChars++;
        } else {
            addMistake(mistakeList, *tptr, i);
            totalMistakes++;
        }
        if (*tptr == ' ') wordCount++; // Count words
        tptr++;
        optr++;
    }

    // Calculate WPM and accuracy
    double accuracy = ((double)correctChars / totalChars) * 100.0;
    double wpm = (wordCount / timeTaken) * 60.0;

    // Display Results
    cout << "\n--- Typing Test Results ---\n";
    cout << "Typing Speed: " << wpm << " WPM\n";
    cout << "Accuracy: " << accuracy << "%\n";
    displayMistakes(mistakeList);

    // Free dynamically allocated memory
    delete[] typedText;
    deleteMistakes(mistakeList);

    return 0;
}