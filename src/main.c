#include "implementations.h"
#include "soc.h"
#include "tinyio.h"

int main() {
    uart_bitbang_init();
    printf_("Hello, World\n");
}
