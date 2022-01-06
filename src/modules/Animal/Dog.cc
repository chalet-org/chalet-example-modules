export module Animal.Dog;

import Animal.Base;

import <iostream>;

namespace mod
{
export struct Dog : public BaseAnimal
{
	virtual const char* getType() const
	{
		return "Dog";
	}

	virtual void bark() const
	{
		std::cout << getType() << " barks at passing vehicles.\n";
	}

	virtual void watch() const final
	{
		eat();
		bark();
		sleep();
	}
};
}