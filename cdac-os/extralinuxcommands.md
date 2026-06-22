### Echo Command Examples

The `echo` command is used to display text or variable values:

```bash
echo "\$1\$ = \$\$"    # Shows input line with special characters
echo "\$\$0 = \$0"     # bash myScript.sh (displays script name)
```

**Note**: Both `myScript.sh` are too verbose - there are cleaner ways to reference these.
:)  verbose -> In Interative way

### Variable Assignment and Retrieval

```bash
echo "\$1 = $1"        # Access first argument
echo "\$2 = $2"        # Access second argument  
echo "\$3 = $3"        # Access third argument
echo "\$\$4 = $$"      # Access fourth argument (special syntax)
```

### Total Arguments

```bash
echo "Total args received = \$# = $#"
```

---

## Variable Operations

### Special Input Variables

```bash
echo "\$* : = $* "     # Will be a show input line
echo "\$@ = $@"        # Will show same too

echo "\$* = $* "       # Will be show input line (repeated example)
```

**Key Difference**: While `$*` and `$@` appear similar, they behave differently when quoted:
- `"$*"` - treats all arguments as a single string
- `"$@"` - preserves each argument as separate strings

---

## Looping Constructs

### Loop Through `$*`

```bash
for arg in $*
do
    echo "arg: tag" echo ": arg = $arg"
done
```

### Loop Through `$@`

```bash
for arg in $@
do
    echo "@: arg = $arg"
done
```

### Loop Through `$*` (Alternative Syntax)

```bash
for arg in "$*"
do
    echo "* arg = $arg"
done
```

### Loop Through `$@` (Quoted)

```bash
for arg in "$@"
do
    echo "@: arg = $arg"
done
```

---

## Shift Command

The `shift` command moves positional parameters to the left, allowing you to process arguments sequentially.

### Example: Pattern Try It

```bash
echo @"\$9 = $9"       # Display 9th argument
shift 5                # Shift arguments left by 5 positions
echo "\$1 = $1"        # Now displays what was originally $6
                       # Result: shift 2 overwrite
```

**Behavior**:
- `shift 5` - removes the first 5 arguments
- `shift -1` - shifts arguments right (shell dependent)
- After shifting, `$1` contains what was previously in `$6`

---

## Debugging Techniques

### Verbose Mode
```bash
# → verbose → interactive window
```

### Enable Debugging
```bash
set -vx   # enable debugging
```
- `-v` (verbose): Shows commands as they're read
- `-x` (xtrace): Shows commands as they're executed

### In Shell File
```bash
# in sh file
set -vxe
```

---

## Quick Reference

### Common Variables
| Variable | Meaning |
|----------|---------|
| `$0` | Script name |
| `$1, $2, $3...` | Positional arguments |
| `$#` | Number of arguments |
| `$*` | All arguments (as single string when quoted) |
| `$@` | All arguments (preserves separation when quoted) |
| `$$` | Process ID of current shell |
| `$?` | Exit status of last command |

### Best Practices
1. Always quote variables to handle spaces: `"$var"`
2. Use `"$@"` instead of `$*` for argument processing
3. Enable debugging during development: `set -vx`
4. Use meaningful variable names in production scripts
5. Comment your code for future reference

---

## Notes
- These examples use `bash` or `sh` shell
- Syntax may vary slightly between different shell interpreters
- Test scripts in a safe environment before production use
