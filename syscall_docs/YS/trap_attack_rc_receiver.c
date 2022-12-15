---
---
---
name: trap_attack_rc_receiver
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
syscall 2, 52 ; trap_attack_rc_receiver (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4894) ----------------------------------------------------
void __fastcall YS::trap_attack_rc_receiver(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x110LL);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

