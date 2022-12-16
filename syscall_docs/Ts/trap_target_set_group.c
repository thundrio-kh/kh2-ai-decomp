---
---
---
name: trap_target_set_group
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
push unk1 ; (unknown)  (pushFromFSp: 20)
push unk2 ; (unknown)  (pushImm: 20,21,22,23,24,25,26,27,28,29)
syscall 6, 56 ; trap_target_set_group (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
/----- (0000000000625E88) ----------------------------------------------------
void __fastcall Ts::trap_target_set_group(BD_VALUE_25 *args)
{
  YS::TARGET::set_obj(
    (YS::TARGET_108 *const)(*args)[0],
    (YS::OBJ_168 *)*(unsigned int *)(*args)[0],
    *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004A8134) ----------------------------------------------------
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
{
  int v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v5 = (int)obj;
  if ( group < 0 || group >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group >= 0 && group < COLLISION::GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp",
      264LL,
      "set_obj",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp", 264);
  }
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
  *(_DWORD *)this = v5;
  *(_DWORD *)&(*this)[4] = group;
}
// 4A8164: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
---
---
---
example usage from obj\B_LK120\b_lk.bdscript
L3502:
 pushFromFSp 20
 pushImm 20
 syscall 6, 56 ; trap_target_set_group (2 in, 0 out)
 jmp L3673
