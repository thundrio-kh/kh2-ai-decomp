---
---
---
name: trap_bg_set_belt_conveyor
---
---
---
category: special
---
---
---
documentation level: incomplete
---
---
---
push unk1 ; (unknown)  (pushFromPSp: 16)
syscall 1, 158 ; trap_bg_set_belt_conveyor (1 in, 0 out)
---
---
---
description: Unknown. Used by conveyor belts in Oogie Boogie boss room
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
obj\F_HB110\f_hb.bdscript ((F) ??? (HB))
obj\F_NM140\f_nm.bdscript ((F) ??? (NM))
obj\F_NM150\f_nm.bdscript ((F) ??? (NM))
---
---
---
example usage from obj\F_HB110\f_hb.bdscript
L2054:
 popToSp 0
 pushFromPSp 16
 pushFromFSp 0
 negf 
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 12, L2092
 pushFromPSp 16
 pushImmf 1.570796
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 158 ; trap_bg_set_belt_conveyor (1 in, 0 out)
 ret 
