#include <stdio.h>
#include "src/header/exit_status.h"
#include "src/01-hello_world.h"
#include "src/02-conversion.h"
#include "src/03-cat.h"
#include "src/04-crypt.h"
#include "src/05-wc.h"
#include "src/06-histogram.h"
#include "src/07-power.h"
#include "src/08-longest-line.h"

EXIT_STATUS main() {
    printf("\nSmall example programs to learn C:\n");
    /*
    printf("Hello World\n");
    hello_world();
    */
    
    /*
    printf("\nFahrenheit to Celsius table\n");
    ftc();
    */
    
    /*
    printf("\nCat\n");
    cat();
    printf("\nReplace whitespace characteres\n");
    replace_whitespace();
    */
    
    /*
    printf("\nRotate N encryption\n");
    // rotn(3);
    */

    /*
    printf("\nWord count\n");
    wc();
    wc_whitespace();
    wcl();
    wcd();
    */

    /*
    printf("\nPrint histograms\n");
    histlen_hori();
    histlen_vert();
    histlen_vert();
    */

    /*
    printf("\nPower\n");
    printf("2^5 = %d\n", power(2, 5));
    */

    printf("\nLongest line\n");
    EXIT_STATUS success = longest_line();

    return success;
}
