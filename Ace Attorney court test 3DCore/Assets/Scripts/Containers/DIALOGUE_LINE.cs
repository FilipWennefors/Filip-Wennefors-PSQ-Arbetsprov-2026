using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//NOTICE FOR PSQ: The following is tutorial code, Read the included document about the project for more info

namespace DIALOGUE
{
    public class DIALOGUE_LINE
    {
        public string speaker;
        public string dialogue;
        public DL_COMMAND_DATA commands;

        public bool hasCommands => commands != null;
    
        public DIALOGUE_LINE(string speaker, string dialogue, string commands)
        {
            this.speaker = speaker;
            this.dialogue = dialogue;
            this.commands = (string.IsNullOrWhiteSpace(commands) ? null : new DL_COMMAND_DATA(commands));
        }
    }
}