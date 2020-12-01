#pragma once
#include <string>
#include "Tools.h"

class Section
{
protected:
	std::string m_category;
	std::string m_type;
public:
	Section();
	std::string createString();
	void setCategory(std::string);
	void setType(std::string);
	~Section()
	{
		std::cout << "Destructor 'Section' is working" << std::endl;
	}
};