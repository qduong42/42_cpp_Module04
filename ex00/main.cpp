#include "Animal.hpp"

int main()
{
	std::cout << "====James====" << std::endl;
	Animal James;
	std::cout << "====Sam====" << std::endl;
	Animal Sam("Terrier");
	James = Sam;
	std::cout << "====John====" << std::endl;
	Animal John(Sam);
	std::cout << "====Tim====" << std::endl;
	Animal Tim = Sam;
	return (0);
}