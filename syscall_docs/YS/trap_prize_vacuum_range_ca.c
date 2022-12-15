---
---
---
name: trap_prize_vacuum_range_ca
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
syscall 1, 340 ; trap_prize_vacuum_range_ca (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PRIZE_CA::VacuumRange(YS::BTLOBJ_69 *obj, double range)
/----- (000000000050B520) ----------------------------------------------------
void __fastcall YS::trap_prize_vacuum_range_ca(BD_VALUE_21 *args)
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
  YS::PRIZE_CA::VacuumRange((YS::BTLOBJ_69 *)v4, *(float *)&(*args)[4]);
}
// 50B544: variable 'back_chain' is possibly undefined
->
/----- (0000000000484F6C) ----------------------------------------------------
void __fastcall YS::PRIZE_CA::VacuumRange(YS::BTLOBJ_69 *obj, double range)
{
  FLOAT *v4; // r3
  YS::MASSEFFECT_8 *v5; // r29
  YS::MASSEFFECT_8 *v6; // r3
  Axa::FVECTOR4 *v7; // r3
  double v8; // fp1
  Axa::FVECTOR4 v9; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-40h] BYREF
  Axa::FVECTOR4 v11; // [sp+90h] [-30h] BYREF

  v4 = (FLOAT *)YS::OBJ::get_pos((YS::OBJ_125 *const)obj);
  v5 = 0LL;
  v9.x = *v4;
  v9.y = v4[1];
  v9.z = v4[2];
  v9.w = v4[3];
  while ( 1 )
  {
    v6 = YS::MASSEFFECT::MANAGER::each((YS::MASSEFFECT::MANAGER_2 *const)*((unsigned int *)YS::PrizeCa + 637), v5);
    v5 = v6;
    if ( !(_DWORD)v6 )
      break;
    if ( !*(_DWORD *)&(*v6)[72] )
    {
      v11.x = *(float *)v6;
      v11.y = *(float *)&(*v6)[4];
      v11.z = *(float *)&(*v6)[8];
      v11.w = *(float *)&(*v6)[12];
      v7 = Axa::FVECTOR4::operator-=(&v11, &v9);
      v10.x = v7->x;
      v10.y = v7->y;
      v10.z = v7->z;
      v8 = v7->w;
      v10.y = 0.0;
      v10.w = v8;
      if ( Axa::FVECTOR4::getLength(&v10) < range )
        YS::PRIZEEFFECT::vacuum_ca((YS::PRIZEEFFECT_4 *const)v5, obj);
    }
  }
}
// 7FE81C: using guessed type void *__ptr32 YS::PrizeCa;


---
---
---
appears in:

---
---
---
example usage from NA

