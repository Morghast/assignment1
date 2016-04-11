#Rob Davis's awesome simple shell

Milestone 3:

Features:
	- Creates a char buffer called "string", sets length to buffer to 199 and gets standard input. 
	- Prints to standard output. 
	- Compares user input stored in "string" to "exit", if true successfully exits the shell 
	- Otherwise, returns exit failure

Differences between system() and execvp()
	- system() creates a thread, and then when the user enters an arbitrary command, it is stored 
	  in string and system() exits the thread 
	- execvp() creates an array of pointers to null-terminated strings. This represents the arguments
	  available. The first argument normally points to the associated filename. The array of pointers 
	  has to terminated by a NULL pointer. 
	- 