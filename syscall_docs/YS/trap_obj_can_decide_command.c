---
---
---
name: trap_obj_can_decide_command
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
syscall 1, 221 ; trap_obj_can_decide_command (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
const YS::COMMAND_ELEM *__fastcall YS::COMMAND_ELEM::Get(__int64 id)
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
bool __fastcall YS::COMMAND_ELEM::can_decide(const YS::COMMAND_ELEM *const this, YS::OBJ_96 *player, const YS::TARGET_54 *target)
/----- (00000000004F9338) ----------------------------------------------------
void __fastcall YS::trap_obj_can_decide_command(BD_VALUE_21 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  YS::OBJ_96 *v4; // r28
  const YS::COMMAND_ELEM *v5; // r3
  __int64 v6; // r30
  const YS::COMMAND_ELEM *v7; // r29
  YS::OBJ_168 *v8; // r30
  __int64 back_chain; // [sp+0h] [-C0h]
  YS::TARGET_108 v10; // [sp+70h] [-50h] BYREF

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
  v4 = (YS::OBJ_96 *)*(unsigned int *)(v2 + 4);
  v5 = YS::COMMAND_ELEM::Get(*(int *)&(*args)[4]);
  v6 = *(unsigned int *)&(*args)[8];
  v7 = v5;
  if ( !(_DWORD)v6 )
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
  if ( (v6 & 3) != 0 )
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
  v8 = (YS::OBJ_168 *)*(unsigned int *)(v6 + 4);
  YS::TARGET::clear((YS::TARGET_108 *const)v10);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v10, v8, 0);
  *(_DWORD *)args = YS::COMMAND_ELEM::can_decide(v7, v4, (const YS::TARGET_54 *)v10);
}
// 4F935C: variable 'back_chain' is possibly undefined

//COMPLICATED YS::COMMAND_ELEM::Get YS::TARGET::clear YS::TARGET::set_obj YS::COMMAND_ELEM::can_decide
->
/----- (000000000041BAD8) ----------------------------------------------------
const YS::COMMAND_ELEM *__fastcall YS::COMMAND_ELEM::Get(__int64 id)
{
  _WORD *v2; // r30
  __int64 v3; // r29
  unsigned int v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (_WORD *)bsearch(
                  id,
                  (unsigned int)(YS::CommandElem + 8),
                  *(unsigned int *)((unsigned int)YS::CommandElem + 4LL),
                  48LL,
                  (unsigned int)&YS::ELEMDATA<YS::COMMAND_ELEM>::Compare);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("no such command, id = %d", id);
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp", 47);
  }
  if ( v2[1] == 2 && *v2 != 2 )
  {
    v3 = (unsigned int)YS::CommandElem;
    v4 = YS::MAGIC::GetCommand((__int16)v2[2]);
    v2 = (_WORD *)bsearch(
                    v4,
                    (unsigned int)(v3 + 8),
                    *(unsigned int *)(v3 + 4),
                    48LL,
                    (unsigned int)&YS::ELEMDATA<YS::COMMAND_ELEM>::Compare);
    if ( !(_DWORD)v2 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "elem != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp",
        52LL,
        "Get",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp", 52);
    }
  }
  return (const YS::COMMAND_ELEM *)v2;
}
// 41BBDC: variable 'back_chain' is possibly undefined
// 799070: using guessed type __int64 (__fastcall *__ptr32 YS::ELEMDATA<YS::COMMAND_ELEM>::Compare)();
// 2A81310: using guessed type int YS::CommandElem;


->
/----- (00000000004A8118) ----------------------------------------------------
void __fastcall YS::TARGET::clear(YS::TARGET_108 *const this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
}


->
/----- (00000000004A8134) ----------------------------------------------------
void __fastcall YS::TARGET::set_obj(YS::TARGET_108 *const this, YS::OBJ_168 *obj, int group)
{
  int v5; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v5 = (int)obj;
  if ( group < 0 || group >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "group >= 0 && group < COLLISION::GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp",
      264LL,
      "set_obj",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\target.cpp", 264);
  }
  *(_QWORD *)&(*this)[8] = 0xFFFFFFFFLL;
  *(_DWORD *)this = v5;
  *(_DWORD *)&(*this)[4] = group;
}
// 4A8164: variable 'back_chain' is possibly undefined


->
/----- (000000000041B728) ----------------------------------------------------
bool __fastcall YS::COMMAND_ELEM::can_decide(const YS::COMMAND_ELEM *const this, YS::OBJ_96 *player, const YS::TARGET_54 *target)
{
  int v6; // r3
  unsigned __int64 v9; // r29
  unsigned __int64 v10; // r28
  __int64 back_chain; // [sp+0h] [-90h]

  v6 = this->Receiver;
  if ( v6 > 0 )
  {
    if ( v6 <= 1 )
    {
      v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
      if ( !(_DWORD)target || !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*target)[0]) )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "target != NULL && target->get_obj()->is_exist()",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp",
          67LL,
          "can_decide",
          (const void *)v9);
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp", 67);
      }
      if ( (unsigned int)YS::OBJ::can_decide((YS::OBJ_128 *const)(*target)[0], this) )
        return 1;
    }
    else if ( v6 <= 2 )
    {
      v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
      if ( !(_DWORD)target || !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*target)[0]) )
      {
        ErrorPrintf(
          "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
          "target != NULL && target->get_obj()->is_exist()",
          "common",
          "C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp",
          73LL,
          "can_decide",
          (const void *)v10);
        ErrorRaise();
        Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\commandelem.cpp", 73);
      }
      if ( (unsigned int)YS::OBJ::can_decide(player, this)
        && (unsigned int)YS::OBJ::can_decide((YS::OBJ_128 *const)(*target)[0], this) )
      {
        return 1;
      }
    }
  }
  else if ( (unsigned int)YS::OBJ::can_decide(player, this) )
  {
    return 1;
  }
  return 0;
}
// 41B768: conditional instruction was optimized away because of 'r3.4==0'
// 41B7A4: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

