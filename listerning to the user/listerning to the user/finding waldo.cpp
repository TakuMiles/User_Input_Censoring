#include <iostream>
#include <string>

int main()
{
	std::string words = "what the hell man!";
	std::cout << words << "\n";
	std::cout << words.replace(words.find("hell"), 4, "****") << "\n";

	std::cout << "=====********=======" << "\n";

	std::string word = "what the hell man!";
	std::cout << word << "\n";
	word.erase(9, 4);
	word.insert(9, "****");
	std::cout << word << "\n";

	std::cout << "=====********=======" << "\n";

	std::string waldo = "i am happy";
	std::cout << waldo.substr(5, 5) << "\n"; //this modefire selects a part of a string and returns the output.

	std::cout << "=======************========" << "\n";
	/*
	std::string input;
	std::cout << "input message: ";
	std::getline(std::cin, input);
	if (input.find("fuck"))
	{
		input = input.replace(input.find("fuck"), 4, "**c*");
		if (input.find("hell"))
		{
			std::cout << input.replace(input.find("hell"), 4, "*e**") <<"\n";
		}
	}
	*/
	std::cout << "+++++++++++*********+++++++++++" << "\n";
	char z = 'a';
	std::string first;
	std::cout << "insert the line: ";
	std::getline(std::cin, first);
	std::cout << first.find_first_of("hlj");		//this modifier finds the character in the quotes and it returns the character's position. it only finds one of the characters in the order its put in the quote.
	
	std::cout << "*****************************************************" << std::endl;

	std::string you = "3597";
	std::cout<< you[0];

}