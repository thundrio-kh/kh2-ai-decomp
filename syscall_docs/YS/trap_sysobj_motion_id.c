---
---
---
name: trap_sysobj_motion_id
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
syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F7710) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_id(BD_VALUE_21 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x154LL);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

