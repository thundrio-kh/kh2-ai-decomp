---
---
---
name: trap_act_shout
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
syscall 1, 241 ; trap_act_shout (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::ShoutCall(const char *label, YS::VMOBJ_0 *caller, double wait)
/----- (0000000000502E94) ----------------------------------------------------
void __fastcall YS::trap_act_shout(BD_VALUE_21 *args)
{
  YS::ACT::ShoutCall((const char *)(*args)[0], 0LL, *(float *)&(*args)[4]);
}
->
/----- (000000000040127C) ----------------------------------------------------
void __fastcall YS::ACT::ShoutCall(const char *label, YS::VMOBJ_0 *caller, double wait)
{
  __int64 v3; // r5
  unsigned __int64 v4; // r6

  v3 = 0LL;
  v4 = (unsigned __int64)&YS::ShoutBuff;
  do
  {
    if ( !*(_DWORD *)v4 )
    {
      *(_DWORD *)v4 = (_DWORD)label;
      *(_DWORD *)(v4 + 4) = (_DWORD)caller;
      *(float *)(v4 + 8) = wait;
      return;
    }
    ++v3;
    v4 = (unsigned int)(v4 + 12);
  }
  while ( (int)v3 < 64 );
  ErrorPrintf("*ERROR! ", caller);
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

