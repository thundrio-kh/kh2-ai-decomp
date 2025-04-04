---
---
---
name: trap_player_get_form
---
---
---
category: status
---
---
---
documentation level: untested
---
---
---
syscall 6, 2 ; trap_player_get_form (0 in, 1 out)
pop form_id ; (int) 
---
---
---
description: Return the id of the form the player is currently in
---
---
---
decompiled code:

/----- (0000000000624DE8) ----------------------------------------------------
void __fastcall Ts::trap_player_get_form(BD_VALUE_25 *args)
{
  *(_DWORD *)args = *((_DWORD *)YS::PLAYER::Player + 724);
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;

//BASIC
---
---
---
appears in:
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
---
---
---
example usage from obj\B_EX130\b_ex.bdscript
L2886:
 syscall 6, 2 ; trap_player_get_form (0 in, 1 out)
 pushImm 6
 sub 
 eqz 
 ret 
