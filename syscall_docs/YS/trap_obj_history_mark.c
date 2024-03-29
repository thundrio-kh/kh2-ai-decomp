---
---
---
name: trap_obj_history_mark
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::FIELDOBJ *)  (A field object)
syscall 1, 189 ; trap_obj_history_mark (1 in, 0 out)
---
---
---
description: Set the history flag for an field object
---
---
---
decompiled code:
void __fastcall YS::FIELDOBJ::mark_history(YS::FIELDOBJ *const this)
/----- (00000000004FD564) ----------------------------------------------------
void __fastcall YS::trap_obj_history_mark(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 0x100) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_fieldobj()",
      "common",
      "../yasui/libys/fieldobj.h",
      30LL,
      "TOFIELDOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/fieldobj.h", 30);
  }
  YS::FIELDOBJ::mark_history((YS::FIELDOBJ *const)v3);
}
// 4FD584: variable 'back_chain' is possibly undefined
->
/----- (00000000004E7D5C) ----------------------------------------------------
void __fastcall YS::FIELDOBJ::mark_history(YS::FIELDOBJ *const this)
{
  int v1; // r3

  v1 = YS::OBJ::get_serial((YS::OBJ_125 *const)this);
  YS::HISTORY::set((YS::HISTORY_0 *const)&YS::HISTORY::Gimmick, v1);
}
// 2A97948: using guessed type int YS::HISTORY::Gimmick;


---
---
---
appears in:
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
obj\F_HB040\f_hb.bdscript ((F) CoR’s orb (red) (HB))
obj\F_HB040_BL\f_hb.bdscript ((F) CoR’s orb (blue) (HB))
obj\F_HB040_WH\f_hb.bdscript ((F) CoR’s orb (white) (HB))
obj\F_HB040_YE\f_hb.bdscript ((F) CoR’s orb (yellow) (HB))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM040_00\f_nm.bdscript ((F) Statue (horse) (NM))
obj\F_NM040_10\f_nm.bdscript ((F) Statue (human) (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
---
---
---
example usage from obj\F_AL050\f_al.bdscript
L2368: ;___label for action pushFromPAi L3059 ; ___ai break
 popToSp 0
 pushFromFSpVal 164
 gosub 4, L1332
 pushFromFSp 0
 syscall 1, 189 ; trap_obj_history_mark (1 in, 0 out)
 pushFromFSp 0
 pushImm -1
 gosub 4, L2386
 ret 
