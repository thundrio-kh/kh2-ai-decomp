---
---
---
name: trap_score_get
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
syscall 4, 38 ; trap_score_get (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::SCORE *__fastcall YS::MINIGAME::GetScore(int id)
/----- (00000000004F6A34) ----------------------------------------------------
void __fastcall YS::trap_score_get(BD_VALUE_20 *args)
{
  *(_DWORD *)args = (unsigned int)YS::MINIGAME::GetScore(*(_DWORD *)args);
}
->
/----- (0000000000450A20) ----------------------------------------------------
YS::SCORE *__fastcall YS::MINIGAME::GetScore(int id)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( id < 0 || id >= 64 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "id >= 0 && id < (int)MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\minigame.cpp",
      29LL,
      "GetScore",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\minigame.cpp", 29);
  }
  return (YS::SCORE *)(unsigned int)(8 * id + 9407236);
}
// 450A40: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

