#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "lab-04/base.hpp"

class Factory : public Base {
	private:
		Base* root;
	public:
		virtual Base* parse (char** input, int length) {}
};

#endif //__FACTORY_HPP__
