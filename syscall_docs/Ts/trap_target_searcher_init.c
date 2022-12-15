---
---
---
name: trap_target_searcher_init
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
syscall 6, 3 ; trap_target_searcher_init (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::TARGET_SEARCHER(Ts::TARGET_SEARCHER_0 *const this, int num)
/----- (0000000000624ED0) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_init(BD_VALUE_25 *args)
{
  if ( *(_DWORD *)args )
    Ts::TARGET_SEARCHER::TARGET_SEARCHER((Ts::TARGET_SEARCHER_0 *const)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000006224BC) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::TARGET_SEARCHER(Ts::TARGET_SEARCHER_0 *const this, int num)
{
  this->Num = num;
  this->_anon_0._anon_0.Index = 0;
  this->Counter = 0;
  this->Type = 0;
  *(_QWORD *)&this->Min = 1148846080LL;
  this->Angle = 3.1415927;
  this->_anon_0.Padding = 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

