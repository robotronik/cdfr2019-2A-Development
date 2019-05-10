#include "PathDefinition.h"

ACTION* ActionsDefinition()
{
    ACTION actions[ACTION_NUMBER] =
    {
        (void*)0, 
        (void*)0
    };

    return actions;
}

PATH* PathDefinition()
{
    ACTION* actions = ActionsDefinition();

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
    
    return paths;
}