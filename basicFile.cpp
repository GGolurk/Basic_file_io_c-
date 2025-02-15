#include <fstream>
#include <sstream>
#include <iostream>

int main(){
	// Open file
	std::ifstream inFile;
	inFile.open("data.csv");
	// Set up string stream stuff
	std::string line;
	std::stringstream loader;
	std::stringstream converter;
	while(getline(inFile, line)){
		// This is so painfully clunky but I couldn't figure out another way to make it function.
		// Looking forward to the review of this to see how I can do it better, because I see the power of stringstreams,
		// but I don't know how to implement them without using 20 lines of code, as I got a ton of errors that were incomprehensible while trying.
		loader.clear();
		loader.str("");
		converter.clear();
		converter.str("");
		loader.str(line);
		std::string snum1;
		std::string snum2;
		std::string word;
		int num1;
		int num2;
		getline(loader, snum1, ',');
		getline(loader, snum2, ',');
		getline(loader, word);
		converter << snum1;
		converter >> num1;
		converter.clear();
		converter.str("");
		converter << snum2;
		converter >> num2;
		// This part's pretty simple.
		for(int i = 0; i < num1 + num2; i++){
			std::cout << word << " ";
		} // End for
		std::cout << std::endl;
	} // End while
	// Close file (thought you had to name the file here for a minute)
	inFile.close();
} // End main
