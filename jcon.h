#include <string.h>
#include <stdio.h>

typedef enum
{
	INT,
	DOUBLE,
	STRING,
	OBJECT,
	LIST,
	NUL
} value_type;

typedef union
{
	int int_val;
	double double_val;
	char* string_val;
} json_value;

typedef struct
{
	JSON_elmnt* next;
	JSON_elmnt* prev;
	JSON_elmnt* child;

	value_type type;
	json_value value; 

	char* name;
} JSON_elmnt;

JSON_elmnt* parse_JSON(char* JSON_string)
{

	char* it = JSON_string;

	while(it != '/0')
	{
		printf("%c", &it);
	}

	return NULL;
}
