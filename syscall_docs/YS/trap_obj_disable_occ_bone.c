---
---
---
name: trap_obj_disable_occ_bone
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
push unk1 ; (unknown)  (pushFromFSp: 0)
push unk2 ; (unknown)  (pushImm: 100,101,102,103,127,130,131,132,133,157,160,161,162,163,164,188,191,192,193,194,195,222,223,224,225,226,227,30,33,34,35,36,37,64,65,66,67,68,69,96,99)
syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJOCC::disable(YS::OBJOCC_133 *const this, int bone)
/----- (00000000004FBA10) ----------------------------------------------------
void __fastcall YS::trap_obj_disable_occ_bone(BD_VALUE_21 *args)
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
  YS::OBJOCC::disable((YS::OBJOCC_133 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 2048), *(_DWORD *)&(*args)[4]);
}
// 4FBA34: variable 'back_chain' is possibly undefined
->
/----- (00000000004729E0) ----------------------------------------------------
void __fastcall YS::OBJOCC::disable(YS::OBJOCC_133 *const this, int bone)
{
  __int64 v4; // r5
  int v5; // r7
  __int64 v6; // r8
  int v7; // r6
  unsigned __int64 v8; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = *(unsigned int *)this;
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objocc.cpp",
      75LL,
      "disable",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objocc.cpp", 75);
    v4 = *(unsigned int *)this;
  }
  v5 = *(_DWORD *)(v4 + 4);
  v6 = 0LL;
  if ( v5 > 0 )
  {
    v7 = 0;
    do
    {
      v4 += 8LL;
      if ( *(_DWORD *)(unsigned int)v4 == bone )
      {
        v8 = (unsigned int)(*(_DWORD *)(unsigned int)(*(_DWORD *)&(*this)[4] + v7 + 128) + 8);
        *(_DWORD *)v8 |= 2u;
      }
      ++v6;
      v7 += 144;
    }
    while ( (int)v6 < v5 );
  }
}
// 472A04: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_HE100\b_he.bdscript ((B) Hydra)
---
---
---
example usage from obj\B_HE100\b_he.bdscript
L10872:
 pushFromFSp 0
 fetchValue 4
 pushImm 193
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 108
 pushFromFSp 0
 pushImm 100
 pushImm 0
 gosub 40, L11229
 halt 
 pushFromFSp 0
 pushImm 1
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 2
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 4
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 6
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 7
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFWp W4584
 pushImm 2
 sub 
 eqz 
 jz L11068
 pushFromFSp 0
 pushImm 133
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 132
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 131
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 130
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 127
 syscall 1, 335 ; trap_obj_disable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 40, L651
 pushImm 8
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 194
 pushFromFSp 0
 fetchValue 36
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L12047 ; ___ai 'phil_appear' (L12047)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
