---
---
---
name: trap_skateboardscore_add_count
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
syscall 6, 48 ; trap_skateboardscore_add_count (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::SKATEBOARDSCORE::add_count(Ts::SKATEBOARDSCORE *const this, int point, double time)
/----- (00000000006268B4) ----------------------------------------------------
void __fastcall Ts::trap_skateboardscore_add_count(BD_VALUE_25 *args)
{
  Ts::SKATEBOARDSCORE::add_count(
    (Ts::SKATEBOARDSCORE *const)(unsigned int)Ts::SKATEBOARDSCORE::Self,
    *(_DWORD *)args,
    *(float *)&(*args)[4]);
}
// 8074C4: using guessed type void *__ptr32 Ts::SKATEBOARDSCORE::Self;
->
/----- (0000000000622158) ----------------------------------------------------
void __fastcall Ts::SKATEBOARDSCORE::add_count(Ts::SKATEBOARDSCORE *const this, int point, double time)
{
  YS::SIGNAL::Call(140, point);
  _FP2 = this->Time - time;
  __asm { fsel      f1, f2, f1, f31 }
  _FP2 = 1.0 - _FP1;
  __asm { fsel      f1, f2, f3, f1 }
  this->Time = _FP1;
}


---
---
---
appears in:

---
---
---
example usage from NA

