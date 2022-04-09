# Inside the makefile.
* all - Will make all no run. 
* clean - Cleans all object files up.
* rebuild-no-run - Rebuilds the file but doesn't run main.
* rebuild-run - Rebuilds and then automatically runs main
* no-arg specified - Defaults to making all.
## The menu options explained in main.
* Circle asks for one parameter: radius.
* Rectangle asks for two parameters: side1 and side2.
* Triangle asks for four parameters: sidea, base, sidec, and height.
  * IF one of the side values (sidea, sidec or base) is 0 then the program will compute the value automatically. IF it is not able, then it will return the reason why.
* Trapezoid asks for five parameters: base1, base2, height, side1, side2.*** All are required values.***
* Square asks for one parameter: side1.
* The AddTotalArea() function will do just that. It will add all the areas of all the shapes together.
* The AddTotalParameters() will do just that. It will add all the parameters of all the shapes together.
## Bugs?
If you find anymore bugs.. Feel free to bug me :). Or create a bug report on Github.
Created by Ethan Lin. @WindowsSystemAdmin.
