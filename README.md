# Intro to C++ Programming

## Prerequisite for the following projects
- C++ Compiler (supporting C++14)
- Boost C++ Libraries (for string splitting)

## Project #1: [Grade Calculator](https://github.com/YoAx22/Intro-to-Systems-Programming-and-C/tree/main/GradeCalculator)
This program reads student assessment data and assessment weights from input files, calculates the course grades, and provides the results along with letter grade equivalents. It uses a weighted average approach to compute the overall course grade.

### Methods
- parseInputFile(istream& input, map<string, double>& earned, map<string, double>& total)
    - Reads student assessment data from the input file and populates the earnedPointsMap and totalPointsMap.

- parseWeights(istream& input, map<string, double>& weights)
    - Reads assessment weights from the weights file and populates the weightsMap.

- printResults(ostream& output, map<string, double>& earned, map<string, double>& total, map<string, double>& weights)
    - Calculates the assessment grades, overall course grade, and letter grade equivalents. Outputs the results to the specified output stream.

- convertLetter(double grade)
    - Converts a numerical grade into a letter grade equivalent.

- The main function reads command-line arguments, opens the input and output files, processes the data, and outputs the results to the output file.

### Usage
Compile the program using a C++ compiler
-     g++ -std=c++11 gradecalculator.cpp -o grade_calculator
Run the program with three command-line arguments: input file with student data, output file for results, and input file with weights.
-     ./grade_calculator sample_grades.txt output.txt weights.txt


## Project #2: [Bank Account Management](https://github.com/YoAx22/Intro-to-Systems-Programming-and-C/tree/main/BankAccount)
This C++ program manages bank accounts, allowing users to perform operations like depositing and withdrawing money, updating the address, and retrieving the current balance.

### Properties
The properties of a bank account are:

- owner: The owner of the bank account.
- balance: The current balance of the bank account.
- address: The address associated with the bank account.

### Methods
- depositMoney(double money)
    - Deposits a specified amount of money into the account.
- withdrawMoney(double money)
    - Withdraws a specified amount of money from the account.
- getBalance(double money)
    - Retrieves the current balance of the account.
- updateAddress(string address)
    - Updates the address associated with the account.
- getAddress(const std::string& address)
    - Retrieves the address associated with the account.

### Usage
Compile the program using a C++ compiler
-     g++ -std=c++14 BankAccount.cpp testBank.cpp -o BankTest
Run the compiled executable
-     ./BankTest testBank.cpp
