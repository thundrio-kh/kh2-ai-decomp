---
---
---
name: trap_bg_set_belt_conveyor
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
syscall 1, 158 ; trap_bg_set_belt_conveyor (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
TASK_0 *__fastcall FIELD::CreateTask(int id, int priority, TASK_FUNC entry_func)
/----- (0000000000503590) ----------------------------------------------------
void __fastcall YS::trap_bg_set_belt_conveyor(BD_VALUE_21 *args)
{
  TASK_0 *v2; // r3
  float *v3; // r4

  v2 = FIELD::CreateTask(1, 14002, (TASK_FUNC)&YS::trap_bg_set_belt_conveyor_task);
  *(_DWORD *)&(*v2)[16] = 1;
  v3 = (float *)(*args)[0];
  *(float *)&(*v2)[20] = *v3;
  *(float *)&(*v2)[24] = v3[1];
  *(float *)&(*v2)[28] = v3[2];
}
// 79DD78: using guessed type __int64 (__fastcall *__ptr32 YS::trap_bg_set_belt_conveyor_task)(YS *__hidden this, TASK *);
->
/----- (0000000000038F98) ----------------------------------------------------
TASK_0 *__fastcall FIELD::CreateTask(int id, int priority, TASK_FUNC entry_func)
{
  return TASK_MANAGER::create_task((TASK_MANAGER_11 *const)*(unsigned int *)&FIELD::Mode[4], id, priority, entry_func);
}


---
---
---
appears in:

---
---
---
example usage from NA

