#ifndef VM_H
#define VM_H


#include <stdio.h>

typedef struct {
	int rgster;
} Register;

typedef struct {
	Register ax, bx, cx, dx, ex, fx, gx, hx;
} Registers;

typedef struct {
	char name[10];
	void (*execute)(Register *reg, int op1, int op2);
} Instruction;

typedef struct {
	Instruction add;
	Instruction show;
	Instruction mov;
} ISA;

void showRegister(Register r);
void changeRegister(Register *r, int res);
void add(Register *r, Register *op1, Register *op2);
void show_exec(Register *reg, int op1, int op2);
void change_exec(Register *reg, int op1, int op2);
void add_exec(Register *reg, int op1, int op2);

#endif