#include <iostream>

namespace Color
{
	enum Type
	{
		RED,
		GREEN,
		BLUE
	};
}

namespace TrafficLight
{
	enum Type
	{
		GREEN=1,
		YELLOW,
		RED
	};
}

using namespace std;
int main()
{
	Color::Type color = Color::Type::GREEN;

    //cout << Color::Type::GREEN <<endl; 

	if (color == TrafficLight::Type::GREEN)
		std::cout << "Same Green value";
	else
		std::cout << "Different Green Value";
}