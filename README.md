<pre align="center">
________ _________  ________  ________   
|\   ____\\___   ___\\   ____\|\   __  \  
\ \  \___\|___ \  \_\ \  \___|\ \  \|\  \ 
 \ \  \       \ \  \ \ \  \    \ \   ____\
  \ \  \____   \ \  \ \ \  \____\ \  \___|
   \ \_______\  \ \__\ \ \_______\ \__\   
    \|_______|   \|__|  \|_______|\|__|   
</pre>
# CTCP Library
A simple & lightweight TCP client library for C/C++ programs to run on Unix/Linux systems. Written in C.
<br>

### Usage
1. Inside the C/C++ file include the following:
```C
#include <CTCP.h>
...
```

2. There are 4 functions provided by this library:
   1. `openCTCPSocket()`
  ```C
  // Declaration
  int openCTCPSocket(char *ip, int port, bool enableMessages);
  ```
  Used for opening the TCP POSIX Socket with `ip address & port number` as parameters.<br>
  Also has a third boolean parameter `enableMessages` parameters to enable/disable debugging messages.
