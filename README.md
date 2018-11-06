# Tutorial-for-language-C
<h3>Pointers</h3>
The content of the location of a pointer variable is an address of another location in memory.<br>

```c
Type *x;
```
This means the content of x must be a pointer(the address) to another location of type Type.<br>
To access the content of location which x points we write:
```c
*x
```
[1pointer.c](https://github.com/Mira-Qiu/Tutorial-for-language-C/blob/master/2Pointer.c)<br>
The program allocates two locations for <h>x</h> and a;<br>
In location a, we assign an integer(-7) and in x the address of a variable of type int.<br>
We assign the address of a to location: x;<br>
Location x points to (refer to, had the address of) variable a;<br>
<br>
[2Swap.c](https://github.com/Mira-Qiu/Tutorial-for-language-C/blob/master/2Swap.c)<br>
swap the address of x and y<br>
<br>
[3Arrays.c](https://github.com/Mira-Qiu/Tutorial-for-language-C/blob/master/3Arrays.c)<br>
Arrays in C are pointers. When we declare a variable of type array like:
```c
int x[5];
```
The compiler allocates consecutive locations and put the address of the first element of the array into the variable.<br>
