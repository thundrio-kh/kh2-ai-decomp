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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
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

---
---
---
example usage from NA

