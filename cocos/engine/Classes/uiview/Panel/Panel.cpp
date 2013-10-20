#include "Panel.h"

namespace engine
{
	namespace uiview
	{
		Panel::Panel():
			Position(this),
			Size(this)
		{
		}
		Panel::~Panel()
		{
		}

		bool Panel::initForMvvm()
		{
			return true;
		}
	}	// namespace uiview
}	// namespace engine
