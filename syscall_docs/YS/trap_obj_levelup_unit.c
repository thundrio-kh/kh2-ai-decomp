---
---
---
name: trap_obj_levelup_unit
---
---
---
category: spawn
---
---
---
documentation level: untested
---
---
---
push unit ; (YS::UNIT_GROUP_8 *)  (A unit group)
syscall 1, 291 ; trap_obj_levelup_unit (1 in, 0 out)
---
---
---
description: Levels up the specified unit group of spawns
---
---
---
decompiled code:
void __fastcall YS::UNIT_GROUP::levelup(YS::UNIT_GROUP_8 *const this)
__int64 __fastcall YS::UNIT_GROUP::activate(YS::UNIT_GROUP_8 *const this, const YS::ZONE_17 *zone)
/----- (00000000005016D0) ----------------------------------------------------
void __fastcall YS::trap_obj_levelup_unit(BD_VALUE_21 *args)
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
  v3 = *(unsigned int *)(*(unsigned int *)(v1 + 4) + 0x818LL);
  if ( (_DWORD)v3 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 1) == 0 )
    {
      YS::UNIT_GROUP::levelup((YS::UNIT_GROUP_8 *const)v3);
      YS::UNIT_GROUP::activate((YS::UNIT_GROUP_8 *const)v3, 0LL);
    }
  }
}
// 5016F0: variable 'back_chain' is possibly undefined

//COMPLICATED YS::UNIT_GROUP::levelup YS::UNIT_GROUP::activate
->
/----- (00000000004B0984) ----------------------------------------------------
void __fastcall YS::UNIT_GROUP::levelup(YS::UNIT_GROUP_8 *const this)
{
  unsigned __int8 v1; // r6
  __int64 v2; // r5

  if ( (unsigned __int8)(*this)[32] < 0xC8u )
  {
    v1 = (*this)[32] + 1;
    v2 = *(unsigned int *)&(*this)[8];
    (*this)[32] = v1;
    if ( *(_BYTE *)(v2 + 35) )
    {
      if ( v1 >= (int)*(unsigned __int8 *)(v2 + 35) )
        YS::UNIT_GROUP::repeat(this, *(unsigned __int8 *)(v2 + 36));
    }
  }
}


->
/----- (00000000004B15DC) ----------------------------------------------------
__int64 __fastcall YS::UNIT_GROUP::activate(YS::UNIT_GROUP_8 *const this, const YS::ZONE_17 *zone)
{
  int v2; // r30
  unsigned __int8 *v4; // r5
  int v5; // r6

  v2 = (int)this;
  v4 = (unsigned __int8 *)*(unsigned int *)&(*this)[8];
  v5 = *v4;
  switch ( v5 )
  {
    case 10:
      *((_DWORD *)YS::PLAYER::Player + 723) = *(unsigned __int16 *)(*(unsigned int *)&(*this)[8] + 2LL);
      break;
    case 9:
      if ( !*(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) )
        *(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) = 1;
      YS::UNIT_GROUP::tron_wall(this);
      break;
    case 8:
      if ( (_DWORD)zone )
      {
        if ( *(_BYTE *)(*(unsigned int *)&(*zone)[108] + 0x2ELL)
          && !dk::Map::isOnGroup(*(unsigned __int8 *)(*(unsigned int *)&(*zone)[108] + 0x2ELL) - 1) )
        {
          dk::Map::setVisibleGroup(*(unsigned __int8 *)(*(unsigned int *)&(*zone)[108] + 0x2ELL) - 1);
        }
        if ( *(_BYTE *)(*(unsigned int *)&(*zone)[108] + 0x2FLL)
          && dk::Map::isOnGroup(*(unsigned __int8 *)(*(unsigned int *)&(*zone)[108] + 0x2FLL) - 1) )
        {
          dk::Map::setHideGroup(*(unsigned __int8 *)(*(unsigned int *)&(*zone)[108] + 0x2FLL) - 1);
        }
      }
      break;
    case 7:
      if ( !*(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) )
        *(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) = 1;
      if ( (_DWORD)zone )
      {
        YS::LIGHTCYCLE::Set(zone, *((_DWORD *)v4 + 7), *(_BYTE *)(*(unsigned int *)&(*zone)[108] + 0x28LL) & 1);
        return 0LL;
      }
      break;
    case 6:
      YS::UNIT_GROUP::appear_npc(this);
      break;
    case 3:
      if ( !*(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) )
        *(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) = 1;
      YS::SIGNAL::Call(*((_DWORD *)v4 + 7), *((unsigned __int16 *)v4 + 1));
      *(_DWORD *)(unsigned int)(v2 + 4) |= 1u;
      break;
    case 2:
      if ( !*(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) )
        *(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) = 1;
      YS::UNIT_GROUP::appear_enemy(this);
      break;
    case 1:
      if ( !*(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) )
        *(_BYTE *)(*(unsigned int *)&(*this)[8] + 0xELL) = 1;
      if ( !(_DWORD)zone || !(unsigned int)YS::UNIT_GROUP::jump_area(this, zone) )
        return 0LL;
      break;
  }
  return 1LL;
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;


---
---
---
appears in:
obj\F_CA060\f_ca.bdscript ((F) ??? (CA))
obj\F_CA060_MEDAL\f_ca.bdscript ((F) ??? - Attackable floor? (MEDAL) (CA))
---
---
---
example usage from obj\F_CA060\f_ca.bdscript
L2170: ;___label for action pushFromPAi L3016 ; ___ai break
 popToSp 0
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 1
 memcpy 0
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 291 ; trap_obj_levelup_unit (1 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 2
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 sub 
 eqz 
 jz L2249
 pushFromFSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 add 
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 jmp L2249
