#include "framework.h"
#include "unity/property.h"

using namespace framework;

class aaaa
{
public:
	template<class st, class pt>
	aaaa(st* pST, pt* pPT)
	{
		
	}
	void aaaaf(aaaa* sender, aaaa* params){}

private:
	event<aaaa, aaaa>* pDE;
};

class PropertyTest : unity::PropertyContainer
{
public:

	unity::PropertyTemplaye<int, this, "Value"> mValue;
};

void cccccccccc()
{
}