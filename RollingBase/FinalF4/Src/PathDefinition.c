#include "PathDefinition.h"

const ACTION actions[ACTION_NUMBER] =
    {
        (void*)0, 
        (void*)0
    };

PATH paths[PATH_NUMBER] =
    {
        {
            .pos.x = 1000,
            .pos.y = 1000,
            .speed = 1000,
            .action = actions[NOTHING]
        },
        {
            .pos.x = 1000,
            .pos.y = 1000,
            .speed = 1000,
            .action = actions[ACTION1]
        }
    };

PATH* PathDefinition()
{
    return paths;
}