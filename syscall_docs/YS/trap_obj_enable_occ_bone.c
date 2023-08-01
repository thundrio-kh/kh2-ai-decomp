---
---
---
name: trap_obj_enable_occ_bone
---
---
---
category: culling
---
---
---
documentation level: incomplete
---
---
---
push objocc ; (YS::OBJOCC_133 *)  (an occlusion culling object)
push boneid ; (ID of a bone)
syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
---
---
---
description: Enable occlusion culling for a specific bone
---
---
---
decompiled code:
void __fastcall YS::OBJOCC::enable(YS::OBJOCC_133 *const this, int bone)
/----- (00000000004FBB38) ----------------------------------------------------
void __fastcall YS::trap_obj_enable_occ_bone(BD_VALUE_21 *args)
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
  YS::OBJOCC::enable((YS::OBJOCC_133 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 2048), *(_DWORD *)&(*args)[4]);
}
// 4FBB5C: variable 'back_chain' is possibly undefined
->
/----- (0000000000472B34) ----------------------------------------------------
void __fastcall YS::OBJOCC::enable(YS::OBJOCC_133 *const this, int bone)
{
  __int64 v4; // r5
  __int64 v5; // r9
  int v6; // r8
  int v7; // r7
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
      100LL,
      "enable",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objocc.cpp", 100);
    v4 = *(unsigned int *)this;
  }
  v5 = 0LL;
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 > 0 )
  {
    v7 = 0;
    do
    {
      v4 += 8LL;
      if ( *(_DWORD *)(unsigned int)v4 == bone )
      {
        v8 = (unsigned int)(*(_DWORD *)(unsigned int)(*(_DWORD *)&(*this)[4] + v7 + 128) + 8);
        *(_DWORD *)v8 &= 0xFFFFFFFD;
      }
      ++v5;
      v7 += 144;
    }
    while ( (int)v5 < v6 );
  }
}
// 472B58: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_HE100\b_he.bdscript ((B) Hydra)
---
---
---
example usage from obj\B_HE100\b_he.bdscript
L5637:
 popToSp 0
 pushFromFSp 0
 pushImm 133
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 103
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 37
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 69
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 164
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 195
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 227
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 132
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 102
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 36
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 68
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 163
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 194
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 226
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 131
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 101
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 35
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 67
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 162
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 193
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 225
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 130
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 100
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 34
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 66
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 161
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 192
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 224
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 127
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 99
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 33
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 65
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 160
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 191
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 223
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 96
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 30
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 64
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 157
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 188
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 pushFromFSp 0
 pushImm 222
 syscall 1, 336 ; trap_obj_enable_occ_bone (2 in, 0 out)
 ret 
