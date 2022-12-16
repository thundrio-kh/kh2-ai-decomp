---
---
---
name: trap_obj_count_entry
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
push unk1 ; (unknown)  (pushImm: 119,1535,1573,1600,1601,1602,1765,1834,2345) (syscall: 1, 222 ; trap_obj_get_entry_id (1 in, 1 out))
syscall 1, 323 ; trap_obj_count_entry (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::CountEntry(OBJENTRY_ID id)
/----- (000000000050214C) ----------------------------------------------------
void __fastcall YS::trap_obj_count_entry(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::OBJ::CountEntry(*(_DWORD *)args);
}
->
/----- (00000000004625A8) ----------------------------------------------------
__int64 __fastcall YS::OBJ::CountEntry(OBJENTRY_ID id)
{
  __int64 v1; // r30
  YS::OBJ_132 *v3; // r4
  YS::OBJ_132 *v4; // r3

  v1 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = YS::OBJ::Each(v3);
    v3 = v4;
    if ( !(_DWORD)v4 )
      break;
    if ( *(_DWORD *)*(unsigned int *)&(*v4)[8] == id )
      v1 = (int)v1 + 1;
  }
  return v1;
}


---
---
---
appears in:
msn\MU09_KINOKO_VEX\kino.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
---
---
---
example usage from msn\MU09_KINOKO_VEX\kino.bdscript
L402:
 pushImm 2345
 syscall 1, 323 ; trap_obj_count_entry (1 in, 1 out)
 pushFromFSp 40
 sub 
 msb 
 dup 
 jz L422
 pushFromFSp 32
 pushImm 100
 sub 
 msb 
 eqzv 
