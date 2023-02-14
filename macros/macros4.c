/*
Дефинирайте макро функция, която да се казва COMMAND да приема два аргумента NAME и TYPE и да създава идентификатор за командна функция от типа TYPE_NAME_command. Така например COMMAND(quit, internal) да създава идентификатор internal_quit_command. 
  Направете макро функция която да се казва DEFINE_COMMAND, която да приема два аргумента NAME и TYPE и да използва макрото COMMAND за да създаде декларация на команда от типа “void TYPE_NAME_command(void)” така например DEFINE_COMMAND(quit, external) { … } трябва да създаде дефиниция на функция “void external_quit_command(void) {...}”.
Направете две макро-функции, които да се казват DEFINE_EXTERNAL_COMMAND и DEFINE_INTERNAL_COMMAND, които да приемат един аргумент NAME и които да използват макрото DEFINE_COMMAND за да създават декларации на external и internal команди, например DEFINE_EXTERNAL_COMMAND(quit){...} да дефинира функция: “void external_quit_command(void){...}”, а DEFINE_INTERNAL_COMMAND(print){...} да дефинира функция: “void internal_print_command(void){...}”. 
 Направете макро функция “CALL_COMMAND(NAME, TYPE), която да извиква функция дефинирана посредством DEFINE_COMMAND (за целта макрото е хубаво да преизползва COMMAND макро функцията). Така например CALL_COMMAND(quit, internal); трябва да извиква функцията “internal_quit_command()”. 

Направете макро функции “CALL_INTERNAL_COMMAND(NAME)” и “CALL_EXTERNAL_COMMAND(NAME), които да преизползват CALL_COMMAND макрото за да извикват функции дефинирани посредством DEFINE_EXTERNAL_COMMAND и DEFINE_INTERNAL_COMMAND. Така например CALL_INTERNAL_COMMAND(quit) трябва да извиква функция “internal_quit_command()”, a CALL_EXTERNAL_COMMAND(delete) трябва да извиква функция “external_delete_command()”. Демонстрирайте дефиниране на external и internal функции и тяхното извикване.*/

#include<stdio.h>

#define COMMAND(NAME,TYPE) TYPE ## _ ## NAME ## _command // internal_quit_command

#define DEFINE_COMMAND(NAME,TYPE) void COMMAND(NAME,TYPE)(void) 
#define DEFINE_EXTERNAL_COMMAND(NAME) DEFINE_COMMAND(NAME,exteral) 
#define DEFINE_INTERNAL_COMMAND(NAME) DEFINE_COMMAND(NAME,internal) 

#define CALL_COMMAND(NAME,TYPE) COMMAND(NAME,TYPE) () 
#define CALL_INTERNAL_COMMAND(NAME) CALL_COMMAND(NAME,internal) 
#define CALL_EXTERNAL_COMMAND(NAME) CALL_COMMAND(NAME,external)
DEFINE_COMMAND(print,external) {printf("external quit\n");}
DEFINE_INTERNAL_COMMAND(quit) {printf("internal print\n");}
void main()
{
    CALL_EXTERNAL_COMMAND(print);
    CALL_COMMAND(quit,internal);
   

}