module;

#include <iostream>

export module Animal.Base;

namespace mod
{
export struct BaseAnimal
{
	virtual ~BaseAnimal() = default;

	virtual const char* getType() const = 0;
	virtual void watch() const = 0;

	virtual void eat() const
	{
		std::cout << getType() << " eats from the food dish.\n";
	}

	virtual void sleep() const
	{
		std::cout << getType() << " finds a quiet and comfortable place to sleep.\n";
	}
};
}
