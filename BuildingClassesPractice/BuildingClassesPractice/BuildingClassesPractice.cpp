#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

class Enemy {
public:
	typedef enum State {
		angry,
		hungry,
		pissedoff,
		murderous,
		horny
	};
	std::string name;
	State state;
	
	//added comments
}

int _tmain(int argc, _TCHAR* argv[])
{

	Enemy daniel;

	daniel.state = daniel.angry;

	typedef enum LineComponent {
		//a set of states that can be used
		elcShapeType,
		elcShapeName,
		elcXCoord,
		elcYCoord,
		elcNumLineComponents
	};
	
						//ShapeType,ShapeName,X,Y
	std::string csvLine = "circle,CircleA,1.3,-2.5;"; //A string of an a shape you set up 

	//setup an input string stream and give it csvLine as its initial data
	std::istringstream inputStream(csvLine);

	LineComponent currentComponent = elcShapeType; //assigns the string to the first state

	std::string lineElement;
	while (std::getline(inputStream, lineElement, ',')) // breaks the above string into a new part everytime it finds a "," (therfore there will be 4 parts)
	{                                                   // and assigning the new part to the next state in the list in order.
		std::cout << lineElement << std::endl;

		if ((currentComponent == elcXCoord) || (currentComponent == elcYCoord)) // once it finds the X and Y Coord States, it converts the string inside it to a float.
		{
			float lineElementAsFloat = std::atof(lineElement.c_str()); //converting the string into the float
		}

		currentComponent = (LineComponent)(currentComponent + 1); // Sorts though each of the LineComponents / States 1 by 1
	}

	std::ostringstream outputStream; 
	outputStream << "circle" << "," << "CircleA" << "," << 1.3f << "," << -2.5f;
	std::string builtCSVLine = outputStream.str();
	









	std::string name;
	float radius;
	float length;
	float width;

	std::cout << "Enter the Name" << std::endl;
	std::cin >> name;
	//if (name == "circle"){
		//std::cout << "Enter the Radius" << std::endl;
		std::cin >> radius;
		//std::cout << "You have a " << name << " with a Radius of " << radius << "." << std::endl;
	}
	//if (name == "square"){
	//std::cout << "Enter the length" << std::endl;
	//std::cin >> length;
	//std::cout << "Enter the width" << std::endl;
	//std::cin >> width;
	//std::cout << "You have a " << name << " with a Length of " << length << " and a Width of " << width << std::endl;
//}
	return 0;
};


