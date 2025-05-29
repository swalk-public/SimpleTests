
// Generate little test to expose code generation
// for each typical C operator and type.

// TOFIX:
//   comma operator
//   aggregates

#include <stdio.h>

enum Rep {
  SCALAR,
  FLOAT,
  BOOLEAN,
  NONE
} Rep;

struct {
  char* sname;
  char* lname;
  enum Rep  rep;
} Types[] = {
  {"b",         "bool",	BOOLEAN},
  {"uc",	"unsigned char", SCALAR},
  {"sc",	"signed char", SCALAR},
  {"pc",	"char", SCALAR},	// plain char
  {"us",	"unsigned short", SCALAR},
  {"ss",	"signed short", SCALAR},
  {"s",	        "short", SCALAR},
  {"ui",	"unsigned int", SCALAR},
  {"si",	"signed int", SCALAR},
  {"i",	        "int", SCALAR},
  {"ul",	"unsigned long", SCALAR},
  {"sl",	"signed long", SCALAR},
  {"l",	        "long", SCALAR},
  {"ull",	"unsigned long long", SCALAR},
  {"sll",	"signed long long", SCALAR},
  {"ll",	"long long", SCALAR},
  {"f",	        "float", FLOAT},
  {"d",	        "double", FLOAT},
};

struct {
  char* sname;
  char* lname;
  enum Rep exclude;
} binaryOps[] = {
  {"+", "add", NONE},
  {"-", "sub", NONE},
  {"*", "mul", NONE},
  {"/", "div", NONE},
  {"%", "mod", FLOAT},
};

struct {
  char* sname;
  char* lname;
  enum Rep exclude;
} assignOps[] = {
  {"+=", "addeq", NONE},
  {"-=", "subeq", NONE},
  {"*=", "muleq", NONE},
  {"/=", "diveq", NONE},
  {"%=", "modeq", FLOAT},
  {"&=", "andeq", FLOAT},
  {"|=", "oreq", FLOAT},
  {"^=", "xoreq", FLOAT},
  {"<<=", "shleq", FLOAT},
  {">>=", "shreq", FLOAT},
};

struct {
  char* sname;
  char* lname;
} unaryOps[] = {
  "-", "neg",
  "~", "compl",
  "!", "not",
};

struct {
  char* sname;
  char* lname;
} logicalOps[] = {
  "&&", "and",
  "||", "or",
};

struct {
  char* sname;
  char* lname;
  enum Rep exclude;
} prePostOps[] = {
  {"++", "inc", BOOLEAN},
  {"--", "dec", BOOLEAN}
};

struct {
  char* sname;
  char* lname;
} eqOps[] = {
  "==", "equal",
  "!=", "notequal",
};

struct {
  char* sname;
  char* lname;
} relOps[] = {
  ">",  "gt",
  ">=", "ge",
  "<",  "lt",
  "<=", "le",
};

struct {
  char* sname;
  char* lname;
} booleanOps[] = {
  "&", "and",
  "|", "or",
  "^", "xor",
};

struct {
  char* sname;
  char* lname;
  enum Rep exclude;
} shiftOps[] = {
  "<<", "ls", FLOAT,
  ">>", "rs", FLOAT,
};

#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))

int main() {

  puts("#include <stdbool.h>");
  printf("// Binary Operators\n");
  for (int i = 0; i < ARRAY_SIZE(binaryOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (Types[j].rep == FLOAT && binaryOps[i].exclude == FLOAT) continue;
      printf("%s %s_%s_%s(%s a, %s b) { return a %s b; }\n",
        Types[j].lname,
        binaryOps[i].lname,
        Types[j].sname,
        Types[j].sname,
        Types[j].lname,
        Types[j].lname,
        binaryOps[i].sname
      );
    }
  }

  printf("// Unary Operators\n");
  for (int i = 0; i < ARRAY_SIZE(unaryOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (Types[j].rep == FLOAT) continue;
      printf("%s %s_%s(%s a) { return %s a; }\n",
        Types[j].lname,
        unaryOps[i].lname,
        Types[j].sname,
        Types[j].lname,
        unaryOps[i].sname
      );
    }
  }

  printf("// Equal Operators\n");
  for (int i = 0; i < ARRAY_SIZE(eqOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      printf("%s %s_%s_%s(%s a, %s b) { return a %s b; }\n",
        Types[j].lname,
        eqOps[i].lname,
        Types[j].sname,
        Types[j].sname,
        Types[j].lname,
        Types[j].lname,
        eqOps[i].sname
      );
    }
  }

  printf("// Relational Operators\n");
  for (int i = 0; i < ARRAY_SIZE(relOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      printf("%s %s_%s_%s(%s a, %s b) { return a %s b; }\n",
        Types[j].lname,
        relOps[i].lname,
        Types[j].sname,
        Types[j].sname,
        Types[j].lname,
        Types[j].lname,
        relOps[i].sname
      );
    }
  }

  printf("// Cast Operators\n");
  for (int i = 0; i < ARRAY_SIZE(Types); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      printf("%s cast_%s_to_%s(%s a) { return a; }\n",
        Types[j].lname,
        Types[i].sname,
        Types[j].sname,
        Types[i].lname
      );
    }
  }

  printf("// Deref Operators\n");
  for (int i = 0; i < ARRAY_SIZE(Types); i++) {
    printf("%s deref_%s(%s* a) { return *a; }\n",
      Types[i].lname,
      Types[i].sname,
      Types[i].lname
    );
  }

  printf("// Boolean Operators\n");
  for (int i = 0; i < ARRAY_SIZE(booleanOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (Types[j].rep == FLOAT) continue;
      printf("%s %s_%s_%s(%s a, %s b) { return a %s b; }\n",
        Types[j].lname,
        booleanOps[i].lname,
        Types[j].sname,
        Types[j].sname,
        Types[j].lname,
        Types[j].lname,
        booleanOps[i].sname
      );
    }
  }

  printf("// Sizeof Operators\n");
  for (int i = 0; i < ARRAY_SIZE(Types); i++) {
    printf("int sizeof_%s(void) { return sizeof(%s); }\n",
      Types[i].sname, Types[i].lname
    );
  }

  printf("// Shift Operators\n");
  for (int i = 0; i < ARRAY_SIZE(shiftOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (shiftOps[i].exclude == FLOAT && Types[j].rep == FLOAT) continue;
      printf("%s %s_%s(%s a) { return a << 1; }\n",
        Types[j].lname,
        shiftOps[i].lname,
        Types[j].sname,
        Types[j].lname
      );
    }
  }

  printf("// Assign Operators\n");
  for (int i = 0; i < ARRAY_SIZE(assignOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (Types[j].rep == FLOAT && assignOps[i].exclude == FLOAT) continue;
      printf("%s %s_%s_%s(%s a, %s b) { return a %s b; }\n",
        Types[j].lname,
        assignOps[i].lname,
        Types[j].sname,
        Types[j].sname,
        Types[j].lname,
        Types[j].lname,
        assignOps[i].sname
      );
    }
  }

  printf("// Tertiary Operator\n");
  for (int j = 0; j < ARRAY_SIZE(Types); j++) {
    printf("%s ternary_%s(bool p, %s a, %s b) {return p ? a : b ; }\n",
      Types[j].lname,
      Types[j].sname,
      Types[j].lname,
      Types[j].lname
    );
  }

  // requires -Wno-return-stack-address
  printf("// AddressOf Operator\n");
  for (int j = 0; j < ARRAY_SIZE(Types); j++) {
    printf("%s %s_var; ", Types[j].lname, Types[j].sname);
    printf("%s* address_of_%s() { return &%s_var; }\n",
      Types[j].lname,
      Types[j].sname,
      Types[j].sname
    );
  }

  printf("// Logical Operators\n");
  for (int i = 0; i < ARRAY_SIZE(logicalOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      printf("%s logical_%s_%s(%s a, %s b) { return a %s b; }\n",
        Types[j].lname,
        logicalOps[i].lname,
        Types[j].sname,
        Types[j].lname,
        Types[j].lname,
        logicalOps[i].sname
      );
    }
  }

  printf("// preinc/predec Operator\n");
  for (int i = 0; i < ARRAY_SIZE(prePostOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (Types[j].rep == BOOLEAN && prePostOps[i].exclude == BOOLEAN) continue;
      printf("%s pre_%s_%s(%s a) { return %sa; }\n",
        Types[j].lname,
        Types[j].sname,
        prePostOps[i].lname,
        Types[j].lname,
        prePostOps[i].sname
      );
    }
  }

  printf("// postinc/postdec Operator\n");
  for (int i = 0; i < ARRAY_SIZE(prePostOps); i++) {
    for (int j = 0; j < ARRAY_SIZE(Types); j++) {
      if (Types[j].rep == BOOLEAN && prePostOps[i].exclude == BOOLEAN) continue;
      printf("%s post_%s_%s(%s a) { a%s; return a; }\n",
        Types[j].lname,
        Types[j].sname,
        prePostOps[i].lname,
        Types[j].lname,
        prePostOps[i].sname
      );
    }
  }

}

