---
---
---
name: trap_sysobj_fadein
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
syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
/----- (00000000004F7788) ----------------------------------------------------
void __fastcall YS::trap_sysobj_fadein(BD_VALUE_21 *args)
{
  __int64 v2; // r3

  v2 = *(unsigned int *)args;
  if ( (*(_DWORD *)(v2 + 2040) & 0x10) == 0 )
    YS::FADE::start((YS::FADE *const)(unsigned int)(v2 + 2092), 0.0, 1.0, *(float *)&(*args)[4]);
}
->
/----- (000000000042AA40) ----------------------------------------------------
void __fastcall YS::FADE::start(YS::FADE *const this, double from, double to, double time)
{
  _FP6 = 0.0 - time;
  _FP3 = 0.0 - time;
  __asm { fsel      f1, f6, to, f1 }
  this->Ratio = _FP1;
  __asm { fsel      f1, f3, f5, f4 }
  this->Add = _FP1;
}


---
---
---
appears in:

---
---
---
example usage from NA

