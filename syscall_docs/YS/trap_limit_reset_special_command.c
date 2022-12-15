---
---
---
name: trap_limit_reset_special_command
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
syscall 2, 89 ; trap_limit_reset_special_command (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LIMIT::reset_special_command(YS::LIMIT_1 *const this)
/----- (00000000004F56CC) ----------------------------------------------------
void __fastcall YS::trap_limit_reset_special_command(BD_VALUE_19 *args)
{
  YS::LIMIT::reset_special_command((YS::LIMIT_1 *const)(*args)[0]);
}
->
/----- (000000000043FDDC) ----------------------------------------------------
void __fastcall YS::LIMIT::reset_special_command(YS::LIMIT_1 *const this)
{
  if ( (*(_DWORD *)&(*this)[64] & 8) != 0 )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)(*(unsigned int *)&(*this)[12]
                                                                                         + 0xB44LL)
                                                      + 0x18LL))();
    --*(_DWORD *)&(*this)[60];
    *(_DWORD *)(unsigned int)((_DWORD)this + 64) &= 0xFFFFFFF7;
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

