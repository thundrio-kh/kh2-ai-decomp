---
---
---
name: trap_menuflag_reset
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
push unk1 ; (unknown)  (pushImm: 60,61,62)
syscall 0, 73 ; trap_menuflag_reset (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MENUFLAG::Reset(unsigned __int64 num)
/----- (00000000004B90B0) ----------------------------------------------------
void __fastcall YS::trap_menuflag_reset(BD_VALUE_16 *args)
{
  YS::MENUFLAG::Reset(*(int *)args);
}
->
/----- (000000000044B908) ----------------------------------------------------
void __fastcall YS::MENUFLAG::Reset(unsigned __int64 num)
{
  unsigned __int64 v2; // r30
  _DWORD *v3; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (num & 0x80000000) != 0LL || (int)num >= 196 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num >= 0 && num < MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\menuflag.cpp",
      24LL,
      "Reset",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\menuflag.cpp", 24);
  }
  if ( (num & 0x80000000) != 0LL || (unsigned int)num >= 0xC4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      54LL,
      "reset",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 54);
  }
  v3 = (_DWORD *)((unsigned int)&dword_8F70E0 + ((num >> 3) & 0x1FFFFFFC));
  *v3 &= ~(1 << (num & 0x1F));
}
// 44B92C: variable 'back_chain' is possibly undefined
// 8F70E0: using guessed type int dword_8F70E0;


---
---
---
appears in:
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
---
---
---
example usage from obj\F_AL070_BLIZZARD\f_al.bdscript
L3817:
 popToSp 0
 pushFromFSp 0
 pushImm 66
 syscall 1, 85 ; trap_obj_texanm_start (2 in, 0 out)
 pushFromFSp 0
 pushImmf 1
 pushImmf 0
 pushImmf 60
 syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 1
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 3
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 4
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 6
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 fetchValue 4
 pushImm 191
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFWp W4208
 pushImm 0
 sub 
 eqz 
 jz L3972
 pushImm 60
 syscall 0, 73 ; trap_menuflag_reset (1 in, 0 out)
 jmp L4004
