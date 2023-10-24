---
---
---
name: trap_friend_set_warp_level
---
---
---
category: friend
---
---
---
documentation level: untested
---
---
---
push level ; (kn::Friend_0::WARP_LEVEL) (level to set)
syscall 6, 15 ; trap_friend_set_warp_level (1 in, 0 out)
---
---
---
description: Set the warp level of a friend
---
---
---
decompiled code:
__int64 __fastcall kn::Friend::setWarpLevel(kn::Friend_0::WARP_LEVEL level)
/----- (0000000000626190) ----------------------------------------------------
void __fastcall Ts::trap_friend_set_warp_level(BD_VALUE_25 *args)
{
  kn::Friend::setWarpLevel(*(kn::Friend_0::WARP_LEVEL *)args);
}
->
/----- (00000000000E5850) ----------------------------------------------------
__int64 __fastcall kn::Friend::setWarpLevel(kn::Friend_0::WARP_LEVEL level)
{
  int v1; // r5

  v1 = kn::Friend::warpLevel;
  kn::Friend::warpLevel = level;
  return v1;
}
// 7EF224: using guessed type int kn::Friend::warpLevel;


---
---
---
appears in:

---
---
---
example usage from NA

