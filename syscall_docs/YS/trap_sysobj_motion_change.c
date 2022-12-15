---
---
---
name: trap_sysobj_motion_change
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
syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::change(YS::MOTION_289 *const this, int id, double blend_time, double start_time)
/----- (00000000004F75A0) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_change(BD_VALUE_21 *args)
{
  YS::MOTION::change(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8],
    0.0);
}
->
/----- (000000000045C5B8) ----------------------------------------------------
void __fastcall YS::MOTION::change(YS::MOTION_289 *const this, int id, double blend_time, double start_time)
{
  __int64 v8; // r29
  const YS::MOTIONSET *v9; // r3
  YS::BINARC_63 *v10; // r5
  YS::BINARC_63 *v11; // r3
  double v12; // fp31

  YS::MOTION::clear_queue(this);
  v8 = YS::MOTION::id_to_num(this, id);
  if ( (int)v8 >= 0 )
  {
    v9 = (const YS::MOTIONSET *)(*this)[0];
    if ( (_DWORD)v9 )
    {
      if ( *(_DWORD *)&(*this)[4]
        && (v10 = YS::MOTIONSET::get_motion((const YS::MOTIONSET *const)*(unsigned int *)&(*this)[4], v8),
            v9 = (const YS::MOTIONSET *)(*this)[0],
            (_DWORD)v10) )
      {
        v11 = v10;
      }
      else
      {
        v11 = YS::MOTIONSET::get_motion(v9, v8);
      }
      if ( (_DWORD)v11 )
      {
        if ( *(_DWORD *)&(*this)[12] != *(_DWORD *)(YS::BINARC::get_info((const YS::BINARC_47 *const)v11, 9u, 0LL) + 8) )
        {
          v12 = YS::MOTION::walk_to_run(this, id, blend_time, start_time);
          YS::MOTION::clear_queue(this);
          YS::MOTION::start_id(this, id, blend_time, v12);
        }
      }
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

