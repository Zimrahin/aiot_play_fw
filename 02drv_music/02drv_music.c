#include <string.h>
#include <stdbool.h>
#include "board.h"
#include "music.h"

//=========================== defines =========================================

//=========================== typedef =========================================

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== main ============================================

int main(void) {
    
    // bsp
    board_init();

    // music
    music_init();
    music_play(SONGTITLE_STAR_WARS);
    
    // main loop
    while(1) {

        // wait for event
        board_sleep();
    }
}

//=========================== private =========================================
