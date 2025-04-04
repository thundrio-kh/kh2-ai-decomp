## trap_event_get_rest_time* (event)

`syscall 1, 274 ; trap_event_get_rest_time (0 in, 1 out)`

Gets the amount of time that the event should rest

/* Pseudopython version of GetRestTime()
def GetRestTime:
  if YS::Current:
    return 0
  if *YS::Current + 12 == 8:
    return sa::EVENT::getRestFrame()
  return 3600
*/

### Input parameters
| Name | Type | Description
|------|------|------------


### Output Parameters
| Name | Type
|------|-----
| rest_time   | float   
### Example Usage From obj\M_EX660_WI_RAW\m_ex.bdscript
```plaintext
L2592:
 syscall 1, 274 ; trap_event_get_rest_time (0 in, 1 out)
 pushFromFSp 4
 subf 
 supzf 
 jz L2603
 halt 
 jmp L2592
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX660_WI_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



