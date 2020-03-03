#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "lab-04/base.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Factory {
	private:
		Base* root;
		std::vector<std::string> numbers;
		std::vector<Base*> nums;
		std::string sub;
		std::string temp;
		int index = 0;
		
	public:
		Base* parse (char** input, int length) {
			sub = input[1];
			length = 0;

			for (int i = 0; i <= sub.length(); i++) {
				length++;

				if (sub[i] == '+' || sub[i] == '-' || sub[i] == '*' || sub[i] == '/') {
					temp = sub.substr(index, length-1);

					numbers.push_back(temp);

					if (i != sub.length()) {
						index = i;
					}

					temp = sub.substr(index, 1);
					numbers.push_back(temp);
					index++;
					length = 0;	
				}
				
				if (i == sub.length()) {
					temp = sub.substr(index, length);
					numbers.push_back(temp);
				}
			}

			for (int j = 0; j < numbers.size(); j++) {
				cout << numbers.at(j) << endl;
			}

		 	
		};	
		
};

#endif //__FACTORY_HPP__
