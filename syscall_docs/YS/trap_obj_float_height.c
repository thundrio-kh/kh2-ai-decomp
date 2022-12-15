---
---
---
name: trap_obj_float_height
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
syscall 1, 99 ; trap_obj_float_height (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::OBJ::get_step_height(YS::OBJ_133 *const this)
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
/----- (0000000000507060) ----------------------------------------------------
void __fastcall YS::trap_obj_float_height(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  YS::OBJ_133 *v4; // r30
  double v5; // fp31
  double v6; // fp2
  double v7; // fp1
  double v8; // fp31
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = (YS::OBJ_133 *)*(unsigned int *)(v2 + 4);
  v5 = YS::OBJ::get_step_height(v4);
  v6 = (float)((float)v5 - *(float *)(YS::OBJ::get_pos(v4) + 4));
  v7 = 0.0;
  if ( v6 > 0.0 )
  {
    v8 = YS::OBJ::get_step_height(v4);
    v7 = (float)((float)v8 - *(float *)(YS::OBJ::get_pos(v4) + 4));
  }
  *(float *)&(*args)[0] = -v7;
}
// 507088: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_step_height YS::OBJ::get_pos
->
/----- (0000000000470F40) ----------------------------------------------------
float __fastcall YS::OBJ::get_step_height(YS::OBJ_133 *const this)
{
  int v1; // r4
  double v2; // fp1

  v1 = *(_DWORD *)(*(unsigned int *)&(*this)[12] + 8LL);
  if ( (v1 & 0x20) != 0 && (v1 & 1) != 0 )
    v2 = *(float *)&(*this)[224];
  else
    v2 = YS::OBJ::get_shadow_height(this);
  return v2;
}


->
/----- (000000000045E178) ----------------------------------------------------
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
{
  unsigned __int64 result; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1306LL,
      "get_pos",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1306);
  }
  if ( YS::OBJ::is_attach(this) )
    result = (unsigned int)((_DWORD)this + 112);
  else
    result = (unsigned int)((_DWORD)this + 1344);
  return result;
}
// 45E194: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

