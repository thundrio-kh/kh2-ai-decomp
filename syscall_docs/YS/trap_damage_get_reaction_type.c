---
---
---
name: trap_damage_get_reaction_type
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
syscall 2, 91 ; trap_damage_get_reaction_type (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::DAMAGE::GetReactionType(__int64 reaction)
/----- (00000000004F422C) ----------------------------------------------------
void __fastcall YS::trap_damage_get_reaction_type(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::DAMAGE::GetReactionType(*(int *)args);
}
->
/----- (0000000000422060) ----------------------------------------------------
__int64 __fastcall YS::DAMAGE::GetReactionType(__int64 reaction)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( (int)reaction > 8 )
  {
    if ( (int)reaction > 13 )
    {
      if ( (int)reaction > 16 )
      {
        if ( (int)reaction > 17 )
        {
          if ( (int)reaction > 18 )
          {
LABEL_32:
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "0",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\damage.cpp",
              109LL,
              "GetReactionType",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\damage.cpp", 109);
            return reaction;
          }
          return 3LL;
        }
      }
      else
      {
        if ( (int)reaction <= 14 )
          return reaction;
        if ( (int)reaction > 15 )
          return 3LL;
      }
    }
    else if ( (int)reaction > 10 )
    {
      if ( (int)reaction > 11 )
      {
        if ( (int)reaction > 12 )
          return 3LL;
        return 1LL;
      }
    }
    else if ( (int)reaction > 9 )
    {
      return 3LL;
    }
    return 4LL;
  }
  if ( (int)reaction > 3 )
  {
    if ( (int)reaction > 5 )
    {
      if ( (int)reaction <= 6 || (int)reaction > 7 )
        return 3LL;
    }
    else if ( (int)reaction > 4 )
    {
      return reaction;
    }
    return 4LL;
  }
  if ( (int)reaction <= 0 )
  {
    if ( (int)reaction > -1 )
      return reaction;
    goto LABEL_32;
  }
  if ( (int)reaction <= 1 )
    return 1LL;
  if ( (int)reaction > 2 )
    return 3LL;
  return reaction;
}
// 422168: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

