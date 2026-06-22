# Shell Scripting Examples

## 1. Hello World

Problem: Write a shell script to print "Hello, World!"
Solution (hello.sh):

```bash
#!/bin/bash
echo "Hello, World!"
```

## 2. Display Current Date and Time

Problem: Write a shell script to display the current date and time.
Solution:

```bash
#!/bin/bash
echo "Current Date and Time: $(date)"
```

## 3. Take User Input

Problem: Write a shell script to ask for the user's name and greet them.
Solution:

```bash
#!/bin/bash
echo "Enter your name:"
read name
echo "Welcome, $name!"
```

## 4. Check if a File Exists

Problem: Write a shell script to check if a file exists.
Solution:

```bash
#!/bin/bash
echo "Enter file name:"
read fname
if [ -f "$fname" ]; then
    echo "File $fname exists."
else
    echo "File $fname does not exist."
fi
```

## 5. Odd or Even Number

Problem: Write a script to check if a number is odd or even.
Solution:

```bash
#!/bin/bash
echo "Enter a number:"
read num
if [ $((num % 2)) -eq 0 ]; then
    echo "$num is Even"
else
    echo "$num is Odd"
fi
```

## 6. Simple Calculator

Problem: Write a script to perform addition, subtraction, multiplication, and division.
Solution:

```bash
#!/bin/bash
echo "Enter first number:"
read a
echo "Enter second number:"
read b
echo "Addition: $((a+b))"
echo "Subtraction: $((a-b))"
echo "Multiplication: $((a*b))"
echo "Division: $((a/b))"
```

## 7. Factorial Using Loop

Problem: Write a script to calculate the factorial of a number.
Solution:

```bash
#!/bin/bash
echo "Enter a number:"
read n
fact=1
for (( i=1; i<=n; i++ ))
do
    fact=$((fact*i))
done
echo "Factorial of $n is $fact"
```

## 8. Print 1 to N

Problem: Write a script to print numbers from 1 to N.
Solution:

```bash
#!/bin/bash
echo "Enter N:"
read n
for (( i=1; i<=n; i++ ))
do
    echo $i
done
```

## 9. Backup a File

Problem: Write a script to take a backup of a file by copying it with .bak extension.
Solution:

```bash
#!/bin/bash
echo "Enter file name to backup:"
read fname
if [ -f "$fname" ]; then
    cp "$fname" "$fname.bak"
    echo "Backup created: $fname.bak"
else
    echo "File not found!"
fi
```

## 10. Menu Driven Program

Problem: Write a script that shows a menu and performs tasks.
Solution:

```bash
#!/bin/bash
echo "Choose an option:"
echo "1. Show date"
echo "2. Show current directory"
echo "3. List files"
read choice
case $choice in
    1) date;;
    2) pwd;;
    3) ls;;
    *) echo "Invalid choice";;
esac
```

## 11. Display Current User

Problem: Write a shell script to display the currently logged in user.
Solution:

```bash
#!/bin/bash
echo "You are logged in as: $USER"
```

## 12. Check Number is Positive, Negative, or Zero

Problem: Write a shell script that takes a number and prints whether it is positive, negative, or zero.
Solution:

```bash
#!/bin/bash
echo "Enter a number:"
read num
if [ $num -gt 0 ]; then
    echo "$num is Positive"
elif [ $num -lt 0 ]; then
    echo "$num is Negative"
else
    echo "$num is Zero"
fi
```

## 13. Largest of Three Numbers

Problem: Write a shell script to find the largest of three numbers.
Solution:

```bash
#!/bin/bash
echo "Enter three numbers:"
read a b c
if [ $a -ge $b ] && [ $a -ge $c ]; then
    echo "$a is largest"
elif [ $b -ge $a ] && [ $b -ge $c ]; then
    echo "$b is largest"
else
    echo "$c is largest"
fi
```

## 14. Count Files in Directory

Problem: Write a shell script to count the number of files in the current directory.
Solution:

```bash
#!/bin/bash
count=$(ls -1 | wc -l)
echo "Number of files in current directory: $count"
```

## 15. Reverse a Number

Problem: Write a shell script to reverse a number.
Solution:

```bash
#!/bin/bash
echo "Enter a number:"
read num
rev=0
while [ $num -gt 0 ]
do
    digit=$((num % 10))
    rev=$((rev * 10 + digit))
    num=$((num / 10))
done
echo "Reversed number is: $rev"
```

## 16. Print Multiplication Table

Problem: Write a shell script to print the multiplication table of a given number.
Solution:

```bash
#!/bin/bash
echo "Enter a number:"
read n
for i in {1..10}
do
    echo "$n x $i = $((n*i))"
done
```

## 17. Sum of Digits

Problem: Write a shell script to calculate the sum of digits of a given number.
Solution:

```bash
#!/bin/bash
echo "Enter a number:"
read num
sum=0
while [ $num -gt 0 ]
do
    digit=$((num % 10))
    sum=$((sum + digit))
    num=$((num / 10))
done
echo "Sum of digits: $sum"
```

## 18. Check if Directory Exists

Problem: Write a shell script to check whether a given path is a directory.
Solution:

```bash
#!/bin/bash
echo "Enter directory name:"
read dname
if [ -d "$dname" ]; then
    echo "$dname is a directory."
else
    echo "$dname is not a directory."
fi
```

## 19. Check File Permissions

Problem: Write a script to check if a file has read, write, and execute permissions.
Solution:

```bash
#!/bin/bash
echo "Enter file name:"
read fname
if [ -r "$fname" ]; then
    echo "File has read permission."
else
    echo "No read permission."
fi
if [ -w "$fname" ]; then
    echo "File has write permission."
else
    echo "No write permission."
fi
if [ -x "$fname" ]; then
    echo "File has execute permission."
else
    echo "No execute permission."
fi
```

## 20. Rename a File

Problem: Write a shell script to rename a given file.
Solution:

```bash
#!/bin/bash
echo "Enter current file name:"
read old
echo "Enter new file name:"
read new
if [ -f "$old" ]; then
    mv "$old" "$new"
    echo "File renamed to $new"
else
    echo "File not found!"
fi
```

## 21. Backup All Files in a Directory

Problem: Write a script to backup all files in the current directory to a folder called backup.
Solution:

```bash
#!/bin/bash
mkdir -p backup
cp * backup/
echo "All files copied to backup folder."
```

## 22. List Files in Directory

Problem: Write a script to list files in a specific directory.
Solution:

```bash
#!/bin/bash
echo "Enter directory:"
read dname
ls -l "$dname"
```

## 23. Show File Size

Problem: Write a script to display the size of a file in bytes.
Solution:

```bash
#!/bin/bash
echo "Enter filename:"
read fname
stat -c%s "$fname"
```

## 24. Check File Permissions (Short Version)

Problem: Write a concise script to check file permissions.
Solution:

```bash
#!/bin/bash
echo "Enter file name:"
read fname
[ -r "$fname" ] && echo "Readable"
[ -w "$fname" ] && echo "Writable"
[ -x "$fname" ] && echo "Executable"
```

## 25. Addition of Two Numbers using Command Line Arguments

Problem: Write a shell script to add two numbers provided as command-line arguments.
Solution (add.sh):

```bash
#!/bin/bash
# $1 first argument, $2 second argument
if [ $# -ne 2 ]; then
    echo "Usage: $0 num1 num2"
    exit 1
fi
sum=$(($1+$2))
echo "Sum = $sum"
```

Run:
```
bash add.sh 10 20
Sum = 30
```

## 26. Check if a File Exists (argument as filename)

Problem: Write a shell script to check if the given file (from command line) exists.
Solution (check_file.sh):

```bash
#!/bin/bash
if [ $# -ne 1 ]; then
    echo "Usage: $0 filename"
    exit 1
fi
if [ -f "$1" ]; then
    echo "File '$1' exists."
else
    echo "File '$1' does not exist."
fi
```

## 27. Create files, directory, copy then delete

Problem: Create files and directories, copy them, then delete originals.
Solution:

```bash
#!/bin/bash
touch file1 file2
mkdir dir
cp file1 file2 dir/
rm file1 file2
```

## 28. Show date, time, username, and current directory

Problem: Display system information including date, time, username, and current directory.
Solution:

```bash
#!/bin/bash
echo "Date: $(date)"
echo "User: $(whoami)"
echo "Current Directory: $(pwd)"
```

## 29. Add two numbers (command-line args)

Problem: Add two numbers passed as command line arguments.
Solution:

```bash
#!/bin/bash
if [ $# -ne 2 ]; then
    echo "Usage: $0 num1 num2"
    exit 1
fi
echo "Sum = $(($1+$2))"
```

## 30. Print 5 4 3 2 1 using while loop

Problem: Print numbers from 5 to 1 in descending order using a while loop.
Solution:

```bash
#!/bin/bash
n=5
while [ $n -gt 0 ]; do
    echo $n
    n=$((n-1))
done
```

## 31. Print 1 to N using until loop

Problem: Print numbers from 1 to N using until loop with command line argument.
Solution:

```bash
#!/bin/bash
if [ $# -ne 1 ]; then
    echo "Usage: $0 num"
    exit 1
fi
i=1
until [ $i -gt $1 ]; do
    echo $i
    i=$((i+1))
done
```

## 32. Basic math using case

Problem: Perform basic arithmetic operations using case statement and command line arguments.
Solution:

```bash
#!/bin/bash
if [ $# -ne 3 ]; then
    echo "Usage: $0 num1 operator num2"
    exit 1
fi
case $2 in
    +) echo "Result = $(($1+$3))" ;;  
    -) echo "Result = $(($1-$3))" ;;  
    x) echo "Result = $(($1*$3))" ;;  
    /) echo "Result = $(($1/$3))" ;;  
    *) echo "Invalid operator";;
esac
```

## 33. Find biggest of 3 numbers

Problem: Find the largest of three numbers passed as command line arguments.
Solution:

```bash
#!/bin/bash
if [ $# -ne 3 ]; then
    echo "Usage: $0 num1 num2 num3"
    exit 1
fi
if [ $1 -ge $2 ] && [ $1 -ge $3 ]; then
    echo "$1 is largest"
elif [ $2 -ge $1 ] && [ $2 -ge $3 ]; then
    echo "$2 is largest"
else
    echo "$3 is largest"
fi
```

## 34. Check file permissions

Problem: Create a file and check its permissions.
Solution:

```bash
#!/bin/bash
touch file.txt
if [ -r file.txt ]; then echo "Readable"; fi
if [ -w file.txt ]; then echo "Writable"; fi
if [ -x file.txt ]; then echo "Executable"; fi
```

## 35. Simple Star Pattern (Fragment)

Problem: Print a simple star pattern.
Solution:

```bash
#!/bin/bash
rows=4
for (( i=1; i<=rows; i++ )); do
    # Inner loop for columns
    for (( j=1; j<=i; j++ )); do
        echo -n "*"  # Print * without newline
    done
    echo  # Newline after each row
done
```

## 36. Simple Star Pattern (Complete)

Problem: Print a simple incremental star pattern.

Pattern:
```
*
**
***
****
```

Solution:

```bash
#!/bin/bash
rows=4
# Outer loop for rows
for (( i=1; i<=rows; i++ )); do
    # Inner loop for columns
    for (( j=1; j<=i; j++ )); do
        echo -n "*"  # Print without newline
    done
    echo  # Newline after each row
done
```

## 37. Leap year check

Problem: Check if a given year is a leap year.
Solution:

```bash
#!/bin/bash
echo "Enter year: "
read y
if [ $((y % 400)) -eq 0 ] || ( [ $((y % 4)) -eq 0 ] && [ $((y % 100)) -ne 0 ] ); then
    echo "$y is a Leap Year"
else
    echo "$y is NOT a Leap Year"
fi
```

---

## File Management Exercise

1. **Create a directory named projects and inside it, create two subdirectories: source and archive.**
    
    ```bash
    mkdir -p projects/source projects/archive
    ```

2. **Inside source, create three files: app.py, config.yaml, and README.md.**
    
    ```bash
    touch projects/source/app.py projects/source/config.yaml projects/source/README.md
    ```

3. **Copy only the .py and .yaml files to archive without moving README.md.**
    
    ```bash
    cp projects/source/*.py projects/source/*.yaml projects/archive/
    ```

4. **Change the permissions of all .yaml files in archive so that:**
    * Owner: read, write, execute
    * Group: read, write
    * Others: no permissions

    That corresponds to rwxrw---- numeric mode 760.

    ```bash
    chmod 760 projects/archive/*.yaml
    ```

5. **Display the detailed file listing of the archive directory, showing file permissions.**
    
    ```bash
    ls -l projects/archive
    ```

---

## 38. Student Record Manager (Menu-driven)

Problem: Create a menu-driven program to manage student records.
Solution:

```bash
#!/bin/bash
file=students.txt
while true; do
    echo "1.Add 2.View 3.Search 4.Delete 5.Exit"
    read -p "Enter choice: " ch
    case $ch in
        1) read -p "Roll Name Marks: " r n m; echo "$r,$n,$m" >> $file;;
        2) cat $file;;
        3) read -p "Enter roll to search: " r; grep "^$r," $file;;
        4) read -p "Enter roll to delete: " r; grep -v "^$r," $file > temp && mv temp $file;;
        5) exit;;
    esac
done
```

## 39. Display current date and time

Problem: Display current date and time.
Solution:

```bash
#!/bin/bash
echo "Current date and time: $(date)"
```

## 40. Display username and hostname

Problem: Display the username and hostname of the system.
Solution:

```bash
#!/bin/bash
echo "Username: $USER"
echo "Hostname: $(hostname)"
```

## 41. List all files in a directory

Problem: List all files in the current directory with details.
Solution:

```bash
#!/bin/bash
echo "Files in current directory:"
ls -l
```

## 42. Check if a file exists (using read -p)

Problem: Check if a file exists (user interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter file name: " file
if [ -f "$file" ]; then
    echo "$file exists."
else
    echo "$file does not exist."
fi
```

## 43. Check if a directory exists (using read -p)

Problem: Check if a directory exists (user interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter directory name: " dir
if [ -d "$dir" ]; then
    echo "$dir exists."
else
    echo "$dir does not exist."
fi
```

## 44. Count number of lines, words, and characters in a file

Problem: Count lines, words, and characters in a given file.
Solution:

```bash
#!/bin/bash
read -p "Enter file name: " file
if [ -f "$file" ]; then
    echo "Lines: $(wc -l < $file)"
    echo "Words: $(wc -w < $file)"
    echo "Characters: $(wc -c < $file)"
else
    echo "File not found."
fi
```

## 45. Copy files from one directory to another

Problem: Copy a file from source to destination directory.
Solution:

```bash
#!/bin/bash
read -p "Source file: " src
read -p "Destination directory: " dest
if [ -f "$src" ] && [ -d "$dest" ]; then
    cp "$src" "$dest"
    echo "File copied."
else
    echo "Invalid file or directory."
fi
```

## 46. Backup a directory

Problem: Create a compressed backup of a directory.
Solution:

```bash
#!/bin/bash
read -p "Enter directory to backup: " dir
backup="backup_$(date +%F).tar.gz"
tar -czf $backup $dir
echo "Backup created: $backup"
```

## 47. Display system memory usage

Problem: Display system memory usage.
Solution:

```bash
#!/bin/bash
echo "Memory Usage:"
free -h
```

## 48. Display disk usage

Problem: Display disk usage information.
Solution:

```bash
#!/bin/bash
echo "Disk Usage:"
df -h
```

## 49. Check if a number is even or odd (using read -p)

Problem: Check if a number is even or odd (interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter a number: " num
if [ $((num % 2)) -eq 0 ]; then
    echo "$num is even."
else
    echo "$num is odd."
fi
```

## 50. Display multiplication table of a number (using read -p)

Problem: Display multiplication table (interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter a number: " num
for i in {1..10}; do
    echo "$num x $i = $((num*i))"
done
```

## 51. Display factorial of a number (using read -p)

Problem: Calculate factorial (interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter a number: " n
fact=1
for (( i=1; i<=n; i++ )); do
    fact=$((fact*i))
done
echo "Factorial of $n is $fact"
```

## 52. Check if a number is prime

Problem: Check whether a number is prime or not.
Solution:

```bash
#!/bin/bash
read -p "Enter a number: " n
prime=1
for (( i=2; i<=n/2; i++ )); do
    if [ $((n%i)) -eq 0 ]; then
        prime=0
        break
    fi
done
if [ $prime -eq 1 ] && [ $n -ne 1 ]; then
    echo "$n is prime."
else
    echo "$n is not prime."
fi
```

## 53. Find largest of three numbers (using read -p)

Problem: Find the largest of three numbers (interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter 3 numbers: " a b c
if [ $a -gt $b ] && [ $a -gt $c ]; then
    echo "$a is largest"
elif [ $b -gt $c ]; then
    echo "$b is largest"
else
    echo "$c is largest"
fi
```

## 54. Reverse a number (using read -p)

Problem: Reverse a given number (interactive version).
Solution:

```bash
#!/bin/bash
read -p "Enter a number: " n
rev=0
while [ $n -gt 0 ]; do
    rev=$((rev*10 + n%10))
    n=$((n/10))
done
echo "Reversed number: $rev"
```

## 55. Display all users currently logged in

Problem: Show all users who are currently logged into the system.
Solution:

```bash
#!/bin/bash
echo "Logged in users:"
who
```

## 56. Search for a string in a file

Problem: Search for a specific string in a file and display line numbers.
Solution:

```bash
#!/bin/bash
read -p "Enter file name: " file
read -p "Enter string to search: " str
grep -n "$str" "$file"
```

## 57. Rename multiple files by adding prefix

Problem: Rename all .txt files by adding a "new_" prefix.
Solution:

```bash
#!/bin/bash
for file in *.txt; do
    mv "$file" "new_$file"
done
echo "Files renamed."
```

## 58. Monitor CPU usage

Problem: Monitor CPU usage continuously.
Solution:

```bash
#!/bin/bash
echo "CPU usage every 2 seconds (press Ctrl+C to stop):"
top -d 2
```

---