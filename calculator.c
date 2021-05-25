/* calculator in c language, can be used to test (or) your works also, the code is open so you can use git*/

/* functions are add, subtract,multiply, divide, remainder*/

#include <ctype.h>
#include <stdio.h>

int main() {

printf("Welcome To Calculator, \n Type A For Addition\n Type B For Subtraction\n Type M For Multiply \n Type D For Divide\n Type R For Reminder \n Type E To Exit \n \n Input: ");

char useroption, option;

scanf("%c", &useroption);

option = tolower(useroption);

if (option == 'a') {

printf("How Many Numbers You Want To Add? \n Input: ");

int times, i;

scanf("%d", &times);

if (times <= 1) {
printf("Enter Atleast 2 Numbers");
}

for (i = 0; i < times; i++) {

float digit;

printf("Type A Number: ");

scanf("%f", &digit);

float result = digit;

result = result + digit;

if (i == times) {
printf("The Sum Is: %f\n", result);
}
}

} else if (option == 's') {

printf("How Many Numbers You Want To Subtract? \n Input: ");

int times, i;

scanf("%d", &times);

if (times <= 1) {
printf("Enter Atleast 2 Numbers");
}

for (i = 0; i < times; i++) {

float digit;

printf("Type A Number: ");

scanf("%f", &digit);

float result = digit;

result = result - digit;

if (i == times) {
printf("The Result Is: %f\n", result);
}
}

} else if (option == 'm') {

printf("How Many Numbers You Want To Multiply? \n Input: ");

int times, i;


scanf("%d", &times);

if (times <= 1) {
printf("Enter Atleast 2 Numbers");
}

for (i = 0; i < times; i++) {

float digit;

printf("Type A Number: ");

scanf("%f", &digit);

float result = digit;

result = result * digit;
if (i == times) {
printf("The Result Is: %f\n", result);
}
}
} else if (option == 'd') {

printf("How Many Numbers You Want To Divide? \n Input: ");

int times, i;

scanf("%d", &times);

if (times <= 1) {
printf("Enter Atleast 2 Numbers");
}

for (i = 0; i < times; i++) {

float digit;

printf("Type A Number: ");

scanf("%f", &digit);

float result = digit;

result = result / digit;
if (i == times) {
printf("The Result Is: %f\n", result);
}
}
} else if (option == 'r') {
printf("How Many Numbers You Want To Add? \n Input: ");

int times, i;

scanf("%d", &times);

if (times <= 1) {
printf("Enter Atleast 2 Numbers");
}

for (i = 0; i < times; i++) {

float digit;

printf("Type A Number: ");

scanf("%f", &digit);

float result = digit;

result = result / digit;
if (i == times) {
printf("The Result Is: %f\n", result);
}
}
} else if (option == 'e') {

printf("Bye Have A Great Time!!!\n");

} else {
printf("Invalid Option, Program End!!! \n");
}
return 0;
}
