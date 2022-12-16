---
---
---
name: trap_progress_is_second
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
syscall 0, 70 ; trap_progress_is_second (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::PROGRESS::IsSecond()
/----- (00000000004B7D00) ----------------------------------------------------
void __fastcall YS::trap_progress_is_second(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::PROGRESS::IsSecond();
}
->
/----- (000000000048F66C) ----------------------------------------------------
bool __cdecl YS::PROGRESS::IsSecond()
{
  return YS::PROGRESS::CheckFlag(0x102BuLL);
}


---
---
---
appears in:
obj\F_AL050\f_al.bdscript ((F) ??? (AL))
obj\F_BB040\f_bb.bdscript ((F) ??? - Invisible Armor? (BB))
obj\F_BB070\f_bb.bdscript ((F) ??? - Something from Shadow Stalker? (B))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\F_MU040\f_mu.bdscript ((F) Bunch of fireworks (MU))
obj\F_MU050\f_mu.bdscript ((F) Firework (Rocket) (MU))
obj\F_MU060\f_mu.bdscript ((F) Drive Orb Wagon (MU))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
---
---
---
example usage from obj\F_AL050\f_al.bdscript
L136:
 popToSp 0
 syscall 0, 70 ; trap_progress_is_second (0 in, 1 out)
 dup 
 jz L146
 pushFromFSpVal 160
 eqzv 
