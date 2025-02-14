#include <fstream>
#include <sstream>
#include <iostream>

int main(){
	// Open file
	std::ifstream inFile;
	inFile.open("data.csv");
	// Set up string stream
	std::stringstream converter;
	// Do the stuff
	std::string line;
	while(getline(inFile, line)){
		converter.clear();
		converter.str("");
		converter.str(line);
		int num1;
		int num2;
		std::string string1;
		getline(converter, num1, ',');
		getline(converter, num2, ',');
		getline(converter, string1);
		converter >> num1 >> num2 >> string1;
		for(int i = 0; i < (num1 + num2); i++){
			std::cout << string1 << " ";
		}
		std::cout << std::endl;
	} // End while
	// Close file (thought you had to name the file here for a minute)
	inFile.close();
} // End main
