---
---
---
name: trap_obj_act_clear
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
syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::clear(YS::ACT_86 *const this)
/----- (00000000004FC21C) ----------------------------------------------------
void __fastcall YS::trap_obj_act_clear(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::clear((YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v1 + 4) + 768));
}
// 4FC23C: variable 'back_chain' is possibly undefined
->
/----- (00000000004002A4) ----------------------------------------------------
void __fastcall YS::ACT::clear(YS::ACT_86 *const this)
{
  YS::VM_377 *v2; // r3
  int v3; // r4
  BD_VALUE_0 v4[4]; // [sp+70h] [-20h] BYREF

  if ( (*(_DWORD *)&(*this)[156] & 1) == 0 )
  {
    v2 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
    if ( (_DWORD)v2 )
    {
      v4[0] = *(BD_VALUE_0 *)&(*this)[136];
      v3 = *(unsigned __int16 *)(*(unsigned int *)&(*this)[144] + 0xALL);
      if ( *(_DWORD *)(*(unsigned int *)(*(_DWORD *)v4 + 4LL) + 0x484LL) != 0 && v3 != 0 )
      {
        YS::VM::syscallback(
          (YS::VM_377 *const)*(unsigned int *)(*(unsigned int *)(*(_DWORD *)v4 + 4LL) + 0x484LL),
          v3,
          v4,
          1,
          0LL);
        v2 = (YS::VM_377 *)*(unsigned int *)&(*this)[148];
      }
      YS::VM::destroy(v2);
      *(_DWORD *)&(*this)[148] = 0;
      *(_DWORD *)&(*this)[144] = 0;
    }
    *(_DWORD *)this = 0;
    *(_DWORD *)&(*this)[4] = 0;
    *(_DWORD *)&(*this)[152] = 0;
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

