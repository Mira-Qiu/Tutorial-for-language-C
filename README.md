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
<br>
[4StructLinkedList.c](https://github.com/Mira-Qiu/Tutorial-for-language-C/blob/master/4StructLinkedList.c)<br>
<br>
**newNode = (Rec*)malloc(sizeof(Rec))**: create a second node in memory and makes newNode points to it.<br>
**newNode -> key = i**: inserts the value of i into the location of the key and newNode is pointing to it<br>
<br>

[NoparameterFunc.c](https://github.com/Mira-Qiu/Tutorial-for-language-C/blob/master/NoParameterFunc.c)
<br>
**void func(void (*f)())** informs the compliter that there is a function func that has one parameter f which is a function.<br>
(*f)() is in the body of function func is call of function f. This means deference from pointer f to the body to the body of the function f and excute its body.
<br><br><br>
[Printdiamond.c](https://github.com/Mira-Qiu/Tutorial-for-language-C/blob/master/PrintDiamond.c)<br>
<li> k to control how many * print out</li>
<li> count control how man space print out</li>
