﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_AGENT_PROPERTIES_H_
#define _BEHAVIAC_AGENT_PROPERTIES_H_

#include "behaviac_agent_headers.h"
#include "behaviac_agent_member_visitor.h"
#include "behaviac_customized_types.h"

namespace behaviac
{
	// ---------------------------------------------------------------------
	// Delegate methods
	// ---------------------------------------------------------------------

	inline void FunctionPointer_behaviac_Agent_LogMessage(char* param0) { behaviac::Agent::LogMessage(param0); }

	inline void Set_BasicLogic_CurrentTask(Agent* self, TaskIndividual value) { ((BasicLogic*)self)->CurrentTask = value; };
	inline const void* Get_BasicLogic_CurrentTask(Agent* self) { return &((BasicLogic*)self)->CurrentTask; };

	inline void Set_BasicLogic_CurrentType(Agent* self, TaskType value) { ((BasicLogic*)self)->CurrentType = value; };
	inline const void* Get_BasicLogic_CurrentType(Agent* self) { return &((BasicLogic*)self)->CurrentType; };

	inline void Set_BasicLogic_InputTask(Agent* self, TaskIndividual value) { ((BasicLogic*)self)->InputTask = value; };
	inline const void* Get_BasicLogic_InputTask(Agent* self) { return &((BasicLogic*)self)->InputTask; };

	inline void Set_BasicLogic_InputType(Agent* self, TaskType value) { ((BasicLogic*)self)->InputType = value; };
	inline const void* Get_BasicLogic_InputType(Agent* self) { return &((BasicLogic*)self)->InputType; };

	inline void FunctionPointer_BasicLogic_LogMessage(char* param0) { BasicLogic::LogMessage(param0); }
	inline void FunctionPointer_BasicLogic_Upper_Processing(Agent* self) { ((BasicLogic*)self)->_Execute_Method_<METHOD_TYPE_BasicLogic_Upper_Processing, void >(); }

	inline void Set_BlackBoard_car_number(Agent* self, int value) { ((BlackBoard*)self)->car_number = value; };
	inline const void* Get_BlackBoard_car_number(Agent* self) { return &((BlackBoard*)self)->car_number; };

	inline void FunctionPointer_BlackBoard_LogMessage(char* param0) { BlackBoard::LogMessage(param0); }

	inline void Set_ForegrdFunc_fore_func_state(Agent* self, ForeFuncState value) { ((ForegrdFunc*)self)->fore_func_state = value; };
	inline const void* Get_ForegrdFunc_fore_func_state(Agent* self) { return &((ForegrdFunc*)self)->fore_func_state; };

	inline void FunctionPointer_ForegrdFunc_Assemble(Agent* self) { ((ForegrdFunc*)self)->_Execute_Method_<METHOD_TYPE_ForegrdFunc_Assemble, void >(); }
	inline void FunctionPointer_ForegrdFunc_LogMessage(char* param0) { ForegrdFunc::LogMessage(param0); }
	inline void FunctionPointer_BackgrdFunc_LogMessage(char* param0) { BackgrdFunc::LogMessage(param0); }
	inline void FunctionPointer_BackgrdFunc_Pause(Agent* self) { ((BackgrdFunc*)self)->Pause(); }
	inline void FunctionPointer_BackgrdFunc_Resume(Agent* self) { ((BackgrdFunc*)self)->Resume(); }
	inline void FunctionPointer_BackgrdFunc_STOP(Agent* self) { ((BackgrdFunc*)self)->STOP(); }
}
#endif // _BEHAVIAC_AGENT_PROPERTIES_H_
