OverTheWire – Bandit (Levels 0 → 34)

This repository contains structured notes and progression tracking for the Bandit wargame from OverTheWire.
Bandit teaches foundational Linux, SSH, file operations, permissions, and CTF-style problem-solving.

📌 About Bandit

Bandit is designed for beginners to learn:

Linux command-line fundamentals

Navigating the filesystem

File inspection techniques

Encoding/decoding

Searching, sorting, filtering

Permissions, ownership

Archives & compression

SSH key authentication

Basic security concepts

Each level gives a clue → you must retrieve the password for the next level.

🌐 Connection Details

Host: bandit.labs.overthewire.org

Port: 2220

Login format:

ssh bandit<level>@bandit.labs.overthewire.org -p 2220

📘 Levels (Structured Notes – No Answers)

Use these sections to document your own findings.

🔹 Level 0 → 1

Goal: Connect to the server and read a simple file.
Commands explored: ssh, ls, cat
Notes:

🔹 Level 1 → 2

Goal: Read a file with a special character name.
Commands: path handling (./filename)
Notes:

🔹 Level 2 → 3

Goal: Read a file containing spaces in its name.
Commands: quoting, escaping
Notes:

🔹 Level 3 → 4

Goal: Identify and read a hidden file.
Commands: ls -la
Notes:

🔹 Level 4 → 5

Goal: Determine which file is human-readable.
Commands: file
Notes:

🔹 Level 5 → 6

Goal: Search by size & permissions.
Commands: find
Notes:

🔹 Level 6 → 7

Goal: Search system-wide for a file owned by specific user & group.
Commands: find / with filters
Notes:

🔹 Level 7 → 8

Goal: Search for a keyword inside a text file.
Commands: grep
Notes:

🔹 Level 8 → 9

Goal: Identify the unique line in a dataset.
Commands: sort, uniq
Notes:

🔹 Level 9 → 10

Goal: Extract printable strings from a binary.
Commands: strings
Notes:

🔹 Level 10 → 11

Goal: Decode Base64.
Commands: base64
Notes:

🔹 Level 11 → 12

Goal: Reverse ROT13 encoded text.
Commands: tr
Notes:

🔹 Level 12 → 13

Goal: Extract multiple nested compressed formats.
Commands: xxd, gzip, bzip2, tar
Notes:

🔹 Level 13 → 14

Goal: Use a private SSH key to authenticate.
Commands: ssh -i
Notes:

🔹 Level 14 → 15

Goal: Interact with a port using a password.
Commands: nc
Notes:

🔹 Level 15 → 16

Goal: Connect to SSL port and read output.
Commands: openssl s_client
Notes:

🔹 Level 16 → 17

Goal: Port scanning to find correct service.
Commands: nmap, nc
Notes:

🔹 Level 17 → 18

Goal: Compare two files to find differences.
Commands: diff
Notes:

🔹 Level 18 → 19

Goal: Use a modified .bashrc environment.
Commands: understanding login shells
Notes:

🔹 Level 19 → 20

Goal: Learn about SUID files.
Commands: ls -l, SUID execution
Notes:

🔹 Level 20 → 21

Goal: Communicate between processes using netcat.
Commands: nc, echo
Notes:

🔹 Level 21 → 22

Goal: Inspect cron jobs for clues.
Commands: cron, cat
Notes:

🔹 Level 22 → 23

Goal: Find which cron script contains the password.
Commands: reading scheduled tasks
Notes:

🔹 Level 23 → 24

Goal: Analyze a script executed periodically.
Commands: understanding cron logic
Notes:

🔹 Level 24 → 25

Goal: Exploit a script that runs automatically.
Commands: writing/placing files
Notes:

🔹 Level 25 → 26

Goal: Use ssh with a custom shell.
Commands: SSH escape techniques
Notes:

🔹 Level 26 → 27

Goal: Exploit SUID binaries.
Commands: debugging and execution
Notes:

🔹 Level 27 → 28

Goal: Work with Git repositories.
Commands: git log, git show
Notes:

🔹 Level 28 → 29

Goal: Discover hidden Git objects.
Commands: git fsck, git cat-file
Notes:

🔹 Level 29 → 30

Goal: Inspect Git tags.
Commands: git tag, git show
Notes:

🔹 Level 30 → 31

Goal: Analyze Git branches.
Commands: git branch, git checkout
Notes:

🔹 Level 31 → 32

Goal: Work with poorly formatted Git commits.
Commands: commit inspection
Notes:

🔹 Level 32 → 33

Goal: Use basic shell manipulation to escape restricted shell.
Commands: $0, shell tricks
Notes:

🔹 Level 33 → 34

Goal: Final level — execute a command and retrieve the final message.
Commands: general shell usage
