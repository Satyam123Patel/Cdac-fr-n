# Operating System Practice Problems

---

## Question 1: Log File Processing with grep and sed

### Part a) Create Log File
Create a file named `server.log` with the following log entries:
```
[INFO] Server started at 10:00 AM
[ERROR] Database connection failed
[WARNING] High memory usage detected
[ERROR] Unauthorized access attempt detected
[INFO] Backup completed successfully
```

### Part b) Extract ERROR Messages
Use grep to extract only the ERROR messages from `server.log`.

### Part c) Display Line Numbers
Modify the command to display line numbers along with the error messages.

### Part d) Count ERROR Messages
Count and display the total number of ERROR messages in the file.

### Part e) Replace with sed
Use sed to replace all occurrences of ERROR with CRITICAL.

**Note:** Provide the exact Linux commands for each step.

---

## Question 2: Shell Scripting with Loops

### Part a) Reverse String
Write a shell script that takes a string as input from the user. Use a while loop to print the string in reverse order.

### Part b) Number Pattern
Write a shell script that prints the following pattern based on a user-given number of rows (n):

**Example Output (n = 4):**
```
1 1
12 21
123 321
12344321
```

**Hint:** Use loops to print increasing numbers, spaces, and decreasing numbers.

---

## Question 3: File and Directory Management

### Part a) Create Directory Structure
Create a directory named `projects` and inside it, create two subdirectories: `source` and `archive`.

### Part b) Create Files
Inside `source`, create three files: `app.py`, `config.yaml`, and `README.md`.

### Part c) Copy Specific Files
Copy only the `.py` and `.yaml` files to `archive` without moving `README.md`.

### Part d) Change Permissions
Change the permissions of all `.yaml` files in `archive` so that:
1. The owner has read, write, and execute permissions
2. The group has read and write permissions
3. Others have no permissions

### Part e) Display File Listing
Display the detailed file listing of the `archive` directory, showing file permissions.

**Note:** Provide the exact Linux commands for each step.

---

## Question 4: Directory Management Script

### Part a) Create Shell Script
Create a shell script that:
1. Accepts a directory name as a command-line argument
2. If the directory exists, list all files inside it
3. If it doesn't exist, create the directory and print a success message

### Part b) Additional Tasks
Inside this directory... *(Note: Part b appears to be incomplete in the source document)*

---

