---
---
---
name: trap_sysobj_motion_push
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
syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::push(YS::MOTION_289 *const this, int id, double blend_time, double start_time, void (*callback)(YS::OBJ_124 *))
/----- (00000000004F75F0) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_push(BD_VALUE_21 *args)
{
  YS::MOTION::push(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8],
    0.0,
    0LL);
}
->
/----- (000000000045A9B8) ----------------------------------------------------
void __fastcall YS::MOTION::push(YS::MOTION_289 *const this, int id, double blend_time, double start_time, void (*callback)(YS::OBJ_124 *))
{
  YS::MOTION::push_queue(this, id, blend_time, start_time, callback);
}


---
---
---
appears in:

---
---
---
example usage from NA

