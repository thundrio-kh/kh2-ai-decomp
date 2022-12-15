---
---
---
name: trap_target_clear
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
syscall 6, 16 ; trap_target_clear (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
/----- (0000000000625E60) ----------------------------------------------------
void __fastcall Ts::trap_target_clear(BD_VALUE_25 *args)
{
  YS::TARGET::clear((YS::TARGET_108 *const)(*args)[0]);
}
->
/----- (00000000004A8118) ----------------------------------------------------
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
}


---
---
---
appears in:

---
---
---
example usage from NA

