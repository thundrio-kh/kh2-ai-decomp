---
---
---
name: trap_obj_play_se
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPSpVal: 0,20,80) (pushFromPSp: 48) (pushFromPWp: W16560)
push unk2 ; (unknown)  (pushImm: 2,308032,320050,320058,320059,335029,374067,384027,384028,388010,390049,390055,390056,390057,390058,391050,391051,391053,391054,391055,393084,395016,395017,409020,595042,595043,598050,598051)
syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
__int64 __fastcall YS::STDOBJ::call_se(YS::STDOBJ_112 *const this, __int64 num, const kn::FVector *pos, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FA7F0) ----------------------------------------------------
void __fastcall YS::trap_obj_play_se(BD_VALUE_21 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r30
  __int64 v4; // r31
  __int64 v5; // r28
  __int64 v6; // r29
  __int64 v7; // r28
  const kn::FVector *v8; // r3
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  v5 = *(unsigned int *)args;
  v6 = *(int *)&(*args)[4];
  if ( !(_DWORD)v5 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v5 & 3) != 0 )
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
  v7 = *(unsigned int *)(v5 + 4);
  if ( (*(_DWORD *)(v7 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  v8 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)v7);
  YS::STDOBJ::call_se((YS::STDOBJ_112 *const)v4, v6, v8, v13, v12, v11, v10, v9);
}
// 4FA814: variable 'back_chain' is possibly undefined
// 4FAA90: variable 'v13' is possibly undefined
// 4FAA90: variable 'v12' is possibly undefined
// 4FAA90: variable 'v11' is possibly undefined
// 4FAA90: variable 'v10' is possibly undefined
// 4FAA90: variable 'v9' is possibly undefined

//COMPLICATED YS::OBJ::get_pos YS::STDOBJ::call_se
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


->
/----- (00000000004A2110) ----------------------------------------------------
__int64 __fastcall YS::STDOBJ::call_se(YS::STDOBJ_112 *const this, __int64 num, const kn::FVector *pos, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r31
  __int64 v10; // r5
  __int64 v11; // r5
  int v12; // r4
  const kn::FVector *v13; // r3
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r7
  __int64 v18; // r6
  __int64 v19; // r5

  v8 = num;
  LODWORD(a4) = (unsigned __int64)(274877907LL * (int)num) >> 32;
  v10 = (int)a4 >> 6;
  LODWORD(a4) = (unsigned int)a4 >> 31;
  v11 = v10 + a4;
  if ( (_DWORD)v11 != 500 )
    return SOUND::createSe(v8, pos, v11, a4, a5, a6, a7, a8);
  v11 = *(unsigned int *)&(*this)[1416];
  a4 = v11 & 0x40;
  if ( (v11 & 0x40) == 0 )
  {
    v11 &= 4u;
    if ( !(_DWORD)v11 )
      return SOUND::createSe(v8, pos, v11, a4, a5, a6, a7, a8);
    this = (YS::STDOBJ_112 *const)*(unsigned int *)&(*this)[2808];
  }
  if ( !(_DWORD)this )
    return SOUND::createSe(v8, pos, v11, a4, a5, a6, a7, a8);
  if ( *(_DWORD *)&(*this)[2484] )
  {
    v12 = *(__int16 *)(*(unsigned int *)&(*this)[2484] + 2LL);
    if ( v12 >= 0 )
      v8 = (int)v8 % 1000 + 1000 * v12;
  }
  v13 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)this);
  return SOUND::createSe(v8, v13, v19, v18, v17, v16, v15, v14);
}
// 4A21CC: variable 'v19' is possibly undefined
// 4A21CC: variable 'v18' is possibly undefined
// 4A21CC: variable 'v17' is possibly undefined
// 4A21CC: variable 'v16' is possibly undefined
// 4A21CC: variable 'v15' is possibly undefined
// 4A21CC: variable 'v14' is possibly undefined


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\F_HB050\f_hb.bdscript ((F) CoR’s pushing pillar (HB))
obj\F_HB050_23\f_hb.bdscript ((F) CoR’s pushing pillar 2 (HB))
obj\F_HB060\f_hb.bdscript ((F) CoR’s rising pillar (HB))
obj\F_HB140\f_hb.bdscript ((F) Cavern of Remembrance big pushing block (HB))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\trinity\limi.bdscript
L8150:
 pushFromFSp 4
 jz L8183
 pushFromFSp 0
 pushImm 409020
 syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
 pushImmf 60
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 60
 gosub 4, L5452
 pushImm 1
 syscall 1, 223 ; trap_camera_cancel (1 in, 0 out)
 pushImmf 30
 gosub 4, L5452
 jmp L8188
