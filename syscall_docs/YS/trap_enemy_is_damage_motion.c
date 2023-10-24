---
---
---
name: trap_enemy_is_damage_motion
---
---
---
category: enemy
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::BTLOBJ *)  (an battle object for an enemy)
syscall 2, 6 ; trap_enemy_is_damage_motion (1 in, 1 out)
pop ismotion ; (bool) 
---
---
---
description: returns if the damage is happening while the enemy is in an animation
---
---
---
decompiled code:
__int64 __fastcall YS::BTLOBJ::is_damage_motion(YS::BTLOBJ *const this)
/----- (00000000004F38D4) ----------------------------------------------------
void __fastcall YS::trap_enemy_is_damage_motion(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = YS::BTLOBJ::is_damage_motion((YS::BTLOBJ *const)v4);
}
// 4F38F8: variable 'back_chain' is possibly undefined
->
/----- (00000000004125D8) ----------------------------------------------------
__int64 __fastcall YS::BTLOBJ::is_damage_motion(YS::BTLOBJ *const this)
{
  __int64 v1; // r4

  v1 = 0LL;
  if ( *(_DWORD *)&this->baseclass_0[320]
    && !((*(_DWORD *)&this->baseclass_0[340] < 10) | (unsigned __int8)~(*(_DWORD *)&this->baseclass_0[340] < 40)) )
  {
    v1 = 1LL;
  }
  return v1;
}


---
---
---
appears in:
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\B_CA010\b_ca.bdscript
L4913:
 pushFromFSp 0
 syscall 2, 6 ; trap_enemy_is_damage_motion (1 in, 1 out)
 dup 
 jnz L4932
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 17
 sub 
 eqz 
 neqzv 
