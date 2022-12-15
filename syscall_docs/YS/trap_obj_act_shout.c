---
---
---
name: trap_obj_act_shout
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
push unk2 ; (unknown) 
push unk3 ; (unknown) 
syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::shout(YS::ACT_86 *const this, const char *label, double wait)
/----- (0000000000506700) ----------------------------------------------------
void __fastcall YS::trap_obj_act_shout(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
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
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::shout(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 506724: variable 'back_chain' is possibly undefined
->
/----- (0000000000401320) ----------------------------------------------------
void __fastcall YS::ACT::shout(YS::ACT_86 *const this, const char *label, double wait)
{
  __int64 v4; // r3
  int *v5; // r5
  __int64 v6; // r6

  v4 = 0LL;
  v5 = &YS::ShoutBuff;
  v6 = *(unsigned int *)&(*this)[136];
  do
  {
    if ( !*v5 )
    {
      *v5 = (int)label;
      v5[1] = v6;
      *((float *)v5 + 2) = wait;
      return;
    }
    ++v4;
    v5 = (int *)(unsigned int)((_DWORD)v5 + 12);
  }
  while ( (int)v4 < 64 );
  ErrorPrintf("*ERROR! ", label, v5, v6);
  ErrorPrintf("shout buff over");
  ErrorPrintf(" *\n");
  ErrorRaise();
  Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\act.cpp", 499);
}
// C77A88: using guessed type int YS::ShoutBuff;


---
---
---
appears in:

---
---
---
example usage from NA

