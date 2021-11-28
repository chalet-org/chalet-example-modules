
#include <library/LivableEnvironment.hpp>

#include <iostream>

namespace mod
{
/*****************************************************************************/
bool LivableEnvironment::check()
{
	std::cout << "This environment is suitable for pets.\n";
	return true;
}

}
