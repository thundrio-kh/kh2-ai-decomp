---
---
---
name: trap_obj_part
---
---
---
category: bones
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 1, 213 ; trap_obj_part (1 in, 1 out)
pop num_parts ; (int) 
---
---
---
description: Returns the number of parts of an object
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_part_num(YS::OBJ_125 *const this)
/----- (00000000004F8E94) ----------------------------------------------------
void __fastcall YS::trap_obj_part(BD_VALUE_21 *args)
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
  *(_DWORD *)args = YS::OBJ::get_part_num((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4));
}
// 4F8EB8: variable 'back_chain' is possibly undefined
->
/----- (00000000004607CC) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_part_num(YS::OBJ_125 *const this)
{
  return *(unsigned __int16 *)(*(unsigned int *)&(*this)[8] + 0x4CLL);
}


---
---
---
appears in:
msn\EH14_MS103\ms_l.bdscript
msn\MU01_MS102\mu01.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU02_MS103B\mu02.bdscript
msn\MU03_MS104\mu03.bdscript
msn\MU09_MS108\mu09.bdscript
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\M_EX120\m_ex.bdscript ((M) Emerald Blues)
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX120_NM\m_ex.bdscript ((M) Emerald Blues (NM))
obj\M_EX120_TR\m_ex.bdscript ((M) Emerald Blues (TR))
obj\M_EX520\m_ex.bdscript ((M) Hook Bat)
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
obj\M_EX520_HB\m_ex.bdscript ((M) Beffudler)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
---
---
---
example usage from msn\EH14_MS103\ms_l.bdscript
L58:
 pushFromFSp 4
 syscall 1, 213 ; trap_obj_part (1 in, 1 out)
 pushImm 4005
 sub 
 eqz 
 jz L86
 pushImm 1
 pushFromFSp 0
 syscall 2, 46 ; trap_damage_damage (1 in, 1 out)
 gosub 4, L89
 negf 
 pushImm 1
 syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)
 jmp L86
