---
---
---
name: trap_picture_change
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
syscall 1, 290 ; trap_picture_change (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Tz::Layout::setNum(Tz::Layout_36 *const this, int num, int next)
/----- (000000000050B89C) ----------------------------------------------------
void __fastcall YS::trap_picture_change(BD_VALUE_21 *args)
{
  Tz::Layout::setNum((Tz::Layout_36 *const)(*args)[0], *(_DWORD *)&(*args)[4], -1);
}
->
/----- (0000000000365D88) ----------------------------------------------------
void __fastcall Tz::Layout::setNum(Tz::Layout_36 *const this, int num, int next)
{
  unsigned __int64 v6; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)dk::Obj2D::isExist((dk::Obj2D_11 *)this) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Obj2D::isExist(this)",
      "common",
      "C:\\hd25\\kingdom2\\tozawa\\layout.cpp",
      236LL,
      "setNum",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\tozawa\\layout.cpp", 236);
  }
  this->m_num = num;
  this->m_New_num = num;
  if ( !(unsigned int)dk::Obj2D::isExist((dk::Obj2D_11 *)this) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Obj2D::isExist(this)",
      "common",
      "C:\\hd25\\kingdom2\\tozawa\\layout.cpp",
      265LL,
      "setNextNum",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\tozawa\\layout.cpp", 265);
  }
  this->m_nextNum = next;
}
// 365DB4: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

