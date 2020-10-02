/*Gerardo Arturo Valderrama Quiroz*/
/*A01374994*/
/*Programacion Avanzada*/
/*Assignment 1*/
/*18/08/2020*/


#include <stdio.h>

/* Ejercicio 1*/

int main(void) {
  printf("What is the difference between a \' and a \"?  Or between a \" and a \\\"?\n");
  printf("One is what we see when we're typing our program. The other is what appears on the \"console.\"");
  return 0;
}

/*Ejercicio 2*/

int main(void) {
  printf("/ \\ // \\\\ /// \\\\\\");
  return 0;
}

/* Ejercicio 3*/

int main(void) {
  printf("//////////////////////\n");
  printf("|| Victory is mine! ||\n");
  printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
  return 0;
}

/*Ejercicio 4*/

int main(void) {
  printf("   \\/ \n");
  printf("  \\\\// \n");
  printf(" \\\\\\///\n");
  printf(" ///\\\\\\\n");
  printf("  //\\\\ \n");
  printf("   /\\ \n");
  return 0;
}

/*Ejercicio 5*/

void printRepeat(){
  for (int i = 0; i < 5; i++) {
    printf("|| Victory is mine! ||\n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
  }

}

int main(void) {
  printf("//////////////////////\n");
  printRepeat();
  return 0;
}

/*Ejercicio 6*/

int main(void) {
  printf("A \"quoted\" String is\n");
  printf("\'much\' better if you learn\n");
  printf("the rules of \"escape sequences.\"\n");
  printf("Also, \"\" represents an empty String.\n");
  printf("Don't forget: use \\\" instead of \" !\n");
  printf("\'\' is not the same as \"\n");
  return 0;
}

/*Ejercicio 7*/

int main(void) {
  printf("  _______\n");
  printf(" /       \\\n");
  printf("/         \\\n");
  printf("-\"-\'-\"-\'-\"-\n");
  printf("\\         /\n");
  printf(" \\_______/\n");
  return 0;
}

/*Ejercicio 8*/

int main(void) {
  printf("#include \"stdio.h\"\n");
  printf("int main(void) {\n");
  printf("printf(\"Hello World\\n\");\n");
  printf("return 0;\n");
  printf("}\n");
  return 0;

}

/*Ejercicio 9*/

void printRepeat(){
  for (int i = 0; i < 2; i++) {
    printf("There's one thing every coder must understand:\n");
    printf("The printf command.\n");
  }

}

int main(void) {
  printRepeat();
  return 0;
}