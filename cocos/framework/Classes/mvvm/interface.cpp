#include "interface.h"

namespace framework
{
	Visual::Visual()
	{
		VisualParent = NULL;
		VisualChildrenCount = 0;
	}
	void Visual::AddVisualChild(Visual* child)
	{
		mVisualChilden.push_back(child);
		VisualChildrenCount = mVisualChilden.size();
	}
	Visual* Visual::GetVisualChild(size_t index)
	{
		if(index < mVisualChilden.size())
			return mVisualChilden[index];
		return NULL;
	}
	void Visual::RemoveVisualChild(Visual* child)
	{
		for(std::vector<Visual*>::iterator it = mVisualChilden.begin();
			it != mVisualChilden.end(); ++ it)
		{
			if((*it) == child)
			{
				mVisualChilden.erase(it);
				break;
			}
		}
		VisualChildrenCount = mVisualChilden.size();
	}
}