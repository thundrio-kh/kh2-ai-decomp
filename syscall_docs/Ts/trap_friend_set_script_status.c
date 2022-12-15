---
---
---
name: trap_friend_set_script_status
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
syscall 7, 17 ; trap_friend_set_script_status (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall kn::Friend::setFromScript(kn::Friend_0 *const this, u_int value)
/----- (0000000000623B68) ----------------------------------------------------
void __fastcall Ts::trap_friend_set_script_status(BD_VALUE_24 *args)
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
  *(_DWORD *)args = kn::Friend::setFromScript((kn::Friend_0 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 623B8C: variable 'back_chain' is possibly undefined
->
/----- (00000000000E53E8) ----------------------------------------------------
__int64 __fastcall kn::Friend::setFromScript(kn::Friend_0 *const this, u_int value)
{
  __int64 v2; // r5

  v2 = *(unsigned int *)&(*this)[3332];
  *(_DWORD *)&(*this)[3332] = value;
  return v2;
}


---
---
---
appears in:

---
---
---
example usage from NA

