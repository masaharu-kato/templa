#include <regex>
#include <iostream>

int main(void) {

	while(true) {

		std::string regtext;

		std::cout << "Regular Expression: ";
		std::getline(std::cin, regtext);
		if(!regtext.length()) break;

		std::regex reg(regtext);

		while(true){

			std::string text;

			std::cout << "> ";
			std::getline(std::cin, text);
			if(!text.length()) break;

		//	if(std::regex_match (text, reg)) /* Full matching */
			if(std::regex_search(text, reg)) /* Sub  matching */
			{
				std::cout << "Matched.\n";
			}
			else{
				std::cout << "Not matched.\n";
			}

		}

	}

}

