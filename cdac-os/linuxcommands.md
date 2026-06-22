# Linux Commands Cheat Sheet

A comprehensive reference guide for Linux commands compiled from multiple sources.

---

## 📁 Navigation & File Operations

### Basic Navigation
| Command | Description |
|---------|-------------|
| `pwd` | Show current directory path |
| `ls` | List files and folders |
| `ls -l` | Formatted listing with details |
| `ls -al` | Formatted listing with hidden files |
| `ls -lt` | Listing sorted by time modification |
| `ls -R` | Show files in folders and subfolders |
| `cd <dir>` | Change directory to `<dir>` |
| `cd ..` | Go up one directory level |
| `cd` | Change to home directory |
| `open .` | Open current folder in GUI (macOS/some Linux) |
| `open <file>` | Open file in default application |

### File Management
| Command | Description |
|---------|-------------|
| `touch <file>` | Create empty file or update timestamp |
| `cat <file>` | Display content of file |
| `more <file>` | Output file contents page by page |
| `less <file>` | View file page-by-page (more features) |
| `head <file>` | Show first 10 lines of file |
| `tail <file>` | Show last 10 lines of file |
| `tail -f <file>` | Follow file as it grows (real-time) |
| `cp <src> <dest>` | Copy file or directory |
| `cp -r <dir1> <dir2>` | Copy directory recursively |
| `mv <src> <dest>` | Move or rename file/directory |
| `rm <file>` | Delete file |
| `rm -r <dir>` | Delete directory and contents |
| `rm -f <file>` | Force remove file |
| `rm -rf <dir>` | Force remove directory and contents |

### Directory Management
| Command | Description |
|---------|-------------|
| `mkdir <dir>` | Create a new directory |
| `rmdir <dir>` | Remove an empty directory |

---

## 🔍 Searching & Text Processing

### Search Commands
| Command | Description |
|---------|-------------|
| `grep 'text' <file>` | Search for text in files |
| `grep -w "string" <file>` | Search for exact word match |
| `grep -n "string" <file>` | Print line numbers with matches |
| `grep -winl "string" .` | Search all files in current directory |
| `grep -r pattern <dir>` | Search recursively in directory |
| `find <path> -name '<pattern>'` | Find files by name |
| `find . -type d` | Find directories in current directory |
| `find . -type f -name "*.txt"` | Find all txt files |
| `find . -size +1k` | Find files larger than 1KB |
| `sudo find . -perm 777` | Find files with 777 permissions |
| `locate <file>` | Quickly find files using database |
| `locate javac` | Find anything related to javac |
| `which <command>` | Show path where command is located |

### Text Processing
| Command | Description |
|---------|-------------|
| `wc <file>` | Count lines, words, bytes |
| `wc -l <file>` | Count lines |
| `sort <file>` | Sort lines in a file |
| `uniq <file>` | Remove duplicate adjacent lines |
| `diff <file1> <file2>` | Compare differences in files |

---

## 🔐 Permissions & Ownership

### Permission Commands
| Command | Description |
|---------|-------------|
| `chmod <mode> <file>` | Change file permissions |
| `chmod u=rwx,g=rw,o=r <file>` | Set specific permissions |
| `chmod 777 <file>` | Give read, write, execute to all |
| `chmod 755 <file>` | rwxr-xr-x permissions |
| `chmod 644 <file>` | rw-r--r-- permissions |
| `chmod 700 <file>` | rwx------ permissions |
| `chmod u+x <file>` | Add execute permission for user |
| `chmod g-wx <file>` | Remove write/execute for group |
| `ls -l <file>` | Show file permissions |

### Permission Notation
| Value | Binary | Permissions |
|-------|--------|-------------|
| 7 | 111 | rwx (read, write, execute) |
| 6 | 110 | rw- (read, write) |
| 5 | 101 | r-x (read, execute) |
| 4 | 100 | r-- (read only) |
| 3 | 011 | -wx (write, execute) |
| 2 | 010 | -w- (write only) |
| 1 | 001 | --x (execute only) |
| 0 | 000 | --- (no permissions) |

### Ownership Commands
| Command | Description |
|---------|-------------|
| `chown <user>:<group> <file>` | Change owner and group |
| `sudo chown root <file>` | Change owner to root |
| `chgrp <group> <file>` | Change group of file/directory |
| `sudo <command>` | Run command as administrator |

---

## 📦 Compression & Archives

### TAR Archives
| Command | Description |
|---------|-------------|
| `tar -cvf archive.tar <files>` | Create tar archive |
| `tar -xvf archive.tar` | Extract tar archive |
| `tar -czf file.tar.gz <files>` | Create tar with Gzip compression |
| `tar -xzf file.tar.gz` | Extract tar with Gzip |
| `tar -cjf file.tar.bz2 <files>` | Create tar with Bzip2 compression |
| `tar -xjf file.tar.bz2` | Extract tar with Bzip2 |

### Compression
| Command | Description |
|---------|-------------|
| `gzip <file>` | Compress file (creates .gz) |
| `gunzip <file.gz>` | Decompress gzip file |
| `gzip -d <file.gz>` | Decompress file.gz back to file |
| `zip <archive.zip> <files>` | Create zip archive |
| `unzip <archive.zip>` | Extract zip files |

---

## ⚙️ Process Management

### Process Commands
| Command | Description |
|---------|-------------|
| `ps` | Display currently working processes |
| `ps aux` | Show all running processes |
| `top` | Interactive view of processes and resources |
| `htop` | Improved interactive process viewer |
| `kill <pid>` | Kill process by PID |
| `killall <name>` | Kill all processes by name |
| `pkill <pattern>` | Kill all processes matching pattern |
| `nice <command>` | Set process priority |
| `renice <prioritwc -l "set1-5.sh"
y> <pid>` | Change process priority |
| `bg` | Resume stopped job in background |
| `fg` | Bring most recent job to foreground |
| `jobs` | List stopped or background jobs |

---

## 🌐 Networking

### Network Commands
| Command | Description |
|---------|-------------|
| `ip addr` | Show network interfaces and IP addresses |
| `ifconfig` | Show network interface information |
| `ping <host>` | Check if host is reachable |
| `curl <url>` | Fetch URL or make web requests |
| `wget <url>` | Download files from the web |
| `scp <src> <dest>` | Copy files securely between machines |
| `whois <domain>` | Get information about domain |
| `nslookup <domain>` | Show network details of domain |
| `ip link` | Show details about network interfaces |

---

## 💾 Disk & Storage

### Disk Management
| Command | Description |
|---------|-------------|
| `df -h` | Show disk space usage (human-readable) |
| `df -m` | Display free disk space in MB |
| `du -h <dir>` | Show directory size |
| `du -h *` | Show file usage |
| `du -g` | Display disk usage statistics in GB |
| `mount <device> <path>` | Attach a filesystem |
| `umount <path>` | Detach a filesystem |

---

## 👥 Users & Groups

### User Management
| Command | Description |
|---------|-------------|
| `whoami` | Show current user |
| `who` | Show logged-in users with details |
| `w` | Show who is logged in and what they're doing |
| `adduser <username>` | Create a new user (Debian/Ubuntu) |
| `useradd <username>` | Create a new user (generic) |
| `userdel <username>` | Delete a user |
| `passwd <username>` | Change user password |

---

## 📦 Package Management

### Debian/Ubuntu (APT)
| Command | Description |
|---------|-------------|
| `apt update` | Update package lists |
| `apt install <package>` | Install package |
| `apt remove <package>` | Remove package |
| `apt upgrade` | Upgrade all packages |

### RHEL/CentOS/Fedora
| Command | Description |
|---------|-------------|
| `yum install <package>` | Install package (older systems) |
| `dnf install <package>` | Install package (newer systems) |

### Arch Linux
| Command | Description |
|---------|-------------|
| `pacman -S <package>` | Install package |

---

## 📊 System Information

### System Commands
| Command | Description |
|---------|-------------|
| `uname` | Show system information |
| `uname -r` | Show kernel version |
| `uname -o` | Show operating system name |
| `uname -m` | Show machine hardware name |
| `hostnamectl` | Complete system details |
| `lscpu` | Show CPU details |
| `free` | Display memory information |
| `date` | Show current date and time |
| `cal` | Show calendar for month |
| `uptime` | Show system uptime |
| `lastb` | Show last bad logins |

---

## 🔄 System Control

### Shutdown & Reboot
| Command | Description |
|---------|-------------|
| `shutdown -h now` | Shutdown immediately |
| `shutdown -h +15` | Shutdown in 15 minutes |
| `shutdown -r now` | Reboot immediately |
| `poweroff` | Shutdown the system |
| `reboot` | Reboot the system |
| `halt` | Halt the system |
| `init 0` | Shutdown (runlevel 0) |
| `init 6` | Reboot (runlevel 6) |

### Runlevels
| Level | Description |
|-------|-------------|
| 0 | Halt/Shutdown |
| 1 | Single-user mode |
| 2 | Multi-user without NFS |
| 3 | Multi-user with networking |
| 5 | Multi-user with GUI (X11) |
| 6 | Reboot |

---

## ⌨️ Keyboard Shortcuts

| Shortcut | Description |
|----------|-------------|
| `Ctrl+C` | Halt the current command |
| `Ctrl+Z` | Stop current command (resume with fg) |
| `Ctrl+D` | Logout current session (similar to exit) |
| `Ctrl+W` | Erase one word in current line |
| `Ctrl+U` | Erase the whole line |
| `Ctrl+R` | Search command history |
| `!!` | Repeat the last command |

---

## 🔧 Miscellaneous Commands

### Utility Commands
| Command | Description |
|---------|-------------|
| `history` | Show command history |
| `history | grep "ls"` | Show history of ls command |
| `alias` | Show command aliases |
| `man <command>` | Show manual for command |
| `echo <text>` | Display text/variables |
| `printenv` | Show user environment variables |
| `banner <text>` | Display text in large letters |
| `wall <message>` | Send message to all users |
| `mail <user>` | Send mail to user |
| `sh <file>` | Execute commands in file |
| `exit` | Logout from session |

---

## 🔗 Links (Hard & Symbolic)

### Link Commands
| Command | Description |
|----------|-------------|
| `ln <source> <link>` | Create hard link |
| `ln -s <source> <link>` | Create symbolic (soft) link |

### Link Types
- **Hard Link**: Direct reference to physical data; same inode number; can't link directories or across filesystems
- **Symbolic Link**: Pointer to filename; different inode; can link directories and across filesystems; can point to non-existent files

---

## 📝 File Types in Linux

| Symbol | Type |
|--------|------|
| `-` | Regular file |
| `d` | Directory |
| `l` | Symbolic link |
| `s` | Socket |
| `b` | Block device |
| `c` | Character device |
| `p` | Named pipe |

---

## 💡 Quick Tips

1. **Use Tab completion** to auto-complete commands and filenames
2. **Use Up/Down arrows** to navigate command history
3. **Combine commands** with `&&` (execute if previous succeeds) or `;` (execute regardless)
4. **Redirect output** with `>` (overwrite) or `>>` (append)
5. **Pipe commands** with `|` to chain operations
6. **Use wildcards**: `*` (any characters), `?` (single character), `[]` (character range)
7. **Get help**: Use `man <command>`, `<command> --help`, or `info <command>`

---

## 📚 Common Permission Patterns

| Pattern | Numeric | Use Case |
|---------|---------|----------|
| `rwxr-xr-x` | 755 | Executables, directories |
| `rw-r--r--` | 644 | Regular files, documents |
| `rwx------` | 700 | Private directories |
| `rw-------` | 600 | Private files |
| `rwxrwxrwx` | 777 | World-writable (avoid!) |

---

*This cheat sheet combines commands from multiple Linux documentation sources. Always consult `man` pages for detailed usage and options.*
