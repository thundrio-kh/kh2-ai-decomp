## trap_command_override_slot (command)

`syscall 1, 345 ; trap_command_override_slot (4 in, 1 out)`

Overrides the specified slot on the command cage with priority 100, and returns the slot

#### Input parameters
| Name | Type | Description
|------|------|------------
| slot   | int   | slot on the command cage to override, value must be within 0-7
| command   | int   | command to override
| unk   | unknown   | unknown
| num   | int   | unknown


#### Return Parameters
| Name | Type
|------|-----
| commandslot   | YS::COMMAND_SLOT_14 *   
Example Usage From NA






	Appears in:



