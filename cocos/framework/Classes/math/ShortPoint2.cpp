#include "ShortPoint2.h"

namespace framework
{
	namespace math
	{
		const ShortPoint2 ShortPoint2::ZERO							= ShortPoint2(0,0);
		const ShortPoint2 ShortPoint2::UNIT_X						= ShortPoint2(1,0);
		const ShortPoint2 ShortPoint2::UNIT_Y						= ShortPoint2(0,1);
		const ShortPoint2 ShortPoint2::NEGATIVE_UNIT_X	= ShortPoint2(-1,0);
		const ShortPoint2 ShortPoint2::NEGATIVE_UNIT_Y	= ShortPoint2(0,-1);
		const ShortPoint2 ShortPoint2::UNIT_SCALE				= ShortPoint2(1,1);

		ShortPoint2 ShortPoint2::ConvertFromDirectionIndex(int index)
		{
			switch( index)
			{
				case 0: return ShortPoint2(1,0);		// {→}
				case 1: return ShortPoint2(1,1);		// {右下}
				case 2: return ShortPoint2(0,1);		// {↓}
				case 3: return ShortPoint2(-1,-1);	// {左下}
				case 4: return ShortPoint2(-1,0);		// {←}
				case 5: return ShortPoint2(-1,-1);	// {左上}
				case 6: return ShortPoint2(0,1);		// {↑}
				case 7: return ShortPoint2(1,-1);		// {右上}
				default: return ShortPoint2::ZERO;
			}
		}
		int ShortPoint2::ConvertToDirectionIndex(const ShortPoint2& offset)
		{
			if(offset.x>= 1 && offset.y== 0)
				return 0;
			if(offset.x>= 1 && offset.y>= 1)
				return 1;
			if(offset.x== 0 && offset.y>= 1)
				return 2;
			if(offset.x<=-1 && offset.y<=-1)
				return 3;
			if(offset.x<=-1 && offset.y== 0)
				return 4;
			if(offset.x<=-1 && offset.y<=-1)
				return 5;
			if(offset.x== 0 && offset.y>=1)
				return 6;
			if(offset.x>= 0 && offset.y<=-1)
				return 7;
			return 8;
		}
	}	// namespace math
}	//namespace framework
