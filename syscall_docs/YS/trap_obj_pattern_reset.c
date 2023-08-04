---
---
---
name: trap_obj_pattern_reset
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
push obj ; (YS::OBJ_125) (An object)
push value ; (int)  (Pattern number to reset. See table in description)
syscall 1, 324 ; trap_obj_pattern_reset (2 in, 0 out)
---
---
---
description: Resets the resistance value to the default state

| Pattern Type | Value |
|--------------|-------|
| REACTION_NULL | 0     |
| REACTION_HITBACK | 1   |
| REACTION_SPOT | 2      |
| REACTION_SMALL | 3     |
| REACTION_BLOW | 4      |
| REACTION_TORNADO | 5   |
| REACTION_F_SMALL | 6   |
| REACTION_F_BLOW | 7    |
| REACTION_S_SMALL | 8   |
| REACTION_S_BLOW | 9    |
| REACTION_X_SMALL | 10  |
| REACTION_X_BLOW | 11   |
| REACTION_HALF_HITBACK | 12 |
| REACTION_HALF_SMALL | 13 |
| REACTION_LARGE | 14    |
| REACTION_P_BLOW | 15   |
| REACTION_P_SMALL | 16  |
| REACTION_PS_BLOW | 17  |
| REACTION_PS_SMALL | 18 |
| REACTION_MAX | 19     |
| REACTION_IGNORE | 255 |

---
---
---
decompiled code:

/----- (00000000004F8D04) ----------------------------------------------------
void __fastcall YS::trap_obj_pattern_reset(BD_VALUE_21 *args)
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
  *(_DWORD *)(v4 + 2748) &= ~(1 << *(_DWORD *)&(*args)[4]);
}
// 4F8D28: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
---
---
---
example usage from obj\B_EX150\b_ex.bdscript
L3097:
 pushFromPAi L18917 ; ___ai 'SIGNAL_GAUGEMIN' (L18917)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPWp W528
 pushImm 9
 syscall 1, 324 ; trap_obj_pattern_reset (2 in, 0 out)
 pushFromPWp W528
 pushFromPWp W528
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 1
 sub 
 neg 
 pushImm 0
 pushImm 0
 syscall 1, 155 ; trap_obj_add_hp (4 in, 1 out)
 drop 
 jmp L3135
