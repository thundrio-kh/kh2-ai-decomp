Every trap has had a page created under syscall_docs with some information to fill in as well as some information that can be key in figuring out what the function does without time consuming testing

variable list: The stubs start out with the variable names prefixed with unkX that should be replaced with meaningful names (taken from source where possible), and a (unknown) that should be replaced with the type (again taken from source where possible). Then each input has one or more set of parenthesis, describing example values used in the game scripts. These example values are only sometimes going to be accurate/complete, so take them with a potential grain of salt rather than a single source of truth for what the values can be.

decompiled code: All traps have a "wrapper" function which when decompiled just has a generic *args argument. But if you look one level deeper when they call a function within the game, those functions tend to actually have informative headers telling us the types and name of each argument. So these pages have provided both the wrapper function, and the function one level deeper (this is enough for figuring out most functions, but having a copy of the games decompiled source to search through will still be helpful sometimes).
    
Sometimes a wrapper function is labeled as //BASIC meaning it does not call into a function within the game. In this case we have to figure out the type and names of the functions ourselved. But these functions are usually simple and can be figured out just by carefully reviewing the trap name and what the fucntion does (IE the purpose and argument of the trap_abs function is self evident)


Then a list of every AI file where the trap is found  gets listed, along with a recognizable name for the objects if one was found

Finally there is a label copied out of one of the examples, showing how that trap is used, which can sometimes be helpful in figuring out it's purpose.



GUIDELINES FOR FILLING IN DOC PAGES

category: Try using one of these existing categories, but if it doesn't fit make a new one. At the end it will be easier to see the different categories and figure out if another grouping makes sense.
actions
ai_action
attack
damage
gamplay
interface
map
math
mission
object
player
spawns
unused
utilities
visual



documentation level:
stub - has not been touched from the initial autogenerated documentation
incomplete - An attempt at documenting has been done, but some variables are unknown or the way it works is not yet understood
untested - We believe the documentation is mostly complete, but nobody has actually tested it in game to confirm the function works the way it is described
tested - Function is confirmed to work the way it is described in the documentation

Variable list: We want to replace the unknown names and types with known ones (for now I'm using `struct *` to represent in game objects/classes being passed around). And then get rid of the example values with a single () containing a short description of what the parameter does.

`push frame ; (int)  (Number of frames to take for fade out)`

description: A readable explanation of what the function does

Once every page has been filled in past being a stub, I will write a script to parse the useful information into markdown documentation for the OpenKH wiki. The decompiled code will not be put into the wiki, but the rest of the information will most likely make it. I would also like to put the descriptions as hover text in the VSCode bdscript plugin, but I don't know how easy that will be to do

### Notes for when I'm done going through everything
When making categories you most likely want to keep all of the similar named traps in the same spot (ie all trap_attack together), but you don't want to just use those names because a different grouping will be more developer friendly (ie trap_area and trap_worldflag can both go under mapinfo)