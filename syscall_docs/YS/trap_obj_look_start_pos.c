---
---
---
name: trap_obj_look_start_pos
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
syscall 1, 175 ; trap_obj_look_start_pos (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::LOOKAT::start(YS::LOOKAT_116 *const this, const kn::FVector *pos, double time, u_int flag)
/----- (00000000005008FC) ----------------------------------------------------
void __fastcall YS::trap_obj_look_start_pos(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

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
  YS::LOOKAT::start(
    (YS::LOOKAT_116 *const)(unsigned int)(*(_DWORD *)(v2 + 4) + 1184),
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    1u);
}
// 500920: variable 'back_chain' is possibly undefined
->
/----- (00000000004451F8) ----------------------------------------------------
void __fastcall YS::LOOKAT::start(YS::LOOKAT_116 *const this, const kn::FVector *pos, double time, u_int flag)
{
  if ( *(int *)&(*this)[12] >= 0 )
  {
    *(_DWORD *)&(*this)[4] = 1;
    kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), pos);
    YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 16), 0.0, 1.0, time);
    *(_DWORD *)&(*this)[8] = flag;
  }
}


/----- (0000000000445290) ----------------------------------------------------
void __fastcall YS::LOOKAT::start(YS::LOOKAT_116 *const this, YS::OBJ_117 *obj, double time, u_int flag)
{
  const YS::COLLISION_ELEM_0 *v8; // r3
  int v9; // r6
  kn::FVector v10; // [sp+70h] [-40h] BYREF

  if ( *(int *)&(*this)[12] >= 0 )
  {
    v8 = YS::OBJ::get_collision((YS::OBJ_125 *const)(*this)[0], 20, -1);
    if ( (_DWORD)v8 )
    {
      v9 = v8->Bone;
      *(_DWORD *)&(*this)[4] = 2;
      *(_DWORD *)&(*this)[12] = v9;
      *(_DWORD *)&(*this)[48] = (_DWORD)obj;
      YS::OBJ::get_dir((YS::OBJ_125 *const)&v10, obj);
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 64), &v10);
      *(_DWORD *)&(*this)[80] = 0;
      YS::FADE::start((YS::FADE *const)(unsigned int)((_DWORD)this + 16), 0.0, 1.0, time);
      *(_DWORD *)&(*this)[8] = flag;
    }
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

