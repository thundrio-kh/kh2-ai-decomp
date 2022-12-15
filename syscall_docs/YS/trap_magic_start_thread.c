---
---
---
name: trap_magic_start_thread
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
syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::MAGIC_85 *__fastcall YS::MAGIC::Start(YS::VM_313 *parent, int pc, BD_VALUE_8 *args, int argc)
/----- (00000000004F50D8) ----------------------------------------------------
void __fastcall YS::trap_magic_start_thread(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (unsigned int)YS::MAGIC::Start(
                                    (YS::VM_313 *)(unsigned int)YS::VM::Current,
                                    *(_DWORD *)args,
                                    (BD_VALUE_8 *)(unsigned int)((_DWORD)args + 4),
                                    1);
}
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;
->
/----- (0000000000446FB4) ----------------------------------------------------
YS::MAGIC_85 *__fastcall YS::MAGIC::Start(YS::VM_313 *parent, int pc, BD_VALUE_8 *args, int argc)
{
  unsigned int v4; // r30
  unsigned int *v5; // r31
  unsigned int *v6; // r3
  unsigned __int64 v7; // r6

  v4 = (unsigned int)YS::VM::dup(parent, 0, pc, (BD_VALUE_0 *)args, argc);
  v5 = 0LL;
  v6 = AREA::Alloc(0x10u);
  if ( (_DWORD)v6 )
  {
    *v6 = v4;
    v6[1] = 0;
    v6[2] = 0;
    v7 = (unsigned int)((_DWORD)v6 + 12);
    if ( dword_2A9DC34 )
    {
      *(_DWORD *)(unsigned int)(dword_2A9DC34 + 12) = (_DWORD)v6;
      *(_DWORD *)v7 = 0;
      dword_2A9DC34 = (int)v6;
    }
    else
    {
      dword_2A9DC34 = (int)v6;
      YS::MagicList = (int)v6;
      *(_DWORD *)v7 = 0;
    }
    v5 = v6;
  }
  return (YS::MAGIC_85 *)v5;
}
// 2A9DC30: using guessed type int YS::MagicList;
// 2A9DC34: using guessed type int dword_2A9DC34;


---
---
---
appears in:

---
---
---
example usage from NA

