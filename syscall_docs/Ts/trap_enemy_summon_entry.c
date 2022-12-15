---
---
---
name: trap_enemy_summon_entry
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
syscall 7, 33 ; trap_enemy_summon_entry (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall Ts::SUMMON_ENEMY::Get(YS::OBJ_254 *obj, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000006243F8) ----------------------------------------------------
void __fastcall Ts::trap_enemy_summon_entry(BD_VALUE_24 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

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
  *(_DWORD *)args = Ts::SUMMON_ENEMY::Get((YS::OBJ_254 *)*(unsigned int *)(v9 + 4), a2, a3, a4, a5, a6, a7, a8);
}
// 62441C: variable 'back_chain' is possibly undefined
// 6244E8: variable 'a2' is possibly undefined
// 6244E8: variable 'a3' is possibly undefined
// 6244E8: variable 'a4' is possibly undefined
// 6244E8: variable 'a5' is possibly undefined
// 6244E8: variable 'a6' is possibly undefined
// 6244E8: variable 'a7' is possibly undefined
// 6244E8: variable 'a8' is possibly undefined
->
/----- (000000000062BDA0) ----------------------------------------------------
__int64 __fastcall Ts::SUMMON_ENEMY::Get(YS::OBJ_254 *obj, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r26
  int v9; // r25
  __int64 *v11; // r31
  int v12; // r29
  const YS::OBJENTRY_0 *v13; // r3
  __int64 v14; // r3
  int v15; // sp
  __int64 v16; // r3
  __int64 back_chain; // [sp+0h] [-E0h] BYREF

  v8 = 0LL;
  v9 = 0;
  v11 = &back_chain;
  v12 = 0;
  do
  {
    if ( (YS::OBJENTRY::GetCacheBuffStatus(Ts::SUMMONLIST[v12], 0LL, a3, a4, a5, a6, a7, a8) & 1) == 0 )
    {
      v13 = YS::OBJENTRY::Get(Ts::SUMMONLIST[v12]);
      if ( YS::AREADATA::CanAddCost((float)v13->Cost) )
      {
        v14 = (unsigned int)v11;
        v11 = (__int64 *)((char *)v11 + 4);
        ++v9;
        *(_DWORD *)(v14 + 112) = Ts::SUMMONLIST[v12];
      }
    }
    ++v8;
    ++v12;
  }
  while ( (int)v8 < 8 );
  if ( v9 <= 0 )
    return (int)YS::OBJ::get_entry_id(obj);
  Random *= 69069;
  v16 = v15
      + 4
      * (unsigned int)((unsigned int)Random
                     / (((unsigned __int64)(unsigned int)(v9 - 1) + 0x100000000LL)
                      / (unsigned int)v9));
  return *(int *)(v16 + 112);
}
// 62BDF0: variable 'a3' is possibly undefined
// 62BDF0: variable 'a4' is possibly undefined
// 62BDF0: variable 'a5' is possibly undefined
// 62BDF0: variable 'a6' is possibly undefined
// 62BDF0: variable 'a7' is possibly undefined
// 62BDF0: variable 'a8' is possibly undefined
// 62BEA8: variable 'v15' is possibly undefined
// 807838: using guessed type int Ts::SUMMONLIST[];
// 2BB1CA0: using guessed type int Random;


---
---
---
appears in:

---
---
---
example usage from NA

