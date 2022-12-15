---
---
---
name: trap_obj_motion_capture
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
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::MOTION::capture(YS::MOTION_289 *const this, YS::OBJ_124 *target, __int64 id, double blend_time)
/----- (00000000004FECBC) ----------------------------------------------------
void __fastcall YS::trap_obj_motion_capture(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r30
  YS::MOTION_289 *v5; // r29
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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = (YS::MOTION_289 *)(unsigned int)(*(_DWORD *)(v2 + 4) + 320);
  if ( !(_DWORD)v4 )
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
  if ( (v4 & 3) != 0 )
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
  *(_DWORD *)args = YS::MOTION::capture(
                      v5,
                      (YS::OBJ_124 *)*(unsigned int *)(v4 + 4),
                      *(int *)&(*args)[8],
                      *(float *)&(*args)[12]);
}
// 4FECE0: variable 'back_chain' is possibly undefined
->
/----- (000000000045CA5C) ----------------------------------------------------
__int64 __fastcall YS::MOTION::capture(YS::MOTION_289 *const this, YS::OBJ_124 *target, __int64 id, double blend_time)
{
  __int64 v8; // r28
  const YS::MOTIONSET *v9; // r3
  YS::BINARC_62 *v10; // r28
  YS::BINARC_63 *v11; // r6
  const char *v12; // r3
  __int64 result; // r3
  int v14; // r4

  YS::MOTION::clear_queue((YS::MOTION_289 *const)(unsigned int)((_DWORD)target + 320));
  v8 = YS::MOTION::id_to_num(this, id);
  if ( (int)v8 < 0 || (v9 = (const YS::MOTIONSET *)(*this)[0], !(_DWORD)v9) )
  {
    v10 = 0LL;
LABEL_9:
    ErrorPrintf("*ERROR! ");
    v12 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)&(*this)[8]);
    ErrorPrintf("no capture motion, %s, id = %d", v12, id);
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\motion.cpp", 877);
    goto LABEL_10;
  }
  if ( *(_DWORD *)&(*this)[4]
    && (v11 = YS::MOTIONSET::get_motion((const YS::MOTIONSET *const)*(unsigned int *)&(*this)[4], v8),
        v9 = (const YS::MOTIONSET *)(*this)[0],
        (_DWORD)v11) )
  {
    v10 = (YS::BINARC_62 *)v11;
  }
  else
  {
    v10 = (YS::BINARC_62 *)YS::MOTIONSET::get_motion(v9, v8);
  }
  if ( !(_DWORD)v10 )
    goto LABEL_9;
LABEL_10:
  result = YS::MOTION::_Capture(
             (YS::OBJ_124 *)*(unsigned int *)&(*this)[8],
             v10,
             (ryj::PAX_328 *)*(unsigned int *)&(*this)[240],
             target,
             blend_time,
             (int *)(unsigned int)(*(_DWORD *)&(*this)[8] + 1160));
  v14 = *(_DWORD *)this;
  *(_DWORD *)&(*target)[340] = id;
  *(_DWORD *)&(*target)[576] = v14;
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

