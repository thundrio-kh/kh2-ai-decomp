---
---
---
name: trap_obj_lockon_target
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
push unk1 ; (unknown)  (pushFromFSp: 0,4) (pushFromPSp: 16,208,32,48,64,...)
syscall 1, 191 ; trap_obj_lockon_target (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F8724) ----------------------------------------------------
void __fastcall YS::trap_obj_lockon_target(BD_VALUE_21 *args)
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
  if ( (*(_DWORD *)(v4 + 1416) & 0x80) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_player()",
      "common",
      "../yasui/libys/player.h",
      204LL,
      "TOPLAYER",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/player.h", 204);
  }
  *(_DWORD *)args = *(_DWORD *)(v4 + 2880) + 4;
}
// 4F8748: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
limit\beast\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\mulan\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
---
---
---
example usage from limit\beast\limi.bdscript
L287:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 fetchValue 4
 gosub 52, L256
 pushImm 0
 popToSp 192
 pushFromPWp W216
 pushFromFSp 0
 gosub 52, L845
 popToSp 48
 pushFromFSp 48
 pushFromFSp 0
 syscall 1, 191 ; trap_obj_lockon_target (1 in, 1 out)
 gosub 52, L871
 pushFromPSp 64
 pushImmf 0.349066
 pushImmf 0
 pushImmf 0.349066
 pushImmf 200
 pushImmf 0
 gosub 52, L906
 pushFromFSp 48
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L407
 pushFromPWp W216
 pushImm 80
 add 
 gosub 52, L1132
 pushFromPWp W216
 pushImm 80
 add 
 pushImmf 0
 pushImmf 1000
 gosub 52, L1142
 pushFromPWp W216
 pushImm 80
 add 
 pushFromFSp 48
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 208
 pushFromPSp 208
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 224
 pushFromPSp 224
 pushImm 1
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 jmp L407
