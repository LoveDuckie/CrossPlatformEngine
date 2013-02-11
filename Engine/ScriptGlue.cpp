///////////////////////////////////////////////////////////////////////////////
//  Icarus Game Engine
//  Copyright � 2011 Timothy Leonard
///////////////////////////////////////////////////////////////////////////////	
// Generated by generate_code_glue.py
// 28-08-2012 00:40
///////////////////////////////////////////////////////////////////////////////	
// WARNING: Do not modify this file in any way! It is automatically generated 
//			as part of the build process it should never have to be manually
//			modified.
///////////////////////////////////////////////////////////////////////////////	

#include "ScriptGlue.h"

#include "CScriptVirtualMachine.h"

namespace Engine
{
	namespace Scripting
	{
		namespace Native
		{
			namespace Glue
			{
				///////////////////////////////////////////////////////////////////////////////	
				// Our pretty glue functions!
				///////////////////////////////////////////////////////////////////////////////	
void ScriptGlue_0_Print(CScriptExecutionContext* context)
{
	if (context->GetParameterCount() != 1)
	{
		context->InvalidParameterCount(1);
		return;
	}
	const Engine::Containers::CString& param0 = context->GetStringParameter(0);
	Engine::Scripting::Native::System::Print(param0);
}


				///////////////////////////////////////////////////////////////////////////////	
				// Registration functions to be called from inside the codebase.
				///////////////////////////////////////////////////////////////////////////////	
				void RegisterScriptFunctions(CScriptVirtualMachine* context)
				{
context->RegisterNativeFunction("Print", &ScriptGlue_0_Print);

				}	
			}
		}
	}
}
