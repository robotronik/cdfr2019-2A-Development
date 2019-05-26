#ifndef PATH_DEFINITION_H
#define PATH_DEFINITION_H

//Include header with pointer action needed



//Set the static table's size of path and action
#define PATH_NUMBER 2
#define ACTION_NUMBER 2



/* ACTION declaration
ACTION : function pointer
ACTION_TYPE : name to give for the action
*/
typedef void (*ACTION)(void);

typedef enum
{
    NOTHING,
    ACTION1
}ACTION_TYPE;



/*PATH declaration
POINT : position

PATH :
 - pos : position to go,
 - speed : speed use in the path,
 - action : function pointer of the action to perfom at the end of the path
*/
typedef struct 
{
    int x;
    int y;
}POINT;

typedef struct 
{
    POINT pos;
    int speed;
    ACTION action;
} PATH;

const ACTION actions[ACTION_NUMBER];
PATH paths[PATH_NUMBER];

//PATHs' definition
PATH* PathDefinition();

#endif