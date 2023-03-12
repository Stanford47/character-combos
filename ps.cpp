#include <bits/stdc++.h>

void writeCombinations(std::string s, std::string file_name);

int main()
{
	std::string string;
	std::string file_name;
	std::cout << "Please enter the string of characters to find" << std::endl;
	std::getline(std::cin, string);

	std::cout << "Enter the name of the file to output the combinations to" << std::endl;
	std::getline(std::cin, file_name);

	writeCombinations(string, file_name);
}

void writeCombinations(std::string s, std::string file_name)
{
	std::ofstream file;
	file.open(file_name);

	std::cout << "Writing all combinations of string " << s << std::endl;

	std::sort(s.begin(), s.end());
	std::bitset<10> b;

	int count = 0;

	for(int i = 0; i < pow(2,s.size()); ++i) {
		for(int j = 0; j < 10; j++) {
			if(b[j] == 1) {
				file << s[j];
			}
		}
		count++;
		file << std::endl;
		for(int x = 0; x < 10; x++) {
			if(b[x] == 1) {
				b[x].flip();
			} else {
				b[x].flip();
				break;
			}
		}
	}
	std::cout << "Done!!!" << std::endl;
}
