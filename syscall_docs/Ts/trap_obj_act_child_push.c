---
---
---
name: trap_obj_act_child_push
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
syscall 6, 58 ; trap_obj_act_child_push (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ACT::child_push(YS::ACT_86 *const this, const char *label)
/----- (0000000000627544) ----------------------------------------------------
void __fastcall Ts::trap_obj_act_child_push(BD_VALUE_25 *args)
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
  YS::ACT::child_push(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4]);
}
// 627568: variable 'back_chain' is possibly undefined
->
/----- (0000000000400ABC) ----------------------------------------------------
void __fastcall YS::ACT::child_push(YS::ACT_86 *const this, const char *label)
{
  int v3; // r4
  unsigned __int64 v4; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  YS::ACT::push(this, label);
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)&(*this)[4] == *(_DWORD *)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_empty()",
      "common",
      "../yasui/queue.h",
      74LL,
      "look_last",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/queue.h", 74);
    v3 = *(_DWORD *)this;
  }
  v4 = (unsigned int)((_DWORD)this + 8 * ((v3 + 15) % 16) + 12);
  *(_DWORD *)v4 |= 1u;
}
// 400AE8: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

