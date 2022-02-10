#include<stdio.h>
int add_numbers();
int value1,value2,value3; //global variable
int add_numbers()
{
	auto int result;  //local variable
	result=value1+value2+value3;
	return result;
}
void main()
{
	auto int result;   //local variablr
	value1 = 10;
    value2 = 20;
    value3 = 30;
    result = add_numbers();
    printf("The sum of %d + %d + %d is %d\n",value1, value2, value3, result);

}
