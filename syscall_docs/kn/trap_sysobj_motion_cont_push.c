---
---
---
name: trap_sysobj_motion_cont_push
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
syscall 10, 15 ; trap_sysobj_motion_cont_push (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MOTION::cont_push(YS::MOTION_289 *const this, int id, double blend_time, double start_time, void (*callback)(YS::OBJ_124 *))
/----- (0000000000611E98) ----------------------------------------------------
void __fastcall kn::trap_sysobj_motion_cont_push(BD_VALUE_22 *args)
{
  YS::MOTION::cont_push(
    (YS::MOTION_289 *const)(unsigned int)(*(_DWORD *)args + 320),
    *(_DWORD *)&(*args)[4],
    *(float *)&(*args)[8],
    0.0,
    0LL);
}
->
/----- (000000000045C6D0) ----------------------------------------------------
void __fastcall YS::MOTION::cont_push(YS::MOTION_289 *const this, int id, double blend_time, double start_time, void (*callback)(YS::OBJ_124 *))
{
  int v5; // r3

  v5 = YS::MOTION::push_queue(this, id, blend_time, start_time, callback);
  *(_DWORD *)(unsigned int)(v5 + 16) |= 1u;
}


---
---
---
appears in:

---
---
---
example usage from NA

