# ModaMate
# A Clothing Recommendation System

# Code Location 
Please check the **master** branch

## Project Description
Sometimes it becomes too hard to choose proper clothes, on the time of go out for an event. This project is a clothing recommendation system that provides personalized suggestions based on various factors such as gender, weight, height, age, and event type. It offers clothing recommendations for casual, formal, and Islamic dress preferences.

## Way to Build and Run the Project
1. **Clone the Repository**: Clone this repository to your local machine.
    ```bash
    git clone https://github.com/your-username/your-repo.git
    ```

2. **Navigate to the Project Directory**: Move into the directory containing the project files.
    ```bash
    cd clothing-recommendation-system
    ```

3. **Compile the Code**: Compile the C++ code using a C++ compiler (e.g., g++).
    ```bash
    g++ main.cpp -o clothing_suggestions
    ```

4. **Run the Program**: Execute the compiled binary file.
    ```bash
    ./clothing_suggestions
    ```

## Functions in the Code
1. `getValidGender()`: Collects valid user input for gender (limited to "male" or "female").
2. `getValidWeight()`: Collects valid user input for weight (assuming weight cannot be negative).
3. `getValidHeight()`: Collects valid user input for height in feet and inches (assumes feet > 0, inches >= 0 and < 12).
4. `getValidAge()`: Collects valid user input for age (assuming age cannot be negative).
5. `getValidEvent()`: Collects valid user input for the type of event (limited to "casual", "formal", or "islamic").
6. `getClothingSuggestion()`: Determines clothing suggestions based on the provided user inputs (gender, weight, height, age, event).

## Usage
Upon running the program, users are prompted to enter specific details:
- Gender (male/female)
- Body weight (in kg)
- Height in feet and inches
- Age
- Type of event (casual/formal/islamic)

Based on these inputs, the program generates a clothing suggestion considering different styles and attire suitable for the given criteria.

    

## Additional Instructions or Dependencies
- **C++ Compiler**: This project is written in C++ and requires a C++ compiler (such as g++) to compile and run the code.
- **Input Validation**:
- Ensure to provide accurate and valid information for precise clothing suggestions.
- The program assumes certain limitations for each input type (e.g., non-negative values for weight and age, specific ranges for height and gender inputs).
- **Adjusting Suggestions**: The clothing suggestions can be modified within the code to match specific preferences or cultural variations.


## Sample Output
Upon providing the necessary inputs, the program displays a suggestion for clothing suitable for the specified gender, body metrics, age, and event type.

## File Structure
- `code.cpp`: Contains the C++ code for generating clothing suggestions based on user input.

## License
This program is licensed under the [MIT License](LICENSE).

## Author 
- **Hatim Al Amin Chowdhury**
- **ID: 222-115-205**
