#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"
#include "Factory.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	Factory* fact = new Factory();

	fact->parse(argv, argc);
}

