///////////////////////////////////////////////////////////////////////////////
//  Icarus Game Engine
//  Copyright � 2011 Timothy Leonard
///////////////////////////////////////////////////////////////////////////////
#pragma once

namespace Engine
{
    namespace Platform
    {

		struct BreakpointHandle
		{
			s32 index;

			BreakpointHandle()
			{
				index = -1;
			}
		};

    }
}