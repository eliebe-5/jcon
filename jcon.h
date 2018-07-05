#include <string.h>

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
	JSONelmnt* next;
	JSONelmnt* prev;
	JSONelmnt* child;

	value_type type;
	json_value value; 

	char* name;
} JSONelmnt;

JSONelmnt* parseJSON(char*)
{
	JSONelmnt* first;	
	first = (JSONelmnt*) malloc(sizeof(JSONelmnt));

	

	return first;
}
