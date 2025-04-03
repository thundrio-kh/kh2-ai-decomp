---
---
---
name: trap_damage_get_reaction_type
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push damage ; (YS::DAMAGE_5 *)  (An object representing damage)
syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)
pop reaction_type ; (int) 
---
---
---
description: Returns the type of reaction the attack causes, according to this pseudocode function

/* Note the following is a python rewrite of GetReactionType

def YS::DAMAGE::GetReactionType(reaction):
  if reaction < 0 or reaction > 18:
    raiseError()
  if reaction in [1, 12]:
    return 1
  if reaction in [3, 6, 8, 10, 13, 16, 18]:
    return 3
  if reaction in [4, 9]:
    return 4

  // 0 2 5 7 11 14 15 17 all return the input 
  return reaction;
}

*/
---
---
---
decompiled code:
__int64 __fastcall YS::DAMAGE::GetReactionType(__int64 reaction)
/----- (00000000004F422C) ----------------------------------------------------
void __fastcall YS::trap_damage_get_reaction_type(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::DAMAGE::GetReactionType(*(int *)args);
}
->
/----- (0000000000422060) ----------------------------------------------------
__int64 __fastcall YS::DAMAGE::GetReactionType(__int64 reaction)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( (int)reaction > 8 )
  {
    if ( (int)reaction > 13 )
    {
      if ( (int)reaction > 16 )
      {
        if ( (int)reaction > 17 )
        {
          if ( (int)reaction > 18 )
          {
LABEL_32:
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "0",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\damage.cpp",
              109LL,
              "GetReactionType",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\damage.cpp", 109);
            return reaction;
          }
          return 3LL;
        }
      }
      else
      {
        if ( (int)reaction <= 14 )
          return reaction;
        if ( (int)reaction > 15 )
          return 3LL;
      }
    }
    else if ( (int)reaction > 10 )
    {
      if ( (int)reaction > 11 )
      {
        if ( (int)reaction > 12 )
          return 3LL;
        return 1LL;
      }
    }
    else if ( (int)reaction > 9 )
    {
      return 3LL;
    }
    return 4LL;
  }
  if ( (int)reaction > 3 )
  {
    if ( (int)reaction > 5 )
    {
      if ( (int)reaction <= 6 || (int)reaction > 7 )
        return 3LL;
    }
    else if ( (int)reaction > 4 )
    {
      return reaction;
    }
    return 4LL;
  }
  if ( (int)reaction <= 0 )
  {
    if ( (int)reaction > -1 )
      return reaction;
    goto LABEL_32;
  }
  if ( (int)reaction <= 1 )
    return 1LL;
  if ( (int)reaction > 2 )
    return 3LL;
  return reaction;
}
// 422168: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L1372:
 pushFromFSp 4
 syscall 2, 64 ; trap_damage_orig_reaction (1 in, 1 out)
 syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)
 pushImm 4
 sub 
 eqz 
 dup 
 jz L1391
 pushFromFSp 4
 syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
 eqzv 
