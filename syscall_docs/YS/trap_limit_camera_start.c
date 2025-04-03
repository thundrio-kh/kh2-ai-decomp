---
---
---
name: trap_limit_camera_start
---
---
---
category: limit
---
---
---
documentation level: untested
---
---
---
push limit_obj ; (YS::LIMIT_1 *)  (A limit object)
push label ; (int)  (Line number to label for limit camera routine)
push objspace_range ; (float)  (pushImmf: 0,500)
push is_air ; (bool)  (pushImm: 0,1)
syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
---
---
---
description: starts the specialized limit camera
---
---
---
decompiled code:
void __fastcall YS::LIMIT::camera_start(YS::LIMIT_1 *const this, const char *label, double objspace_range, bool is_air)
/----- (00000000004F5408) ----------------------------------------------------
void __fastcall YS::trap_limit_camera_start(BD_VALUE_19 *args)
{
  YS::LIMIT::camera_start(
    (YS::LIMIT_1 *const)(*args)[0],
    (const char *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    (_cntlzw(*(_DWORD *)&(*args)[12]) & 0x20) == 0);
}
->
/----- (0000000000440610) ----------------------------------------------------
void __fastcall YS::LIMIT::camera_start(YS::LIMIT_1 *const this, const char *label, double objspace_range, bool is_air)
{
  unsigned int *v8; // r29
  unsigned __int64 v9; // r3
  YS::OBJ_126 *v10; // r26
  int *v11; // r3
  YS::EVENT_10 *v12; // r28
  YS::EVENT_10 *v13; // r3
  YS::EVENT_10 *v14; // r31
  kn::FVector v15; // [sp+70h] [-70h] BYREF
  int v16[10]; // [sp+80h] [-60h] BYREF

  if ( YS::LIMIT_TABLE::is_summon((const YS::LIMIT_TABLE *const)(*this)[0]) )
  {
    v8 = YS::STDOBJ::get_camera_data((YS::STDOBJ_112 *const)*(unsigned int *)&(*this)[16], label);
  }
  else
  {
    v9 = YS::BINARC::get_info_by_tag(
           (const YS::BINARC_47 *const)*(unsigned int *)&(*this)[4],
           0x16u,
           (label[2] << 16) | (label[3] << 24) | *label | (unsigned int)(label[1] << 8),
           0LL);
    if ( !(_DWORD)v9 )
      return;
    v8 = (unsigned int *)*(unsigned int *)(v9 + 8);
    if ( !(_DWORD)v8 )
      return;
  }
  if ( (_DWORD)v8 )
  {
    YS::OBJ::move_to_space((YS::OBJ_133 *const)*(unsigned int *)&(*this)[12], 500.0, is_air);
    v10 = (YS::OBJ_126 *)*(unsigned int *)&(*this)[12];
    YS::OBJ::get_dir((YS::OBJ_125 *const)&v15, v10);
    YS::OBJ::set_wish_dir(v10, &v15);
    if ( objspace_range > 0.0 )
    {
      v11 = (int *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)&(*this)[12]);
      v16[0] = 0;
      *(float *)&v16[1] = objspace_range;
      *(float *)&v16[2] = objspace_range;
      v16[3] = 0;
      v16[4] = *v11;
      v16[5] = v11[1];
      v16[6] = v11[2];
      v16[7] = v11[3];
      YS::ENEMY::MakeSpace((const YS::COLLISION_34 *)v16);
    }
    v12 = 0LL;
    v13 = (YS::EVENT_10 *)AREA::Alloc(0xB0u);
    v14 = v13;
    if ( (_DWORD)v13 )
    {
      YS::EVENT::EVENT(v13, 11, v8);
      v12 = v14;
    }
    YS::EVENT::set_camera_target(v12, (YS::OBJ_105 *)*(unsigned int *)&(*this)[12]);
    YS::EVENT::start(v12);
  }
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L3043:
 popToSp 0
 pushFromFSpVal 152
 jz L3065
 pushFromFSp 0
 fetchValue 0
 pushFromPAi L6867 ; ___ai 10 (L6867)
 pushImmf 500
 pushImm 1
 syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
 jmp L3079
