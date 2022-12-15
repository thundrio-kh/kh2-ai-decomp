---
---
---
name: trap_sound_set_bgse_volume
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
syscall 0, 104 ; trap_sound_set_bgse_volume (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl SOUND::silentBgSeOn()
void __cdecl SOUND::silentBgSeOff()
/----- (00000000004B9048) ----------------------------------------------------
void __fastcall YS::trap_sound_set_bgse_volume(BD_VALUE_16 *args)
{
  if ( *(int *)args <= 0 )
    SOUND::silentBgSeOn();
  else
    SOUND::silentBgSeOff();
}

//COMPLICATED SOUND::silentBgSeOn SOUND::silentBgSeOff
->
/----- (0000000000139938) ----------------------------------------------------
void __cdecl SOUND::silentBgSeOn()
{
  __int64 v0; // r10
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // r7
  __int64 v4; // r6
  __int64 v5; // r5
  __int64 v6; // r4
  __int64 v7; // r4
  unsigned int v8; // r3

  printf((unsigned int)"SOUND::silentSeOn()\n", v6, v5, v4, v3, v2, v1, v0);
  LODWORD(v7) = 0;
  v8 = s_seList;
LABEL_2:
  if ( !(_DWORD)v7 )
  {
    v7 = v8;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v7 = *(unsigned int *)(unsigned int)(v7 + 28);
LABEL_5:
    if ( !(_DWORD)v7 )
      break;
    if ( *(_BYTE *)(v7 + 49) != 2 )
      goto LABEL_2;
    *(_DWORD *)(unsigned int)(v7 + 36) |= 8u;
  }
}
// 1399AC: conditional instruction was optimized away because of 'r4.4!=0'
// 13994C: variable 'v6' is possibly undefined
// 13994C: variable 'v5' is possibly undefined
// 13994C: variable 'v4' is possibly undefined
// 13994C: variable 'v3' is possibly undefined
// 13994C: variable 'v2' is possibly undefined
// 13994C: variable 'v1' is possibly undefined
// 13994C: variable 'v0' is possibly undefined
// A352C8: using guessed type int s_seList;


->
/----- (00000000001399C4) ----------------------------------------------------
void __cdecl SOUND::silentBgSeOff()
{
  __int64 v0; // r10
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // r7
  __int64 v4; // r6
  __int64 v5; // r5
  __int64 v6; // r4
  __int64 v7; // r5
  unsigned int v8; // r3

  printf((unsigned int)"SOUND::silentSeOff()\n", v6, v5, v4, v3, v2, v1, v0);
  LODWORD(v7) = 0;
  v8 = s_seList;
LABEL_2:
  if ( !(_DWORD)v7 )
  {
    v7 = v8;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v7 = *(unsigned int *)(unsigned int)(v7 + 28);
LABEL_5:
    if ( !(_DWORD)v7 )
      break;
    if ( *(_BYTE *)(v7 + 49) != 2 )
      goto LABEL_2;
    *(_DWORD *)(unsigned int)(v7 + 36) &= 0xFFFFFFF7;
  }
}
// 139A3C: conditional instruction was optimized away because of 'r5.4!=0'
// 1399D8: variable 'v6' is possibly undefined
// 1399D8: variable 'v5' is possibly undefined
// 1399D8: variable 'v4' is possibly undefined
// 1399D8: variable 'v3' is possibly undefined
// 1399D8: variable 'v2' is possibly undefined
// 1399D8: variable 'v1' is possibly undefined
// 1399D8: variable 'v0' is possibly undefined
// A352C8: using guessed type int s_seList;


---
---
---
appears in:

---
---
---
example usage from NA

