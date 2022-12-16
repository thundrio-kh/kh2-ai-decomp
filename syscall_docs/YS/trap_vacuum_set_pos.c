---
---
---
name: trap_vacuum_set_pos
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
push unk1 ; (unknown)  (pushFromFSpVal: 108,120)
push unk2 ; (unknown)  (pushFromPSp: 16)
syscall 2, 80 ; trap_vacuum_set_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F5854) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_pos(BD_VALUE_19 *args)
{
  kn::FVector::operator=((kn::FVector *const)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}

//BASIC
---
---
---
appears in:
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
---
---
---
example usage from obj\M_EX210\m_ex.bdscript
L5866:
 pushFromFSpVal 108
 pushImm 0
 sub 
 neqz 
 jz L5896
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSpVal 108
 pushFromPSp 16
 syscall 2, 80 ; trap_vacuum_set_pos (2 in, 0 out)
 halt 
 jmp L5866
