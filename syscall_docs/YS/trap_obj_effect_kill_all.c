---
---
---
name: trap_obj_effect_kill_all
---
---
---
category: effect
---
---
---
documentation level: untested
---
---
---
push pax ; (ryj::PAX_161 *)  (A PAX effect)
syscall 1, 349 ; trap_obj_effect_kill_all (1 in, 0 out)
---
---
---
description: Kills all effects for an object PAX
---
---
---
decompiled code:
void __fastcall ryj::PAX::kill_all(ryj::PAX_161 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000005002E4) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_kill_all(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r4
  __int64 v9; // r30
  unsigned __int64 v10; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v8 = back_chain;
  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  ryj::PAX::kill_all((ryj::PAX_161 *const)(unsigned int)(*(_DWORD *)(v9 + 4) + 128), v8, a3, a4, a5, a6, a7, a8);
}
// 5002F4: variable 'back_chain' is possibly undefined
// 5003D4: variable 'v8' is possibly undefined
// 5003D4: variable 'a3' is possibly undefined
// 5003D4: variable 'a4' is possibly undefined
// 5003D4: variable 'a5' is possibly undefined
// 5003D4: variable 'a6' is possibly undefined
// 5003D4: variable 'a7' is possibly undefined
// 5003D4: variable 'a8' is possibly undefined
->
/----- (00000000002B48BC) ----------------------------------------------------
void __fastcall ryj::PAX::kill_all(ryj::PAX_161 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r23
  int v10; // r21
  unsigned __int64 v11; // r22
  __int64 v12; // r24
  signed int v13; // r3
  unsigned __int64 v14; // r3
  __int64 back_chain; // [sp+0h] [-D0h]

  v9 = *(unsigned int *)&(*this)[12];
  if ( (_DWORD)v9 )
  {
    do
    {
      v10 = *(_DWORD *)&(*this)[12];
      v11 = (unsigned int)(v9 + 96);
      v12 = *(unsigned int *)v11;
      if ( (_DWORD)v9 == v10 )
      {
        v10 = 0;
        *(_DWORD *)&(*this)[12] = v12;
      }
      else
      {
        while ( 1 )
        {
          a4 = (unsigned int)(v10 + 96);
          a3 = *(unsigned int *)a4;
          if ( (_DWORD)a3 == (_DWORD)v9 )
            break;
          v10 = *(_DWORD *)a4;
          a7 = (unsigned int)*(_QWORD *)(back_chain + 16);
          if ( !(_DWORD)a3 )
          {
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "prev != NULL",
              "common",
              "../yasui/list.h",
              131LL,
              "unlink",
              (const void *)a7);
            ErrorRaise();
            Axa::AxaAssert("../yasui/list.h", 131);
          }
        }
        *(_DWORD *)a4 = *(_DWORD *)v11;
      }
      if ( (_DWORD)v9 == *(_DWORD *)&(*this)[16] )
        *(_DWORD *)&(*this)[16] = v10;
      *(_DWORD *)v11 = 0;
      ryj::EFFECT::kill((ryj::EFFECT_144 *const)*(unsigned int *)(v9 + 64), a2, a3, a4, a5, a6, a7, a8);
      v13 = *(_DWORD *)(v9 + 84);
      if ( v13 >= 0 )
        SOUND::destroySe(v13, 120, a3, a4, a5, a6, a7, a8);
      if ( (_DWORD)v9 )
      {
        ryj::PAX::MANAGER::~MANAGER((ryj::PAX_161::MANAGER *const)v9);
        v14 = (unsigned int)ryj::Allocator;
        if ( !ryj::Allocator )
        {
          Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\pax.cpp", 613);
          v14 = (unsigned int)ryj::Allocator;
        }
        ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v14 + 0xCLL))();
      }
      v9 = v12;
    }
    while ( (_DWORD)v12 );
  }
}
// 2B4978: variable 'back_chain' is possibly undefined
// 2B49E4: variable 'a2' is possibly undefined
// 2B49E4: variable 'a3' is possibly undefined
// 2B49E4: variable 'a4' is possibly undefined
// 2B49E4: variable 'a5' is possibly undefined
// 2B49E4: variable 'a6' is possibly undefined
// 2B49E4: variable 'a7' is possibly undefined
// 2B49E4: variable 'a8' is possibly undefined
// ACF890: using guessed type int ryj::Allocator;


---
---
---
appears in:
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
---
---
---
example usage from obj\F_HB020\f_hb.bdscript
L9368:
 popToSp 0
 pushFromFSp 0
 syscall 1, 349 ; trap_obj_effect_kill_all (1 in, 0 out)
 pushFromFSp 0
 syscall 1, 17 ; trap_obj_leave_force (1 in, 0 out)
 ret 
