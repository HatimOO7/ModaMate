#include <iostream>
#include <string>
using namespace std;

// Function to get valid input for gender
string getValidGender() {
    string gender;
    do {
        cout << "Enter your gender (male/female): ";
        cin >> gender;
    } while (gender != "male" && gender != "female");
    return gender;
}

// Function to get valid input for weight
int getValidWeight() {
    int weight;
    do {
        cout << "Enter your body weight (in kg): ";
        cin >> weight;
    } while (weight <= 0); // Assuming weight cannot be negative
    return weight;
}

// Function to get valid input for height in feet and inches
void getValidHeight(int& feet, int& inches) {
    do {
        cout << "Enter your height in feet and inches (e.g., 5 9 for 5 feet 9 inches): ";
        cin >> feet >> inches;
    } while (feet <= 0 || inches < 0 || inches >= 12);
}

// Function to get valid input for age
int getValidAge() {
    int age;
    do {
        cout << "Enter your age: ";
        cin >> age;
    } while (age <= 0); // Assuming age cannot be negative
    return age;
}

// Function to get valid input for event
string getValidEvent() {
    string event;
    do {
        cout << "Enter the type of event (casual/formal/islamic): ";
        cin >> event;
    } while (event != "casual" && event != "formal" && event != "islamic");
    return event;
}

// Function to determine clothing suggestion
string getClothingSuggestion(const string& gender, int weight, int feet, int inches, int age, const string& event) {
    int totalHeightInInches = feet * 12 + inches;

    if (gender == "male") {
        // Consider height and age in suggestions for males
        if (event == "formal") {
            return (totalHeightInInches < 170 ? "A well-fitted suit with a tie and formal shoes." : "A tailored suit with a tie and formal shoes.");
        } else if (event == "islamic") {
            return "A traditional Islamic thobe and a skullcap.";
        } else {
            return "A nice pair of jeans, a casual shirt, and sneakers.";
        }
    } else if (gender == "female") {
        // Consider height and age in suggestions for females
        if (event == "formal") {
            return (totalHeightInInches < 160 ? "An elegant dress with heels and accessories." : "A long evening gown with high heels and jewelry.");
        } else if (event == "islamic") {
            return "A modest Islamic dress such as abaya or jilbab with a hijab.";
        } else {
            return "A stylish blouse, skirt, and comfortable flats.";
        }
    } else {
        return "Invalid gender input.";
    }
}


