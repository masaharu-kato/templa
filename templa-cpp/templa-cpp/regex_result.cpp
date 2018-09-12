#include <regex>
#include <iostream>

int main(void) {

	while(true) {

		std::string regtext;

		std::cout << "Regular Expression: ";
		std::getline(std::cin, regtext);
		if(!regtext.length()) break;

		std::regex reg(regtext.c_str() /* , std::regex_constants::hogehoge */);

		while(true){

			std::string text;

			std::cout << "> ";
			std::getline(std::cin, text);
			if(!text.length()) break;

			std::cmatch m;

		//	if(std::regex_match (text, reg)) /* Full matching */
			if(std::regex_search(text.c_str(), m, reg)) /* Sub  matching */
			{

				std::cout << "ready = " << std::boolalpha << m.ready() << ", empty = " << m.empty() << std::endl << std::endl;
				std::cout << "prefix:'" << m.prefix() << '\'' << std::endl;
				for (std::size_t i = 0, n = m.size(); i < n; ++i) {
					std::cout << i << ":'" << m.str(i) << "\', position = " << m.position(i) << ", length = " << m.length(i) << std::endl;
				}
				std::cout << "suffix:'" << m.suffix() << '\'' << std::endl << std::endl;

			}
			else{
				std::cout << "Not matched.\n";
			}

		}

	}

}

