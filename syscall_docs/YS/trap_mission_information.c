---
---
---
name: trap_mission_information
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
syscall 4, 4 ; trap_mission_information (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::ShowInformation(__int64 message_id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F5FE0) ----------------------------------------------------
void __fastcall YS::trap_mission_information(BD_VALUE_20 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::MISSION::ShowInformation(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (00000000004515F0) ----------------------------------------------------
void __fastcall YS::MISSION::ShowInformation(__int64 message_id, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4
  const YS::MESSAGE *v29; // r3

  if ( !(_DWORD)message_id )
  {
    a2 = (unsigned int)YS::Current;
    if ( !YS::Current )
    {
      printf(
        (unsigned int)"[%s:%d]",
        (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp",
        606LL,
        a4,
        a5,
        a6,
        a7,
        a8);
      printf((unsigned int)"\x1B[31m** WARNING! ", v14, v13, v12, v11, v10, v9, v8);
      printf((unsigned int)"no mission", v21, v20, v19, v18, v17, v16, v15);
      printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
      return;
    }
    message_id = *(unsigned __int16 *)(*(unsigned int *)((unsigned int)YS::Current + 8LL) + 6LL);
  }
  if ( (int)message_id > 0 )
  {
    v29 = YS::MESSAGE::GetData(message_id, a2, a3, a4, a5, a6, a7, a8);
    dk::INFORMATION::openInformationWindow(v29);
  }
}
// 451638: variable 'v14' is possibly undefined
// 451638: variable 'v13' is possibly undefined
// 451638: variable 'v12' is possibly undefined
// 451638: variable 'v11' is possibly undefined
// 451638: variable 'v10' is possibly undefined
// 451638: variable 'v9' is possibly undefined
// 451638: variable 'v8' is possibly undefined
// 451648: variable 'v21' is possibly undefined
// 451648: variable 'v20' is possibly undefined
// 451648: variable 'v19' is possibly undefined
// 451648: variable 'v18' is possibly undefined
// 451648: variable 'v17' is possibly undefined
// 451648: variable 'v16' is possibly undefined
// 451648: variable 'v15' is possibly undefined
// 451658: variable 'v28' is possibly undefined
// 451658: variable 'v27' is possibly undefined
// 451658: variable 'v26' is possibly undefined
// 451658: variable 'v25' is possibly undefined
// 451658: variable 'v24' is possibly undefined
// 451658: variable 'v23' is possibly undefined
// 451658: variable 'v22' is possibly undefined
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

