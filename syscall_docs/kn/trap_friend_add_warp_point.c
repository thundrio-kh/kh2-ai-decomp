---
---
---
name: trap_friend_add_warp_point
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
syscall 10, 57 ; trap_friend_add_warp_point (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::addWarpPoint(const kn::FVector *point)
/----- (0000000000614868) ----------------------------------------------------
void __fastcall kn::trap_friend_add_warp_point(BD_VALUE_22 *args)
{
  kn::Friend::addWarpPoint((const kn::FVector *)(*args)[0]);
}
->
/----- (00000000000E3350) ----------------------------------------------------
void __fastcall kn::Friend::addWarpPoint(const kn::FVector *point)
{
  kn::PositionBuffer::entry((kn::PositionBuffer *const)&kn::player_position, point);
}
// A1CBA0: using guessed type char kn::player_position;


---
---
---
appears in:

---
---
---
example usage from NA

