#include "graphyQMLEngine.h"

namespace graphyQMLEngine
{
#ifdef _WIN32
	long _stdcall test()
#elif linux
	long test()
#endif
	{
		return 2;
	}
}
