export module Animal.Cat;

import Animal.Base;

import <iostream>;

namespace mod
{
export struct Cat : public BaseAnimal
{
	virtual const char* getType() const final
	{
		return "Cat";
	}

	virtual void purr() const
	{
		std::cout << getType() << " purrs loudly as it moves in anticipation.\n";
	}

	virtual void watch() const final
	{
		purr();
		eat();
		sleep();
	}
};
}