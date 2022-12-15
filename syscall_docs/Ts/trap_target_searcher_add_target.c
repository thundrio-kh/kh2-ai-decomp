---
---
---
name: trap_target_searcher_add_target
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
syscall 6, 21 ; trap_target_searcher_add_target (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::add(Ts::TARGET_SEARCHER_0 *const this, YS::OBJ_248 *obj, int group)
/----- (0000000000625C0C) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_add_target(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER::add((Ts::TARGET_SEARCHER_0 *const)(*args)[0], (YS::TARGET_156 *)*(unsigned int *)&(*args)[4]);
}
->
/----- (00000000006224F4) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::add(Ts::TARGET_SEARCHER_0 *const this, YS::OBJ_248 *obj, int group)
{
  const YS::COLLISION_ELEM_0 *i; // r29
  int v7; // r7
  __int64 v8; // r8
  int v9; // r6
  int v10; // r7
  int v11; // r30
  u_char v12; // r6
  int v13; // r4
  u_char v14; // r5

  if ( (_DWORD)obj && (unsigned int)YS::OBJ::is_exist(obj) )
  {
    if ( group >= 0 )
    {
      v7 = this->Counter;
      v8 = 0LL;
      if ( v7 <= 0 )
      {
LABEL_12:
        *(_DWORD *)((unsigned int)this + 8 * this->_anon_0._anon_0.Index + 28) = (_DWORD)obj;
        *(_DWORD *)((unsigned int)this + 8 * this->_anon_0._anon_0.Index + 32) = group;
        v10 = this->Counter;
        v11 = this->Num;
        v12 = this->_anon_0._anon_0.Index;
        if ( v10 < this->Num )
          this->Counter = v10 + 1;
        LOBYTE(v13) = v12 + 1;
        this->_anon_0._anon_0.Index = v12 + 1;
        if ( (unsigned __int8)(v12 + 1) >= v11 )
        {
          do
          {
            v14 = v13 - v11;
            v13 = (unsigned __int8)(v13 - v11);
          }
          while ( v13 >= v11 );
          this->_anon_0._anon_0.Index = v14;
        }
      }
      else
      {
        v9 = (int)this;
        while ( *(_DWORD *)(unsigned int)(v9 + 28) != (_DWORD)obj || *(_DWORD *)(unsigned int)(v9 + 32) != group )
        {
          ++v8;
          v9 += 8;
          if ( (int)v8 >= v7 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      for ( i = 0LL; ; Ts::TARGET_SEARCHER::add(this, obj, i->Group) )
      {
        i = YS::OBJ::each_collision(obj, 3, i);
        if ( !(_DWORD)i )
          break;
      }
    }
  }
}


/----- (0000000000622650) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::add(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target)
{
  Ts::TARGET_SEARCHER::add(this, (YS::OBJ_248 *)(*target)[0], *(_DWORD *)&(*target)[4]);
}


---
---
---
appears in:

---
---
---
example usage from NA

