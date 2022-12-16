---
---
---
name: trap_obj_scatter_medal
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
push unk1 ; (unknown)  (pushImm: 4) (pushFromFSp: 0,4)
push unk2 ; (unknown)  (div: ) (pushImm: 1,10,150,20,30,50,80)
syscall 1, 267 ; trap_obj_scatter_medal (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PRIZE_CA::Appear(YS::BTLOBJ_69 *obj, int num)
/----- (00000000005029B4) ----------------------------------------------------
void __fastcall YS::trap_obj_scatter_medal(BD_VALUE_21 *args)
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
  YS::PRIZE_CA::Appear((YS::BTLOBJ_69 *)v4, *(_DWORD *)&(*args)[4]);
}
// 5029D8: variable 'back_chain' is possibly undefined
->
/----- (00000000004848AC) ----------------------------------------------------
void __fastcall YS::PRIZE_CA::Appear(YS::BTLOBJ_69 *obj, int num)
{
  int v3; // r30
  int v4; // r5
  __int64 v5; // r27
  YS::PRIZEEFFECT_3 *v6; // r3
  kn::FVector v7; // [sp+70h] [-50h] BYREF
  kn::FVector v8; // [sp+80h] [-40h] BYREF

  v3 = num;
  v8.z = 0.0;
  v8.y = 0.0;
  v8.x = 0.0;
  v4 = obj->CaMedal;
  v8.w = 1.0;
  if ( num > v4 )
    v3 = v4;
  if ( YS::PrizeCa != 0 && v3 != 0 )
  {
    YS::OBJ::get_target_pos((YS::OBJ_125 *const)&v7, (YS::OBJ_168 *)obj);
    kn::FVector::operator=(&v8, &v7);
    if ( v3 > 0 )
    {
      v5 = 0LL;
      do
      {
        v6 = YS::PRIZE::appear(
               (YS::PRIZE *const)(unsigned int)YS::PrizeCa,
               (const YS::PRIZEEFFECT::PARAM *)&YS::ParamTable,
               &v8);
        if ( !(_DWORD)v6 )
          break;
        ++v5;
        *(_DWORD *)(unsigned int)((_DWORD)v6 + 40) |= 4u;
        *(_DWORD *)&(*v6)[16] = (unsigned int)&YS::PRIZEEFFECT::PhaseCaMove;
        --obj->CaMedal;
      }
      while ( (int)v5 < v3 );
    }
  }
}
// 79A240: using guessed type __int64 (__fastcall *__ptr32 YS::PRIZEEFFECT::PhaseCaMove)(YS::PRIZEEFFECT_13 *this, YS::MASSEFFECT *);
// 7FE81C: using guessed type void *__ptr32 YS::PrizeCa;


---
---
---
appears in:
msn\CA01_MS204\ca01.bdscript
msn\CA07_MS105\ca07.bdscript
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
---
---
---
example usage from msn\CA01_MS204\ca01.bdscript
L294:
 pushFromFSp 4
 gosub 4, L142
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 4
 div 
 syscall 1, 267 ; trap_obj_scatter_medal (2 in, 0 out)
 jmp L313
