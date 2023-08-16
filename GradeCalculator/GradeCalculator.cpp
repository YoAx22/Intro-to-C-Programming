// Copyright 2020 Yoann-Axel Ahyi
// Course: CSE 278
// Instructor: James Kiper
#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#include<map>
#include<boost/algorithm/string/split.hpp>
#include<boost/algorithm/string.hpp>
#include<vector>
using namespace std;

string convertLetter(double grade) {
if (grade >= 97) { return "A+"; }
else if (grade >= 93) { return "A"; }
else if (grade >= 90) { return "A-"; }
else if (grade >= 87) { return "B+"; }
else if (grade >= 83) { return "B"; }
else if (grade >= 80) { return "B-"; }
else if (grade >= 77) { return "C+"; }
else if (grade >= 73) { return "C"; }
else if (grade >= 70) { return "C-"; }
else if (grade >= 67) { return "D+"; }
else if (grade >= 63) { return "D"; }
else if (grade >= 60) { return "D-"; }
return "F";
}

void parseInputFile(istream& input,
map<string, double>& earned,
map<string, double>& total) {
string line;
while ( getline(input, line) ) {
vector<string> strVec;
boost::split(strVec, line, boost::is_any_of(","));
earned[strVec[0]] += stod(strVec[1]);
total[strVec[0]] += stod(strVec[2]);
}
return;
}

void parseWeights(istream& input,
map<string, double>& weights) {
string line;
while ( getline(input, line) ) {
vector<string> strVec;
boost::split(strVec, line, boost::is_any_of(","));
weights[strVec[0]] += stod(strVec[1]);
}
}

void printResults(ostream& output,
map<string, double>& earned,
map<string, double>& total,
map<string, double>& weights) {
// Variable to store course grade
double score = 0;

// Compute the overall score
for ( auto pair : weights ) {
string key = pair.first;
double assessmentGrade = (earned[key] / total[key]) * 100;
score += weights[key] * assessmentGrade;

output << key << ": " << fixed << setprecision(2)
<< assessmentGrade << "% (" << convertLetter(assessmentGrade)
<< ")" << endl;
}

output << "Course Grade: " << fixed << setprecision(2)
<< score << "% (" << convertLetter(score) << ")" << endl;
}

int main(int argc, char* argv[]) {
if ( argc != 4 ) {
cerr << "Need to specify necessary files" << endl;
return 0;
}


ifstream input(argv[1]);
ofstream output(argv[2]);
ifstream weights(argv[3]);


if ( !input.good() || !output.good() || !weights.good() ) {
cerr << "There was an error opening one of the files" << endl;
return 0;
}


map<string, double> earnedPointsMap;
map<string, double> totalPointsMap;
map<string, double> weightsMap;

// Read input file to some data structure
parseInputFile(input, earnedPointsMap, totalPointsMap);


parseWeights(weights, weightsMap);


input.close();
weights.close();

// Display output
printResults(output, earnedPointsMap, totalPointsMap, weightsMap);
printResults(cout, earnedPointsMap, totalPointsMap, weightsMap);
// Close output file
output.close();
return 0;
} 
