---
---
---
name: trap_mission_set_count_figure_num
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
push unk1 ; (unknown)  (mul: ) (pushFromFSpVal: 124) (pushImm: 0,1,2)
push unk2 ; (unknown)  (sub: ) (pushImm: 1,2,3,4,5,6)
push unk3 ; (unknown)  (pushImm: 0)
syscall 4, 48 ; trap_mission_set_count_figure_num (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetCountFigureNum(int figure, int num, int id)
/----- (00000000004F6590) ----------------------------------------------------
void __fastcall YS::trap_mission_set_count_figure_num(BD_VALUE_20 *args)
{
  YS::MISSION::SetCountFigureNum(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
->
/----- (0000000000455C60) ----------------------------------------------------
void __fastcall YS::MISSION::SetCountFigureNum(int figure, int num, int id)
{
  int v6; // r30
  unsigned int v7; // r3
  int v8; // r30
  __int64 v9; // r3
  __int64 v10; // ctr

  if ( YS::MISSION::IsExec() )
  {
    v6 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v6 + 232 + 0xCLL) & 1) != 0 )
    {
      v7 = (unsigned int)YS::MISSION::GetCurrent() + v6;
      v8 = 1;
      v9 = v7 + 232;
      if ( figure > 0 )
      {
        v10 = (unsigned int)figure;
        do
        {
          v8 *= 10;
          --v10;
        }
        while ( v10 );
      }
      YS::MISSION_COUNT::set(
        (YS::MISSION_COUNT_3 *const)v9,
        *(_DWORD *)(v9 + 44) + (num - *(_DWORD *)(v9 + 44) / v8 % 10) * v8);
    }
  }
}


---
---
---
appears in:
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
---
---
---
example usage from obj\B_LK100\b_lk.bdscript
L8060:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 0
 sub 
 ipos 
 jz L8109
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 sub 
 pushImm 8
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 2
 mul 
 sub 
 pushImm 0
 syscall 4, 48 ; trap_mission_set_count_figure_num (3 in, 0 out)
 jmp L8109
