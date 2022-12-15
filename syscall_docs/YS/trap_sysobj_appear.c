---
---
---
name: trap_sysobj_appear
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
syscall 1, 0 ; trap_sysobj_appear (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::CROWD_EVENT_4 *__fastcall YS::OBJENTRY::Appear(__int64 id, const kn::FVector *pos, double rot)
/----- (00000000004F71C8) ----------------------------------------------------
void __fastcall YS::trap_sysobj_appear(BD_VALUE_21 *args)
{
  __int64 v2; // r3

  v2 = *(unsigned int *)args;
  if ( !LS_262_LV_29 )
  {
    LS_262_pos.x = 0.0;
    LS_262_LV_29 = 1;
    LS_262_pos.y = 0.0;
    LS_262_pos.z = 0.0;
    LS_262_pos.w = 1.0;
  }
  *(_DWORD *)args = (unsigned int)YS::OBJENTRY::Appear(v2, &LS_262_pos, 3.1415927);
}
// 2B75E78: using guessed type char LS_262_LV_29;
->
/----- (000000000046B340) ----------------------------------------------------
YS::CROWD_EVENT_4 *__fastcall YS::OBJENTRY::Appear(__int64 id, const kn::FVector *pos, double rot)
{
  const YS::OBJENTRY_0 *v6; // r3
  int v7; // r4
  const YS::OBJENTRY_0 *v8; // r28
  YS::ACTOR *v9; // r31
  YS::ACTOR *v10; // r3
  YS::ACTOR *v11; // r30
  YS::CROWD_EVENT_4 *result; // r3
  unsigned int v13; // r31
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r7
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r7
  __int64 v22; // r6
  __int64 v23; // r5
  __int64 v24; // r4
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r10
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r7
  __int64 v35; // r6
  __int64 v36; // r5
  __int64 v37; // r4
  OBJENTRY_ID v38; // r3
  const YS::OBJENTRY_0 *v39; // r3
  int v40; // r31
  OBJENTRY_ID v41; // r3
  const YS::OBJENTRY *v42; // r31
  __int64 v43; // r10
  __int64 v44; // r8
  __int64 v45; // r7
  __int64 v46; // r6
  __int64 v47; // r9
  unsigned int v48; // r4
  YS::OBJ_131 *v49; // r30
  YS::ZAKO *v50; // r3
  YS::OBJ_131 *v51; // r28
  unsigned int *v52; // r30
  unsigned int *v53; // r3
  unsigned int *v54; // r28
  YS::OBJ_131 *v55; // r30
  unsigned int *v56; // r3
  unsigned int *v57; // r28
  YS::OBJ_131 *v58; // r30
  YS::BOSS *v59; // r3
  YS::OBJ_131 *v60; // r28
  YS::OBJ_131 *v61; // r28
  unsigned int *v62; // r3
  unsigned int *v63; // r30
  YS::OBJ_131 *v64; // r30
  unsigned int *v65; // r3
  unsigned int *v66; // r28
  unsigned int *v67; // r30
  unsigned int *v68; // r3
  unsigned int *v69; // r28
  unsigned int *v70; // r30
  unsigned int *v71; // r3
  unsigned int *v72; // r28
  YS::NPC_0 *v73; // r30
  YS::NPC_0 *v74; // r3
  YS::NPC_0 *v75; // r28
  YS::STDOBJ *v76; // r30
  YS::STDOBJ *v77; // r3
  YS::STDOBJ *v78; // r28
  YS::OBJ_131 *v79; // r30
  YS::TREASURE_BOX *v80; // r3
  YS::OBJ_131 *v81; // r28
  YS::SUMMON_1 *v82; // r30
  YS::SUMMON_1 *v83; // r3
  YS::SUMMON_1 *v84; // r28
  YS::PRIZEBOX *v85; // r30
  YS::PRIZEBOX *v86; // r3
  YS::PRIZEBOX *v87; // r28
  YS::JIGSAWPIECE *v88; // r30
  YS::JIGSAWPIECE *v89; // r3
  YS::JIGSAWPIECE *v90; // r28
  __int64 v91; // r10
  __int64 v92; // r9
  __int64 v93; // r8
  __int64 v94; // r7
  __int64 v95; // r6
  __int64 v96; // r5
  __int64 v97; // r4
  __int64 v98; // r10
  __int64 v99; // r9
  __int64 v100; // r8
  __int64 v101; // r7
  __int64 v102; // r6
  __int64 v103; // r5
  __int64 v104; // r4
  __int64 v105; // r10
  __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // r7
  __int64 v109; // r6
  __int64 v110; // r5
  __int64 v111; // r4
  unsigned int *v112; // r28
  unsigned int *v113; // r3
  unsigned int *v114; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  if ( (id & 0x40000000) != 0 )
  {
    v6 = YS::OBJENTRY::Get(id);
    if ( (_DWORD)v6 )
    {
      v7 = v6->Type;
      if ( v7 != 24 && v7 != 22 && v7 != 7 )
      {
        v8 = YS::OBJENTRY::Get(id);
        v9 = 0LL;
        v10 = (YS::ACTOR *)AREA::Alloc(0x9C0u);
        v11 = v10;
        if ( (_DWORD)v10 )
        {
          YS::ACTOR::ACTOR(v10, v8, 6u, pos, rot);
          v9 = v11;
        }
        return (YS::CROWD_EVENT_4 *)v9;
      }
    }
  }
  if ( (unsigned int)id > 0x31A )
  {
    if ( (_DWORD)id == 1006 )
    {
LABEL_14:
      v13 = (unsigned int)YS::OBJENTRY_DATA::Get(id);
      printf(
        (unsigned int)"[%s:%d]",
        (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\objentry.cpp",
        374LL,
        (__int64)"",
        v17,
        v16,
        v15,
        v14);
      printf((unsigned int)"\x1B[31m** WARNING! ", v24, v23, v22, v21, v20, v19, v18);
      printf((unsigned int)"appear MENU(MEMO) obj, '%s'", v13 + 8, v30, v29, v28, v27, v26, v25);
      printf((unsigned int)" **\x1B[00m\n", v37, v36, v35, v34, v33, v32, v31);
      return 0LL;
    }
  }
  else if ( (unsigned int)id > 0x318 )
  {
    goto LABEL_14;
  }
  if ( (id & 0x20000000) != 0 || (id & 0x10000000) != 0 )
    goto LABEL_14;
  if ( (_DWORD)id == 566 )
  {
    v38 = YS::SORA::GetEntryId(0);
    v39 = YS::OBJENTRY::Get(v38);
    v40 = v39->Form;
    if ( !v39->Form )
    {
      v40 = (unsigned __int8)byte_8F8274;
      v41 = YS::SORA::GetEntryId((unsigned __int8)byte_8F8274);
      v39 = YS::OBJENTRY::Get(v41);
    }
    return (YS::CROWD_EVENT_4 *)YS::PLAYER::Appear(v39, v40, pos, rot);
  }
  v42 = (const YS::OBJENTRY *)YS::OBJENTRY::Get(id);
  if ( !YS::AREADATA::CanAddCost((float)(unsigned __int8)v42->gap0[84]) )
    return 0LL;
  v47 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v42 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "entry != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objentry.cpp",
      396LL,
      "Appear",
      (const void *)v47);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objentry.cpp", 396);
  }
  v48 = (unsigned __int8)v42->gap0[4];
  if ( v48 > 0xC )
  {
    if ( (unsigned __int8)v42->gap0[4] > 0x12u )
    {
      switch ( v48 )
      {
        case 0x18u:
          v88 = 0LL;
          v89 = (YS::JIGSAWPIECE *)AREA::Alloc(0xA00u);
          v90 = v89;
          if ( (_DWORD)v89 )
          {
            YS::JIGSAWPIECE::JIGSAWPIECE(v89, v42, pos, rot);
            v88 = v90;
          }
          return v88;
        case 0x17u:
          v70 = 0LL;
          v71 = AREA::Alloc(0xAF0u);
          v72 = v71;
          if ( (_DWORD)v71 )
          {
            YS::ENEMYOBJ::ENEMYOBJ((__int64)v71, v42, pos, rot);
            v70 = v72;
          }
          return (YS::CROWD_EVENT_4 *)v70;
        case 0x16u:
          return YS::MASSOBJ::Create((const YS::OBJENTRY_0 *)v42, pos, rot);
        case 0x15u:
          v52 = 0LL;
          v53 = AREA::Alloc(0xB00u);
          v54 = v53;
          if ( (_DWORD)v53 )
          {
            YS::LARGEZAKO::LARGEZAKO((__int64)v53, v42, pos, rot);
            v52 = v54;
          }
          return (YS::CROWD_EVENT_4 *)v52;
        case 0x14u:
          if ( isShowVersion() )
            return 0LL;
          v76 = 0LL;
          v77 = (YS::STDOBJ *)AREA::Alloc(0xA00u);
          v78 = v77;
          if ( (_DWORD)v77 )
          {
            YS::SHOPPOINT::SHOPPOINT(v77, v42, pos, rot);
            v76 = v78;
          }
          return (YS::CROWD_EVENT_4 *)v76;
        case 0x13u:
          v82 = 0LL;
          v83 = (YS::SUMMON_1 *)AREA::Alloc(0xD10u);
          v84 = v83;
          if ( (_DWORD)v83 )
          {
            YS::SUMMON::SUMMON(v83, (const YS::OBJENTRY_0 *)v42, pos, rot);
            v82 = v84;
          }
          return (YS::CROWD_EVENT_4 *)v82;
      }
    }
    else
    {
      if ( (unsigned __int8)v42->gap0[4] > 0xFu )
      {
        if ( (unsigned __int8)v42->gap0[4] <= 0x10u )
          return (YS::CROWD_EVENT_4 *)Ti::MGObj::create((const YS::OBJENTRY_0 *)v42, pos, rot);
        if ( (unsigned __int8)v42->gap0[4] <= 0x11u )
          return (YS::CROWD_EVENT_4 *)worldmap::Obj::appear((const YS::OBJENTRY_0 *)v42, pos, rot);
        v85 = 0LL;
        v86 = (YS::PRIZEBOX *)AREA::Alloc(0x9F0u);
        v87 = v86;
        if ( (_DWORD)v86 )
        {
          YS::PRIZEBOX::PRIZEBOX(v86, (const YS::OBJENTRY_0 *)v42, pos, 0, 1.0);
          v85 = v87;
        }
        return (YS::CROWD_EVENT_4 *)v85;
      }
      if ( (unsigned __int8)v42->gap0[4] <= 0xDu )
      {
        v67 = 0LL;
        v68 = AREA::Alloc(0xAF0u);
        v69 = v68;
        if ( (_DWORD)v68 )
        {
          YS::GIMMICKOBJ::GIMMICKOBJ((__int64)v68, v42, pos, rot);
          v67 = v69;
        }
        return (YS::CROWD_EVENT_4 *)v67;
      }
      if ( (unsigned __int8)v42->gap0[4] > 0xEu )
      {
        v73 = 0LL;
        v74 = (YS::NPC_0 *)AREA::Alloc(0xB40u);
        v75 = v74;
        if ( (_DWORD)v74 )
        {
          YS::NPC::NPC(v74, (const YS::OBJENTRY_0 *)v42, 5, pos, rot);
          v73 = v75;
        }
        return (YS::CROWD_EVENT_4 *)v73;
      }
    }
LABEL_105:
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\objentry.cpp",
      453LL,
      v46,
      v45,
      v44,
      v47,
      v43);
    printf((unsigned int)"\x1B[31m** WARNING! ", v97, v96, v95, v94, v93, v92, v91);
    printf((unsigned int)"illegal appear", v104, v103, v102, v101, v100, v99, v98);
    printf((unsigned int)" **\x1B[00m\n", v111, v110, v109, v108, v107, v106, v105);
    v112 = 0LL;
    v113 = AREA::Alloc(0xAF0u);
    v114 = v113;
    if ( (_DWORD)v113 )
    {
      YS::FIELDOBJ::FIELDOBJ((__int64)v113, v42, pos, rot);
      v112 = v114;
    }
    return (YS::CROWD_EVENT_4 *)v112;
  }
  if ( (unsigned __int8)v42->gap0[4] <= 4u )
  {
    if ( (unsigned __int8)v42->gap0[4] <= 1u )
    {
      if ( v42->gap0[4] )
        result = (YS::CROWD_EVENT_4 *)YS::FRIEND::Appear((const YS::OBJENTRY_0 *)v42, pos, rot);
      else
        result = (YS::CROWD_EVENT_4 *)YS::PLAYER::Appear((const YS::OBJENTRY_0 *)v42, v42->gap0[87], pos, rot);
      return result;
    }
    if ( (unsigned __int8)v42->gap0[4] > 2u )
    {
      if ( (unsigned __int8)v42->gap0[4] <= 3u )
      {
        v58 = 0LL;
        v59 = (YS::BOSS *)AREA::Alloc(0xB00u);
        v60 = (YS::OBJ_131 *)v59;
        if ( (_DWORD)v59 )
        {
          YS::BOSS::BOSS(v59, v42, pos, rot);
          v58 = v60;
        }
        result = (YS::CROWD_EVENT_4 *)v58;
      }
      else
      {
        v49 = 0LL;
        v50 = (YS::ZAKO *)AREA::Alloc(0xB00u);
        v51 = (YS::OBJ_131 *)v50;
        if ( (_DWORD)v50 )
        {
          YS::ZAKO::ZAKO(v50, v42, pos, rot);
          v49 = v51;
        }
        result = (YS::CROWD_EVENT_4 *)v49;
      }
      return result;
    }
    goto LABEL_105;
  }
  switch ( v48 )
  {
    case 0xCu:
      v61 = 0LL;
      v62 = AREA::Alloc(0xB00u);
      v63 = v62;
      if ( (_DWORD)v62 )
      {
        YS::LARGEBOSS::LARGEBOSS((__int64)v62, v42, pos, rot);
        v61 = (YS::OBJ_131 *)v63;
      }
      result = (YS::CROWD_EVENT_4 *)v61;
      break;
    case 0xAu:
      v79 = 0LL;
      if ( (YS::DBGWIN::Flag & 2) != 0 )
      {
        result = 0LL;
      }
      else
      {
        v80 = (YS::TREASURE_BOX *)AREA::Alloc(0xA00u);
        v81 = (YS::OBJ_131 *)v80;
        if ( (_DWORD)v80 )
        {
          YS::TREASURE_BOX::TREASURE_BOX(v80, v42, pos, rot);
          v79 = v81;
        }
        result = (YS::CROWD_EVENT_4 *)v79;
      }
      break;
    case 9u:
      v55 = 0LL;
      v56 = AREA::Alloc(0xAF0u);
      v57 = v56;
      if ( (_DWORD)v56 )
      {
        YS::BTLNPC::BTLNPC((__int64)v56, v42, pos, rot);
        v55 = (YS::OBJ_131 *)v57;
      }
      result = (YS::CROWD_EVENT_4 *)v55;
      break;
    case 8u:
      v64 = 0LL;
      v65 = AREA::Alloc(0xAF0u);
      v66 = v65;
      if ( (_DWORD)v65 )
      {
        YS::FIELDOBJ::FIELDOBJ((__int64)v65, v42, pos, rot);
        v64 = (YS::OBJ_131 *)v66;
      }
      result = (YS::CROWD_EVENT_4 *)v64;
      break;
    case 7u:
      if ( isShowVersion() )
        result = 0LL;
      else
        result = (YS::CROWD_EVENT_4 *)YS::SAVEPOINT::initialize(v42, pos, rot);
      return result;
    default:
      goto LABEL_105;
  }
  return result;
}
// 46B44C: variable 'v17' is possibly undefined
// 46B44C: variable 'v16' is possibly undefined
// 46B44C: variable 'v15' is possibly undefined
// 46B44C: variable 'v14' is possibly undefined
// 46B45C: variable 'v24' is possibly undefined
// 46B45C: variable 'v23' is possibly undefined
// 46B45C: variable 'v22' is possibly undefined
// 46B45C: variable 'v21' is possibly undefined
// 46B45C: variable 'v20' is possibly undefined
// 46B45C: variable 'v19' is possibly undefined
// 46B45C: variable 'v18' is possibly undefined
// 46B474: variable 'v30' is possibly undefined
// 46B474: variable 'v29' is possibly undefined
// 46B474: variable 'v28' is possibly undefined
// 46B474: variable 'v27' is possibly undefined
// 46B474: variable 'v26' is possibly undefined
// 46B474: variable 'v25' is possibly undefined
// 46B484: variable 'v37' is possibly undefined
// 46B484: variable 'v36' is possibly undefined
// 46B484: variable 'v35' is possibly undefined
// 46B484: variable 'v34' is possibly undefined
// 46B484: variable 'v33' is possibly undefined
// 46B484: variable 'v32' is possibly undefined
// 46B484: variable 'v31' is possibly undefined
// 46B534: variable 'back_chain' is possibly undefined
// 46BAF4: variable 'v46' is possibly undefined
// 46BAF4: variable 'v45' is possibly undefined
// 46BAF4: variable 'v44' is possibly undefined
// 46BAF4: variable 'v47' is possibly undefined
// 46BAF4: variable 'v43' is possibly undefined
// 46BB04: variable 'v97' is possibly undefined
// 46BB04: variable 'v96' is possibly undefined
// 46BB04: variable 'v95' is possibly undefined
// 46BB04: variable 'v94' is possibly undefined
// 46BB04: variable 'v93' is possibly undefined
// 46BB04: variable 'v92' is possibly undefined
// 46BB04: variable 'v91' is possibly undefined
// 46BB14: variable 'v104' is possibly undefined
// 46BB14: variable 'v103' is possibly undefined
// 46BB14: variable 'v102' is possibly undefined
// 46BB14: variable 'v101' is possibly undefined
// 46BB14: variable 'v100' is possibly undefined
// 46BB14: variable 'v99' is possibly undefined
// 46BB14: variable 'v98' is possibly undefined
// 46BB24: variable 'v111' is possibly undefined
// 46BB24: variable 'v110' is possibly undefined
// 46BB24: variable 'v109' is possibly undefined
// 46BB24: variable 'v108' is possibly undefined
// 46BB24: variable 'v107' is possibly undefined
// 46BB24: variable 'v106' is possibly undefined
// 46BB24: variable 'v105' is possibly undefined
// 8F8274: using guessed type char byte_8F8274;
// C730C0: using guessed type int YS::DBGWIN::Flag;


---
---
---
appears in:

---
---
---
example usage from NA

