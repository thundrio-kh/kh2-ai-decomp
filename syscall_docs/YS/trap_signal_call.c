---
---
---
name: trap_signal_call
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
syscall 1, 41 ; trap_signal_call (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall YS::SIGNAL::Call(int signal, int arg)
/----- (0000000000503854) ----------------------------------------------------
void __fastcall YS::trap_signal_call(BD_VALUE_21 *args)
{
  YS::SIGNAL::Call(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000049B708) ----------------------------------------------------
bool __fastcall YS::SIGNAL::Call(int signal, int arg)
{
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 v10; // r5
  __int64 v11; // r4
  __int64 v12; // r29

  if ( YS::CHECK_CACHEBUFF::IsExec() )
    return 0LL;
  YS::SIGNAL::ClearReserve(signal);
  v12 = 1LL;
  if ( signal <= 101 )
  {
    if ( signal <= 86 )
    {
      if ( signal != 79 && signal != 70 && signal != 22 )
      {
        if ( signal != 19 )
          goto LABEL_25;
        goto LABEL_23;
      }
LABEL_24:
      Tz::SubMenu::StartBySignal(signal);
      return v12;
    }
    if ( signal > 99 || signal <= 89 || signal == 98 )
      goto LABEL_24;
LABEL_25:
    if ( signal > 8 )
    {
      if ( signal == 130 )
        goto LABEL_29;
    }
    else if ( signal > 7 )
    {
LABEL_29:
      if ( arg )
        YS::SIGNAL::LastGimmick = (unsigned int)YS::OBJ::SearchBySerial(arg);
      goto _noname_;
    }
_noname_:
    YS::UNITSCRIPT::Signal(signal, arg);
    YS::OBJ::Signal(signal, arg);
    return YS::SIGNAL_HOOK::SignalCall(signal, arg);
  }
  if ( signal > 117 )
  {
    if ( signal <= 130 )
    {
      if ( signal > 128 )
      {
        if ( signal <= 129 )
          goto LABEL_24;
      }
      else if ( signal <= 118 )
      {
        goto LABEL_24;
      }
      goto LABEL_25;
    }
    if ( signal > 133 && signal != 138 )
      goto LABEL_25;
  }
LABEL_23:
  SHOP::StartMenu(signal, v11, v10, v9, v8, v7, v6, v5);
  return v12;
}
// 49B7E0: variable 'v11' is possibly undefined
// 49B7E0: variable 'v10' is possibly undefined
// 49B7E0: variable 'v9' is possibly undefined
// 49B7E0: variable 'v8' is possibly undefined
// 49B7E0: variable 'v7' is possibly undefined
// 49B7E0: variable 'v6' is possibly undefined
// 49B7E0: variable 'v5' is possibly undefined
// 2AACA60: using guessed type int YS::SIGNAL::LastGimmick;


---
---
---
appears in:

---
---
---
example usage from NA

