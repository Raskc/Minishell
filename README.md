# Minishell 👨‍💻

The goal of this project was to remake __TCSH__.\
 __TCSH__ like __BASH__ is a shell unix based on the C shell (csh).
However minishell doesn't have the control of the arrow keys or the tabs.\

## Installation

Just __clone__ the repo then use __Make__ to compile the game and finally launch the binary with _./mysh_.

```bash
./mysh
```

## How does it work ?

__Minshell__ like __TCSH__ is a binary that has the power to call other binary like __ls, clear, ps__...
To be able to use them there is a lot of differents way, in the case of the minishell i am using the __PATH__
in the environement where all the path of all the bin on my computer are stored. With this we can easily find all binary that we need. Then with __execve__ we can launch them. However some commands doesn't have a bin so we need to make them that's what we call built-in function __(CD, Exit ...)__.

## Credits
* Edgar Dion 🐈
