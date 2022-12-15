---
---
---
name: trap_attack_free
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
syscall 2, 13 ; trap_attack_free (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK::destroy(YS::ATTACK_10 *const this)
/----- (00000000004F4580) ----------------------------------------------------
void __fastcall YS::trap_attack_free(BD_VALUE_19 *args)
{
  YS::ATTACK::destroy((YS::ATTACK_10 *const)(*args)[0]);
}
->
/----- (0000000000408650) ----------------------------------------------------
void __fastcall YS::ATTACK::destroy(YS::ATTACK_10 *const this)
{
  int v2; // r6
  int v3; // r5

  if ( YS::IsExec )
  {
    if ( (_DWORD)this )
    {
      v2 = 0;
      while ( 1 )
      {
        v3 = YS::AttackList;
        if ( v2 )
          v3 = *(_DWORD *)(unsigned int)(v2 + 192);
        v2 = v3;
        if ( !v3 )
          break;
        if ( v3 == (_DWORD)this )
        {
          *(_DWORD *)(unsigned int)((_DWORD)this + 4) |= 0x800u;
          return;
        }
      }
    }
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("illegal ATTACK#destroy, %p", this);
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\attack.cpp", 915);
  }
}
// C78378: using guessed type int YS::AttackList;
// C78380: using guessed type char YS::IsExec;


---
---
---
appears in:

---
---
---
example usage from NA

